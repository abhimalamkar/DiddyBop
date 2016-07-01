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

	void timerCallback();
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
    ScopedPointer<ToggleButton> CompressorToggle2;
    ScopedPointer<Slider> Threshold_Slider2;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (DiddyBop_AudioProcessorEditor)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_D1FB35774C320725__
