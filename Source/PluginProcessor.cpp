/*
  ==============================================================================

	This file was auto-generated!

	It contains the basic framework code for a JUCE plugin processor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"



//==============================================================================
DiddyBop_AudioProcessor::DiddyBop_AudioProcessor()
	:
	nhost(0)
{
	//Eq objects
	//==============================================================================
	// Set default values:
	centreFrequency_ = 1000.0;
	q_ = 2.0;
	gainDecibels_ = 0.0;

	// Initialise the filters later when we know how many channels
	eqFilters_ = 0;
	compressor_ = 0;
	numEqFilters_ = 0;

	//==============================================================================

	for (int i = 0; i < 5; i++)
	{
		inputBuffer[i].setSize(1, 1);
	}




	//Compressor
	//=======================
	resetAll();
	//=======================

	lastUIWidth_ = 550;
	lastUIHeight_ = 100;
}

DiddyBop_AudioProcessor::~DiddyBop_AudioProcessor()
{
}

//==============================================================================
const String DiddyBop_AudioProcessor::getName() const
{
	return JucePlugin_Name;
}

bool DiddyBop_AudioProcessor::acceptsMidi() const
{
#if JucePlugin_WantsMidiInput
	return true;
#else
	return false;
#endif
}

bool DiddyBop_AudioProcessor::producesMidi() const
{
#if JucePlugin_ProducesMidiOutput
	return true;
#else
	return false;
#endif
}

double DiddyBop_AudioProcessor::getTailLengthSeconds() const
{
	return 0.0;
}

int DiddyBop_AudioProcessor::getNumPrograms()
{
	return 1;   // NB: some hosts don't cope very well if you tell them there are 0 programs,
				// so this should be at least 1, even if you're not really implementing programs.
}

int DiddyBop_AudioProcessor::getCurrentProgram()
{
	return 0;
}

void DiddyBop_AudioProcessor::setCurrentProgram(int index)
{
}

const String DiddyBop_AudioProcessor::getProgramName(int index)
{
	return String();
}

void DiddyBop_AudioProcessor::changeProgramName(int index, const String& newName)
{
}

//==============================================================================
void DiddyBop_AudioProcessor::prepareToPlay(double sampleRate, int samplesPerBlock)
{
	// Use this method as the place to do any pre-playback


	//Eq Prepare
	//==============================================================================

	numEqFilters_ = getNumInputChannels();
	eqFilters_ = (ParametricEQFilter**)malloc(numEqFilters_ * sizeof(ParametricEQFilter*));
	if (eqFilters_ == 0)
		numEqFilters_ = 0;
	else {
		for (int j = 0; j < numEqFilters_; j++)
			eqFilters_[j] = new ParametricEQFilter;
	}

	updateEQFilter(sampleRate);

	// Update the filter settings to work with the current parameters and sample rate

	//==============================================================================

		//Compressor
		//==========================================================================




		// Use this method as the place to do any pre-playback initialisation that you need.
	M = round(getNumInputChannels() / 2);
	samplerate = (float)getSampleRate();
	bufferSize = getBlockSize();
	// Allocate a lot of dynamic memory here

	compressor_ = (Compressor**)malloc(2 * sizeof(Compressor*));
	for (size_t i = 0; i < 3; i++)
	{
		compressor_[i] = new Compressor(bufferSize,sampleRate);
	}
	
	compressor_[0]->setThreshold(getThreshold());

	/*x_g.allocate(bufferSize, true);
	x_l.allocate(bufferSize, true);
	y_g.allocate(bufferSize, true);
	y_l.allocate(bufferSize, true);
	c.allocate(bufferSize, true);
	c2.allocate(bufferSize, true);*/

	autoTime = false;

	//==========================================================================


// initialisation that you need..
}

void DiddyBop_AudioProcessor::releaseResources()
{
	// When playback stops, you can use this as an opportunity to free up any

	//Eq Release
	//==============================================================================
	for (int i = 0; i < numEqFilters_; i++)
		delete eqFilters_[i];
	if (numEqFilters_ != 0)
		free(eqFilters_);
	numEqFilters_ = 0;
	eqFilters_ = 0;

	//==============================================================================


	// spare memory, etc.
}

