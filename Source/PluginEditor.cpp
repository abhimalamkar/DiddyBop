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

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "PluginEditor.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
DiddyBop_AudioProcessorEditor::DiddyBop_AudioProcessorEditor (DiddyBop_AudioProcessor* ownFilter)
    : AudioProcessorEditor(ownFilter)
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    addAndMakeVisible (Compressor1 = new Slider ("Centre Frequecy"));
    Compressor1->setRange (-60, 0, -60);
    Compressor1->setSliderStyle (Slider::Rotary);
    Compressor1->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    Compressor1->addListener (this);

	Compressor1->setSkewFactorFromMidPoint(-8);

    addAndMakeVisible (Compressor2 = new Slider ("Centre Frequecy"));
    Compressor2->setRange (-60, 0, -60);
    Compressor2->setSliderStyle (Slider::Rotary);
    Compressor2->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    Compressor2->addListener (this);

    addAndMakeVisible (CompressorToggle = new ToggleButton ("new toggle button"));
    CompressorToggle->setButtonText (TRANS("Compressor"));
    CompressorToggle->addListener (this);

    addAndMakeVisible (Input_Gain = new Slider ("Centre Frequecy"));
    Input_Gain->setRange (-100, 100, 1);
    Input_Gain->setSliderStyle (Slider::Rotary);
    Input_Gain->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    Input_Gain->addListener (this);

    addAndMakeVisible (OutPut_Gain = new Slider ("Centre Frequecy"));
    OutPut_Gain->setRange (1, 100, 0.1);
    OutPut_Gain->setSliderStyle (Slider::Rotary);
    OutPut_Gain->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    OutPut_Gain->addListener (this);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (1224, 600);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

DiddyBop_AudioProcessorEditor::~DiddyBop_AudioProcessorEditor()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    Compressor1 = nullptr;
    Compressor2 = nullptr;
    CompressorToggle = nullptr;
    Input_Gain = nullptr;
    OutPut_Gain = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

void DiddyBop_AudioProcessorEditor::timerCallback()
{
}

//==============================================================================
void DiddyBop_AudioProcessorEditor::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::white);

    g.setColour (Colours::black);
    g.setFont (Font (15.00f, Font::plain));
    g.drawText (TRANS("DiddyBop"),
                60, 20, 200, 30,
                Justification::centred, true);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void DiddyBop_AudioProcessorEditor::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    Compressor1->setBounds (56, 192, 200, 108);
    Compressor2->setBounds (272, 192, 200, 104);
    CompressorToggle->setBounds (48, 152, 150, 24);
    Input_Gain->setBounds (56, 312, 200, 108);
    OutPut_Gain->setBounds (272, 304, 200, 108);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void DiddyBop_AudioProcessorEditor::sliderValueChanged (Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]
    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == Compressor1)
    {
        //[UserSliderCode_Compressor1] -- add your slider handling code here..
		getProcessor()->setThreshold(Compressor1->getValue());
        //[/UserSliderCode_Compressor1]
    }
    else if (sliderThatWasMoved == Compressor2)
    {
        //[UserSliderCode_Compressor2] -- add your slider handling code here..

        //[/UserSliderCode_Compressor2]
    }
    else if (sliderThatWasMoved == Input_Gain)
    {
        //[UserSliderCode_Input_Gain] -- add your slider handling code here..
		getProcessor()->setParameterNotifyingHost(DiddyBop_AudioProcessor::kGainDecibelsParam,
			(float)Input_Gain->getValue());
        //[/UserSliderCode_Input_Gain]
    }
    else if (sliderThatWasMoved == OutPut_Gain)
    {
        //[UserSliderCode_OutPut_Gain] -- add your slider handling code here..

        //[/UserSliderCode_OutPut_Gain]
    }

    //[UsersliderValueChanged_Post]
    //[/UsersliderValueChanged_Post]
}

void DiddyBop_AudioProcessorEditor::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == CompressorToggle)
    {
        //[UserButtonCode_CompressorToggle] -- add your button handler code here..
		getProcessor()->compressorONOFF[0] = CompressorToggle->getToggleState();
        //[/UserButtonCode_CompressorToggle]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="DiddyBop_AudioProcessorEditor"
                 componentName="" parentClasses="public AudioProcessorEditor, public Timer"
                 constructorParams="DiddyBop_AudioProcessor* ownFilter" variableInitialisers="AudioProcessorEditor(ownFilter)"
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="0" initialWidth="1224" initialHeight="600">
  <BACKGROUND backgroundColour="ffffffff">
    <TEXT pos="60 20 200 30" fill="solid: ff000000" hasStroke="0" text="DiddyBop"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
  </BACKGROUND>
  <SLIDER name="Centre Frequecy" id="46adac523b6bcc41" memberName="Compressor1"
          virtualName="" explicitFocusOrder="0" pos="56 192 200 108" min="-60"
          max="0" int="-60" style="Rotary" textBoxPos="TextBoxLeft" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <SLIDER name="Centre Frequecy" id="52e6eeba1ce46d68" memberName="Compressor2"
          virtualName="" explicitFocusOrder="0" pos="272 192 200 104" min="-60"
          max="0" int="-60" style="Rotary" textBoxPos="TextBoxLeft" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <TOGGLEBUTTON name="new toggle button" id="91bbb1e629622d71" memberName="CompressorToggle"
                virtualName="" explicitFocusOrder="0" pos="48 152 150 24" buttonText="Compressor"
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <SLIDER name="Centre Frequecy" id="946cb98305b9c7d6" memberName="Input_Gain"
          virtualName="" explicitFocusOrder="0" pos="56 312 200 108" min="-100"
          max="100" int="1" style="Rotary" textBoxPos="TextBoxLeft" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <SLIDER name="Centre Frequecy" id="5d1d6c356b59ff42" memberName="OutPut_Gain"
          virtualName="" explicitFocusOrder="0" pos="272 304 200 108" min="1"
          max="100" int="0.10000000000000000555" style="Rotary" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
