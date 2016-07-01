/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin processor.

  ==============================================================================
*/

#ifndef PLUGINPROCESSOR_H_INCLUDED
#define PLUGINPROCESSOR_H_INCLUDED

#include "../JuceLibraryCode/JuceHeader.h"
#include "ParametricEQFilter.h"
#include "Compressor.h"
#include <math.h>
//#define compressor 4
#define Eq 4
#define Ratio 2 
#define Thresh -20
#define MakeUpGain 4
#define AttackTime 4
#define ReleaseTime 4




//==============================================================================
/**
*/
class DiddyBop_AudioProcessor  : public AudioProcessor
{
public:
    //==============================================================================
    DiddyBop_AudioProcessor();
    ~DiddyBop_AudioProcessor();

    //==============================================================================
    void prepareToPlay (double sampleRate, int samplesPerBlock) override;
    void releaseResources() override;

   #ifndef JucePlugin_PreferredChannelConfigurations
    bool setPreferredBusArrangement (bool isInput, int bus, const AudioChannelSet& preferredSet) override;
   #endif

    void processBlock (AudioSampleBuffer&, MidiBuffer&) override;

    //==============================================================================
    AudioProcessorEditor* createEditor() override;
    bool hasEditor() const override;

    //==============================================================================
    const String getName() const override;

    bool acceptsMidi() const override;
    bool producesMidi() const override;
    double getTailLengthSeconds() const override;

    //==============================================================================
    int getNumPrograms() override;
    int getCurrentProgram() override;
    void setCurrentProgram (int index) override;
    const String getProgramName (int index) override;
    void changeProgramName (int index, const String& newName) override;

    //==============================================================================
    void getStateInformation (MemoryBlock& destData) override;
    void setStateInformation (const void* data, int sizeInBytes) override;

    // these are used to persist the UI's size - the values are stored along with the
    // filter's other parameters, and the UI component will update them when it gets
    // resized.
    int lastUIWidth_, lastUIHeight_;

    //Compressor
    //==============================================================================
    void compressor(AudioSampleBuffer &buffer, int m);// compressor functions

    template <class T> const T& max(const T& a, const T& b);

    float getThreshold();
    float getRatio();
    float getGain();
    float getAttackTime();
    float getReleaseTime();
    void setThreshold(float T);
    void setGain(float G);
    void setRatio(float R);
    void setAttackTime(float A);
    void setReleaseTime(float R);
    void resetAll();

    // parameters
    int bufferSize;
    bool compressorONOFF[4];
    int M;
    bool autoTime;

    //==============================================================================


    enum Parameters
    {
        kCentreFrequencyParam = 0, /* Centre frequency in Hz */
        kQParam,                   /* Filter Q */
        kGainDecibelsParam,        /* Boost/cut in decibels */
        kNumParameters
    };


  
    float centreFrequency_, q_, gainDecibels_,bandWidth;

    int getNumParameters();

    float getParameter(int index);
    void setParameter(int index, float newValue);
    int numEqFilters;
    bool bassBoost;

private:
    //Eq
    //=============================================================================
    void updateEQFilter(float sampleRate);
    ParametricEQFilter **eqFilters_;
    int numEqFilters_;
public:
	Compressor** compressor_;
    //================================	=============================================
    //Compressor
    //=============================================================================
    AudioSampleBuffer inputBuffer[5];

    HeapBlock <float> x_g, x_l, y_g, y_l, c,c2;// input, output, control
    
                                                                                                        
                                                                                                        // parameters
    float ratio, threshold, makeUpGain, tauAttack, tauRelease, alphaAttack, alphaRelease, yL_prev;
    int nhost;
    int samplerate;
    //=============================================================================


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (DiddyBop_AudioProcessor)
};


#endif  // PLUGINPROCESSOR_H_INCLUDED