#ifndef JucePlugin_PreferredChannelConfigurations
bool DiddyBop_AudioProcessor::setPreferredBusArrangement(bool isInput, int bus, const AudioChannelSet& preferredSet)
{
	// Reject any bus arrangements that are not compatible with your plugin

	const int numChannels = preferredSet.size();

#if JucePlugin_IsMidiEffect
	if (numChannels != 0)
		return false;
#elif JucePlugin_IsSynth
	if (isInput || (numChannels != 1 && numChannels != 2))
		return false;
#else
	if (numChannels != 1 && numChannels != 2)
		return false;

	if (!AudioProcessor::setPreferredBusArrangement(!isInput, bus, preferredSet))
		return false;
#endif

	return AudioProcessor::setPreferredBusArrangement(isInput, bus, preferredSet);
}
#endif

void DiddyBop_AudioProcessor::processBlock(AudioSampleBuffer& buffer, MidiBuffer& midiMessages)
{
	const int totalNumInputChannels = getTotalNumInputChannels();
	const int totalNumOutputChannels = getTotalNumOutputChannels();
	const int numSamples = buffer.getNumSamples();          // How many samples in the buffer for this block?
	int channel;

	if (bassBoost)
	{
		setParameterNotifyingHost(DiddyBop_AudioProcessor::kCentreFrequencyParam, 100);
		setParameterNotifyingHost(DiddyBop_AudioProcessor::kQParam, 2);
	}
	else
	{
		setParameterNotifyingHost(DiddyBop_AudioProcessor::kCentreFrequencyParam, 10);
		setParameterNotifyingHost(DiddyBop_AudioProcessor::kQParam, 0.1);
	}
	
	float** samples;
		

	// Go through each channel of audio that's passed in
	//if (onOff)
	{
		for (channel = 0; channel < totalNumInputChannels; ++channel)
		{
			// channelData is an array of length numSamples which contains the audio for one channel
			float* channelData = buffer.getWritePointer(channel);

			// Run the samples through the IIR filter whose coefficients define the parametric
			// equaliser. See juce_IIRFilter.cpp for the implementation.
			eqFilters_[channel]->processSamples(channelData, numSamples);

		}
	}

	if(compressorONOFF[0])
	////////////////////////////////////////////////////
	{

		inputBuffer[0].setSize(M, bufferSize);
		inputBuffer[0].clear();
		for (int m = 0; m < M; ++m)
		{
			if ((compressor_[0]->getThreshold() < 0))
			{
				inputBuffer[0].clear(m, 0, bufferSize);
				// Mix down left-right to analyse the input		
				inputBuffer[0].addFrom(m, 0, buffer, m * 2, 0, bufferSize, 0.5);
				inputBuffer[0].addFrom(m, 0, buffer, m * 2 + 1, 0, bufferSize, 0.5);
				// compression : calculates the control voltage
				//compressor(inputBuffer[0], m);
				
				inputBuffer[1].makeCopyOf(inputBuffer[0]);
				
				compressor_[0]->setRatio(2);
				compressor_[0]->setAttackTime(14);
				compressor_[0]->setReleaseTime(41);
				compressor_[0]->setThreshold(getThreshold());
				compressor_[0]->setGain(0);


				//gain if compression is less than -12
				if (compressor_[0]->getThreshold() < (-12))
				{
					compressor_[0]->setGain(abs(10));
					//setParameterNotifyingHost(DiddyBop_AudioProcessor::kGainDecibelsParam, 10);
				}
				else
					compressor_[0]->setGain(0);
					//
				//Compress Buffer 0
				compressor_[0]->Compress(inputBuffer[0], m);


				//Make a copy of buffer 0
				inputBuffer[1].makeCopyOf(inputBuffer[0]);

				//InputBuffer1 copy

				/*samples[0] = buffer.getWritePointer(0);
				samples[1] = buffer.getWritePointer(1);*/
				
				//for (int i = 0; i < bufferSize; ++i)
				//{
				//	//inputBuffer[1].getWritePointer(2 * m + 0)[i] *= compressor_[0]->c[i];
				//}

				compressor_[1]->setRatio(2);
				compressor_[1]->setAttackTime(50);
				compressor_[1]->setReleaseTime(80);
				compressor_[1]->setThreshold(-10);
				compressor_[1]->setGain(0);
			    compressor_[1]->Compress(inputBuffer[1], m);

				//inputBuffer[2].makeCopyOf(inputBuffer[1]);



				//compressor_[0]->Compress(inputBuffer[0], m);

				compressor_[2]->setRatio(40);
				compressor_[2]->setAttackTime(20);
				compressor_[2]->setReleaseTime(90);
				compressor_[2]->setThreshold(-0.2);
				compressor_[2]->setGain(0);
				compressor_[2]->Compress(inputBuffer[1], m);

				for (int i = 0; i < bufferSize; ++i)
				{
		     		compressor_[0]->c[i] *= compressor_[1]->c[i]*compressor_[2]->c[i];
				}

				// apply control voltage to the audio signal
				for (int i = 0; i < bufferSize; ++i)
				{
					buffer.getWritePointer(2 * m + 0)[i] *= compressor_[0]->c[i];
					buffer.getWritePointer(2 * m + 1)[i] *= compressor_[0]->c[i];
				}

				inputBuffer[0].clear(m, 0, bufferSize);
				// Mix down left-right to analyse the output
				inputBuffer[0].addFrom(m, 0, buffer, m * 2, 0, bufferSize, 0.5);
				inputBuffer[0].addFrom(m, 0, buffer, m * 2 + 1, 0, bufferSize, 0.5);
			}
		}

	}
	// Go through the remaining channels. In case we have more outputs
	// than inputs, or there aren't enough filters, we'll clear any
	// remaining output channels (which could otherwise contain garbage)
	while (channel < totalNumOutputChannels)
	{
		buffer.clear(channel++, 0, buffer.getNumSamples());
	}

	//// In case we have more outputs than inputs, this code clears any output
	//// channels that didn't contain input data, (because these aren't
	//// guaranteed to be empty - they may contain garbage).
	//// This is here to avoid people getting screaming feedback
	//// when they first compile a plugin, but obviously you don't need to keep
	//// this code if your algorithm always overwrites all the output channels.
	//for (int i = totalNumInputChannels; i < totalNumOutputChannels; ++i)
	//    buffer.clear (i, 0, buffer.getNumSamples());

	//// This is the place where you'd normally do the guts of your plugin's
	//// audio processing...
	//for (int channel = 0; channel < totalNumInputChannels; ++channel)
	//{
	//    float* channelData = buffer.getWritePointer (channel);

	//    // ..do something to the data...
	//}
}

