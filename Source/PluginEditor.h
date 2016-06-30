/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 4.2.1

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright (c) 2015 - ROLI Ltd.

  ==============================================================================
*/

#ifndef __JUCE_HEADER_D1FB35774C320725__
#define __JUCE_HEADER_D1FB35774C320725__

//[Headers]     -- You can add your own extra header files here --
#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Projucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class DiddyBop_AudioProcessorEditor  : public AudioProcessorEditor,
                                       public Timer,
                                       public SliderListener,
                                       public ButtonListener
{
public:
    //==============================================================================
    DiddyBop_AudioProcessorEditor (DiddyBop_AudioProcessor* ownFilter);
    ~DiddyBop_AudioProcessorEditor();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.

	void timerCallback() override;
	DiddyBop_AudioProcessor* getProcessor() const {
		return static_cast<DiddyBop_AudioProcessor*> (getAudioProcessor());
	}
	//void updateBandwidth();
    //[/UserMethods]

    void paint (Graphics& g) override;
    void resized() override;
    void sliderValueChanged (Slider* sliderThatWasMoved) override;
    void buttonClicked (Button* buttonThatWasClicked) override;



private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    //[/UserVariables]

    //==============================================================================
    ScopedPointer<Slider> EqCentreFrequecy_Slider;
    ScopedPointer<Label> CentreFrequecy_Lebel;
    ScopedPointer<Slider> EqQ_Slider;
    ScopedPointer<Label> Q_Lebel;
    ScopedPointer<Slider> EqGain_Slider;
    ScopedPointer<Label> GaindB_Lebel;
    ScopedPointer<ToggleButton> EqToggleButton;
    ScopedPointer<Slider> CompressionRatio_Slider;
    ScopedPointer<Label> CompressionRatio_Label;
    ScopedPointer<Slider> AttactTime_Slider;
    ScopedPointer<Label> Q_Lebel2;
    ScopedPointer<Slider> ReleaseTime_Slider;
    ScopedPointer<Label> GaindB_Lebel2;
    ScopedPointer<ToggleButton> CompressorToggle;
    ScopedPointer<Slider> Threshold_Slider;
    ScopedPointer<Label> Threshold;
    ScopedPointer<Slider> CompressorGain_Slider;
    ScopedPointer<Label> Threshold2;
    ScopedPointer<Slider> EqCentreFrequecy_Slider2;
    ScopedPointer<Label> CentreFrequecy_Lebel2;
    ScopedPointer<Slider> EqQ_Slider2;
    ScopedPointer<Label> Q_Lebel3;
    ScopedPointer<Slider> EqGain_Slider2;
    ScopedPointer<Label> GaindB_Lebel3;
    ScopedPointer<ToggleButton> EqToggleButton2;
    ScopedPointer<Slider> CompressionRatio_Slider2;
    ScopedPointer<Label> CompressionRatio_Label2;
    ScopedPointer<Slider> AttactTime_Slider2;
    ScopedPointer<Label> Q_Lebel4;
    ScopedPointer<Slider> ReleaseTime_Slider2;
    ScopedPointer<Label> GaindB_Lebel4;
    ScopedPointer<ToggleButton> CompressorToggle2;
    ScopedPointer<Slider> Threshold_Slider2;
    ScopedPointer<Label> Threshold3;
    ScopedPointer<Slider> CompressorGain_Slider2;
    ScopedPointer<Label> Threshold4;
    ScopedPointer<Slider> EqCentreFrequecy_Slider3;
    ScopedPointer<Label> CentreFrequecy_Lebel3;
    ScopedPointer<Slider> EqQ_Slider3;
    ScopedPointer<Label> Q_Lebel5;
    ScopedPointer<Slider> EqGain_Slider3;
    ScopedPointer<Label> GaindB_Lebel5;
    ScopedPointer<ToggleButton> EqToggleButton3;
    ScopedPointer<Slider> CompressionRatio_Slider3;
    ScopedPointer<Label> CompressionRatio_Label3;
    ScopedPointer<Slider> AttactTime_Slider3;
    ScopedPointer<Label> Q_Lebel6;
    ScopedPointer<Slider> ReleaseTime_Slider3;
    ScopedPointer<Label> GaindB_Lebel6;
    ScopedPointer<ToggleButton> CompressorToggle3;
    ScopedPointer<Slider> Threshold_Slider3;
    ScopedPointer<Label> Threshold5;
    ScopedPointer<Slider> CompressorGain_Slider3;
    ScopedPointer<Label> Threshold6;
    ScopedPointer<Slider> EqCentreFrequecy_Slider4;
    ScopedPointer<Label> CentreFrequecy_Lebel4;
    ScopedPointer<Slider> EqQ_Slider4;
    ScopedPointer<Label> Q_Lebel7;
    ScopedPointer<Slider> EqGain_Slider4;
    ScopedPointer<Label> GaindB_Lebel7;
    ScopedPointer<ToggleButton> EqToggleButton4;
    ScopedPointer<Slider> CompressionRatio_Slider4;
    ScopedPointer<Label> CompressionRatio_Label4;
    ScopedPointer<Slider> AttactTime_Slider4;
    ScopedPointer<Label> Q_Lebel8;
    ScopedPointer<Slider> ReleaseTime_Slider4;
    ScopedPointer<Label> GaindB_Lebel8;
    ScopedPointer<ToggleButton> CompressorToggle4;
    ScopedPointer<Slider> Threshold_Slider4;
    ScopedPointer<Label> Threshold7;
    ScopedPointer<Slider> CompressorGain_Slider4;
    ScopedPointer<Label> Threshold8;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (DiddyBop_AudioProcessorEditor)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_D1FB35774C320725__