//==============================================================================
bool DiddyBop_AudioProcessor::hasEditor() const
{
	return true; // (change this to false if you choose to not supply an editor)
}

AudioProcessorEditor* DiddyBop_AudioProcessor::createEditor()
{
	return new DiddyBop_AudioProcessorEditor(this);
}

//==============================================================================
void DiddyBop_AudioProcessor::getStateInformation(MemoryBlock& destData)
{
	// You should use this method to store your parameters in the memory block.
	// You could do that either as raw data, or use the XML or ValueTree classes
	// as intermediaries to make it easy to save and load complex data.
}

void DiddyBop_AudioProcessor::setStateInformation(const void* data, int sizeInBytes)
{
	// You should use this method to restore your parameters from this memory block,
	// whose contents will have been created by the getStateInformation() call.
}



int DiddyBop_AudioProcessor::getNumParameters()
{
	return kNumParameters;
}

float DiddyBop_AudioProcessor::getParameter(int index)
{
	switch (index)
	{
	case kCentreFrequencyParam: return centreFrequency_;
	case kQParam:               return q_;
	case kGainDecibelsParam:    return gainDecibels_;
	default:                    return 0.0f;
	}
}

void DiddyBop_AudioProcessor::setParameter(int index, float newValue)
{
	switch (index)
	{
	case kCentreFrequencyParam:
		centreFrequency_ = newValue;
		updateEQFilter(getSampleRate());
		break;
	case kQParam:
		q_ = newValue;
		updateEQFilter(getSampleRate());
		break;
	case kGainDecibelsParam:
		gainDecibels_ = newValue;
		updateEQFilter(getSampleRate());
		break;
	default:
		break;
	}
}

void DiddyBop_AudioProcessor::updateEQFilter(float sampleRate)
{

	for (int j = 0; j < numEqFilters_; j++)
		eqFilters_[j]->makeParametric(2.0 * M_PI * centreFrequency_ / sampleRate,
			q_, powf(10.0f, gainDecibels_ / 20.0f));
}

//==============================================================================
// This creates new instances of the plugin..
AudioProcessor* JUCE_CALLTYPE createPluginFilter()
{
	return new DiddyBop_AudioProcessor();
}

float DiddyBop_AudioProcessor::getThreshold()
{
	return threshold;
}

float DiddyBop_AudioProcessor::getRatio()
{
	return ratio;
}

float DiddyBop_AudioProcessor::getGain()
{
	return makeUpGain;
}

float DiddyBop_AudioProcessor::getAttackTime()
{
	return tauAttack;
}

float DiddyBop_AudioProcessor::getReleaseTime()
{
	return tauRelease;
}

void DiddyBop_AudioProcessor::setThreshold(float T)
{
	threshold = T;
}

void DiddyBop_AudioProcessor::setGain(float G)
{
	makeUpGain = G;
}

void DiddyBop_AudioProcessor::setRatio(float R)
{
	ratio = R;
}

void DiddyBop_AudioProcessor::setAttackTime(float A)
{
	tauAttack = A;
}

void DiddyBop_AudioProcessor::setReleaseTime(float R)
{
	tauRelease = R;
}

void DiddyBop_AudioProcessor::resetAll()
{
	/*tauAttack = 0; tauRelease = 0;
	alphaAttack = 0; alphaRelease = 0;
	threshold = 0;
	ratio = 1;
	makeUpGain = 0;
	yL_prev = 0;
	for (int i = 0; i < bufferSize; ++i)
	{
		x_g[i] = 0;	y_g[i] = 0;
		x_l[i] = 0;	y_l[i] = 0;
		c[i] = 0; c2[i] = 0;
	}*/

}

template <class T> const T& DiddyBop_AudioProcessor::max(const T& a, const T& b)
{
	return (a < b) ? b : a;
}

void DiddyBop_AudioProcessor::compressor(AudioSampleBuffer &buffer, int m)
{
	//alphaAttack = exp(-1 / (0.001 * samplerate * tauAttack));
	//alphaRelease = exp(-1 / (0.001 * samplerate * tauRelease));
	//for (int i = 0; i < bufferSize; ++i)
	//{
	//	//Level detection- estimate level using peak detector
	//	if (fabs(buffer.getWritePointer(m)[i]) < 0.000001) x_g[i] = -120;
	//	else x_g[i] = 20 * log10(fabs(buffer.getWritePointer(m)[i]));
	//	//Gain computer- static apply input/output curve
	//	if (x_g[i] >= threshold) y_g[i] = threshold + (x_g[i] - threshold) / ratio;
	//	else y_g[i] = x_g[i];
	//	x_l[i] = x_g[i] - y_g[i];
	//	//Ballistics- smoothing of the gain 
	//	if (x_l[0] > yL_prev)  y_l[i] = alphaAttack * yL_prev + (1 - alphaAttack) * x_l[i];
	//	else				 y_l[i] = alphaRelease* yL_prev + (1 - alphaRelease) * x_l[i];
	//	//find control
	//	c[i] = pow(10, (makeUpGain - y_l[i]) / 20);
	//	yL_prev = y_l[i];
	//}
}
