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

    addAndMakeVisible (EqCentreFrequecy_Slider = new Slider ("Centre Frequecy"));
    EqCentreFrequecy_Slider->setRange (10, 20000, 0.1);
    EqCentreFrequecy_Slider->setSliderStyle (Slider::Rotary);
    EqCentreFrequecy_Slider->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    EqCentreFrequecy_Slider->addListener (this);

    addAndMakeVisible (CentreFrequecy_Lebel = new Label ("new label",
                                                         TRANS("Centre Frequecy:")));
    CentreFrequecy_Lebel->setFont (Font (15.00f, Font::plain));
    CentreFrequecy_Lebel->setJustificationType (Justification::centredLeft);
    CentreFrequecy_Lebel->setEditable (false, false, false);
    CentreFrequecy_Lebel->setColour (TextEditor::textColourId, Colours::black);
    CentreFrequecy_Lebel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (EqQ_Slider = new Slider ("Centre Frequecy"));
    EqQ_Slider->setRange (0.1, 20, 0.1);
    EqQ_Slider->setSliderStyle (Slider::Rotary);
    EqQ_Slider->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    EqQ_Slider->addListener (this);

    addAndMakeVisible (Q_Lebel = new Label ("new label",
                                            TRANS("Q:")));
    Q_Lebel->setFont (Font (15.00f, Font::plain));
    Q_Lebel->setJustificationType (Justification::centredLeft);
    Q_Lebel->setEditable (false, false, false);
    Q_Lebel->setColour (TextEditor::textColourId, Colours::black);
    Q_Lebel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (EqGain_Slider = new Slider ("Centre Frequecy"));
    EqGain_Slider->setRange (-40, 40, 0.1);
    EqGain_Slider->setSliderStyle (Slider::Rotary);
    EqGain_Slider->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    EqGain_Slider->addListener (this);

    addAndMakeVisible (GaindB_Lebel = new Label ("new label",
                                                 TRANS("Gain(dB):")));
    GaindB_Lebel->setFont (Font (15.00f, Font::plain));
    GaindB_Lebel->setJustificationType (Justification::centredLeft);
    GaindB_Lebel->setEditable (false, false, false);
    GaindB_Lebel->setColour (TextEditor::textColourId, Colours::black);
    GaindB_Lebel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (EqToggleButton = new ToggleButton ("new toggle button"));
    EqToggleButton->setButtonText (TRANS("Eq"));
    EqToggleButton->addListener (this);

    addAndMakeVisible (CompressionRatio_Slider = new Slider ("Centre Frequecy"));
    CompressionRatio_Slider->setRange (1, 100, 0.1);
    CompressionRatio_Slider->setSliderStyle (Slider::Rotary);
    CompressionRatio_Slider->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    CompressionRatio_Slider->addListener (this);

    addAndMakeVisible (CompressionRatio_Label = new Label ("new label",
                                                           TRANS("Ratio")));
    CompressionRatio_Label->setFont (Font (15.00f, Font::plain));
    CompressionRatio_Label->setJustificationType (Justification::centredLeft);
    CompressionRatio_Label->setEditable (false, false, false);
    CompressionRatio_Label->setColour (TextEditor::textColourId, Colours::black);
    CompressionRatio_Label->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (AttactTime_Slider = new Slider ("Centre Frequecy"));
    AttactTime_Slider->setRange (0.1, 80, 0.1);
    AttactTime_Slider->setSliderStyle (Slider::Rotary);
    AttactTime_Slider->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    AttactTime_Slider->addListener (this);

    addAndMakeVisible (Q_Lebel2 = new Label ("new label",
                                             TRANS("Attack Time(ms)")));
    Q_Lebel2->setFont (Font (15.00f, Font::plain));
    Q_Lebel2->setJustificationType (Justification::centredLeft);
    Q_Lebel2->setEditable (false, false, false);
    Q_Lebel2->setColour (TextEditor::textColourId, Colours::black);
    Q_Lebel2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (ReleaseTime_Slider = new Slider ("Centre Frequecy"));
    ReleaseTime_Slider->setRange (0.1, 1000, 0.1);
    ReleaseTime_Slider->setSliderStyle (Slider::Rotary);
    ReleaseTime_Slider->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    ReleaseTime_Slider->addListener (this);

    addAndMakeVisible (GaindB_Lebel2 = new Label ("new label",
                                                  TRANS("Release Time(ms)")));
    GaindB_Lebel2->setFont (Font (15.00f, Font::plain));
    GaindB_Lebel2->setJustificationType (Justification::centredLeft);
    GaindB_Lebel2->setEditable (false, false, false);
    GaindB_Lebel2->setColour (TextEditor::textColourId, Colours::black);
    GaindB_Lebel2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (CompressorToggle = new ToggleButton ("new toggle button"));
    CompressorToggle->setButtonText (TRANS("Compressor"));
    CompressorToggle->addListener (this);

    addAndMakeVisible (Threshold_Slider = new Slider ("Centre Frequecy"));
    Threshold_Slider->setRange (-60, 0, -60);
    Threshold_Slider->setSliderStyle (Slider::Rotary);
    Threshold_Slider->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    Threshold_Slider->addListener (this);

    addAndMakeVisible (Threshold = new Label ("new label",
                                              TRANS("Threshold")));
    Threshold->setFont (Font (15.00f, Font::plain));
    Threshold->setJustificationType (Justification::centredLeft);
    Threshold->setEditable (false, false, false);
    Threshold->setColour (TextEditor::textColourId, Colours::black);
    Threshold->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (CompressorGain_Slider = new Slider ("Centre Frequecy"));
    CompressorGain_Slider->setRange (0, 40, 0.1);
    CompressorGain_Slider->setSliderStyle (Slider::Rotary);
    CompressorGain_Slider->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    CompressorGain_Slider->addListener (this);

    addAndMakeVisible (Threshold2 = new Label ("new label",
                                               TRANS("Gain")));
    Threshold2->setFont (Font (15.00f, Font::plain));
    Threshold2->setJustificationType (Justification::centredLeft);
    Threshold2->setEditable (false, false, false);
    Threshold2->setColour (TextEditor::textColourId, Colours::black);
    Threshold2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (CompressorToggle2 = new ToggleButton ("new toggle button"));
    CompressorToggle2->setButtonText (TRANS("Compressor"));
    CompressorToggle2->addListener (this);

    addAndMakeVisible (Threshold_Slider2 = new Slider ("Centre Frequecy"));
    Threshold_Slider2->setRange (-60, 0, -60);
    Threshold_Slider2->setSliderStyle (Slider::Rotary);
    Threshold_Slider2->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    Threshold_Slider2->addListener (this);


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

    EqCentreFrequecy_Slider = nullptr;
    CentreFrequecy_Lebel = nullptr;
    EqQ_Slider = nullptr;
    Q_Lebel = nullptr;
    EqGain_Slider = nullptr;
    GaindB_Lebel = nullptr;
    EqToggleButton = nullptr;
    CompressionRatio_Slider = nullptr;
    CompressionRatio_Label = nullptr;
    AttactTime_Slider = nullptr;
    Q_Lebel2 = nullptr;
    ReleaseTime_Slider = nullptr;
    GaindB_Lebel2 = nullptr;
    CompressorToggle = nullptr;
    Threshold_Slider = nullptr;
    Threshold = nullptr;
    CompressorGain_Slider = nullptr;
    Threshold2 = nullptr;
    CompressorToggle2 = nullptr;
    Threshold_Slider2 = nullptr;


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

    EqCentreFrequecy_Slider->setBounds (8, 104, 80, 32);
    CentreFrequecy_Lebel->setBounds (8, 72, 80, 24);
    EqQ_Slider->setBounds (96, 104, 72, 32);
    Q_Lebel->setBounds (97, 70, 63, 24);
    EqGain_Slider->setBounds (176, 104, 72, 32);
    GaindB_Lebel->setBounds (176, 70, 72, 24);
    EqToggleButton->setBounds (16, 32, 150, 24);
    CompressionRatio_Slider->setBounds (11, 209, 69, 36);
    CompressionRatio_Label->setBounds (11, 184, 61, 20);
    AttactTime_Slider->setBounds (83, 212, 77, 28);
    Q_Lebel2->setBounds (84, 178, 76, 30);
    ReleaseTime_Slider->setBounds (168, 207, 72, 40);
    GaindB_Lebel2->setBounds (168, 184, 80, 16);
    CompressorToggle->setBounds (8, 144, 150, 24);
    Threshold_Slider->setBounds (248, 213, 64, 24);
    Threshold->setBounds (245, 188, 72, 11);
    CompressorGain_Slider->setBounds (319, 208, 65, 29);
    Threshold2->setBounds (325, 184, 40, 16);
    CompressorToggle2->setBounds (393, 150, 150, 24);
    Threshold_Slider2->setBounds (416, 200, 64, 24);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void DiddyBop_AudioProcessorEditor::sliderValueChanged (Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]
    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == EqCentreFrequecy_Slider)
    {
        //[UserSliderCode_EqCentreFrequecy_Slider] -- add your slider handling code here..
		getProcessor()->setParameterNotifyingHost(DiddyBop_AudioProcessor::kCentreFrequencyParam,
			(float)EqCentreFrequecy_Slider->getValue());
        //[/UserSliderCode_EqCentreFrequecy_Slider]
    }
    else if (sliderThatWasMoved == EqQ_Slider)
    {
        //[UserSliderCode_EqQ_Slider] -- add your slider handling code here..
		getProcessor()->setParameterNotifyingHost(DiddyBop_AudioProcessor::kQParam,
			(float)EqQ_Slider->getValue());
        //[/UserSliderCode_EqQ_Slider]
    }
    else if (sliderThatWasMoved == EqGain_Slider)
    {
        //[UserSliderCode_EqGain_Slider] -- add your slider handling code here..
		getProcessor()->setParameterNotifyingHost(DiddyBop_AudioProcessor::kGainDecibelsParam,
			(float)EqGain_Slider->getValue());
        //[/UserSliderCode_EqGain_Slider]
    }
    else if (sliderThatWasMoved == CompressionRatio_Slider)
    {
        //[UserSliderCode_CompressionRatio_Slider] -- add your slider handling code here..
		getProcessor()->compressor_[0]->setRatio(CompressionRatio_Slider->getValue());
        //[/UserSliderCode_CompressionRatio_Slider]
    }
    else if (sliderThatWasMoved == AttactTime_Slider)
    {
        //[UserSliderCode_AttactTime_Slider] -- add your slider handling code here..
		getProcessor()->compressor_[0]->setAttackTime(AttactTime_Slider->getValue());
        //[/UserSliderCode_AttactTime_Slider]
    }
    else if (sliderThatWasMoved == ReleaseTime_Slider)
    {
        //[UserSliderCode_ReleaseTime_Slider] -- add your slider handling code here..
		getProcessor()->compressor_[0]->setReleaseTime(ReleaseTime_Slider->getValue());
        //[/UserSliderCode_ReleaseTime_Slider]
    }
    else if (sliderThatWasMoved == Threshold_Slider)
    {
        //[UserSliderCode_Threshold_Slider] -- add your slider handling code here..
		getProcessor()->compressor_[0]->setThreshold(Threshold_Slider->getValue());
        //[/UserSliderCode_Threshold_Slider]
    }
    else if (sliderThatWasMoved == CompressorGain_Slider)
    {
        //[UserSliderCode_CompressorGain_Slider] -- add your slider handling code here..
		getProcessor()->compressor_[0]->setGain(CompressorGain_Slider->getValue());
        //[/UserSliderCode_CompressorGain_Slider]
    }
    else if (sliderThatWasMoved == Threshold_Slider2)
    {
        //[UserSliderCode_Threshold_Slider2] -- add your slider handling code here..
		getProcessor()->compressor_[1]->setThreshold(Threshold_Slider2->getValue());
        //[/UserSliderCode_Threshold_Slider2]
    }

    //[UsersliderValueChanged_Post]
    //[/UsersliderValueChanged_Post]
}

void DiddyBop_AudioProcessorEditor::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == EqToggleButton)
    {
        //[UserButtonCode_EqToggleButton] -- add your button handler code here..
		getProcessor()->onOff = EqToggleButton->getToggleState();
        //[/UserButtonCode_EqToggleButton]
    }
    else if (buttonThatWasClicked == CompressorToggle)
    {
        //[UserButtonCode_CompressorToggle] -- add your button handler code here..
		getProcessor()->compressorONOFF[0] = CompressorToggle->getToggleState();
        //[/UserButtonCode_CompressorToggle]
    }
    else if (buttonThatWasClicked == CompressorToggle2)
    {
        //[UserButtonCode_CompressorToggle2] -- add your button handler code here..
		getProcessor()->compressorONOFF[1] = CompressorToggle->getToggleState();
        //[/UserButtonCode_CompressorToggle2]
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
  <SLIDER name="Centre Frequecy" id="a44e1f822bf90f3c" memberName="EqCentreFrequecy_Slider"
          virtualName="" explicitFocusOrder="0" pos="8 104 80 32" min="10"
          max="20000" int="0.10000000000000000555" style="Rotary" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <LABEL name="new label" id="d1293a031422c56" memberName="CentreFrequecy_Lebel"
         virtualName="" explicitFocusOrder="0" pos="8 72 80 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Centre Frequecy:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <SLIDER name="Centre Frequecy" id="7d2477dd63ceb6e5" memberName="EqQ_Slider"
          virtualName="" explicitFocusOrder="0" pos="96 104 72 32" min="0.10000000000000000555"
          max="20" int="0.10000000000000000555" style="Rotary" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <LABEL name="new label" id="3780276bb1eda901" memberName="Q_Lebel" virtualName=""
         explicitFocusOrder="0" pos="97 70 63 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Q:" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <SLIDER name="Centre Frequecy" id="5cb7b5dd5cfe1534" memberName="EqGain_Slider"
          virtualName="" explicitFocusOrder="0" pos="176 104 72 32" min="-40"
          max="40" int="0.10000000000000000555" style="Rotary" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <LABEL name="new label" id="d9887c95c934d30c" memberName="GaindB_Lebel"
         virtualName="" explicitFocusOrder="0" pos="176 70 72 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Gain(dB):" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <TOGGLEBUTTON name="new toggle button" id="779a31abf919cf61" memberName="EqToggleButton"
                virtualName="" explicitFocusOrder="0" pos="16 32 150 24" buttonText="Eq"
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <SLIDER name="Centre Frequecy" id="46adac523b6bcc41" memberName="CompressionRatio_Slider"
          virtualName="" explicitFocusOrder="0" pos="11 209 69 36" min="1"
          max="100" int="0.10000000000000000555" style="Rotary" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <LABEL name="new label" id="1498cf1f2588d547" memberName="CompressionRatio_Label"
         virtualName="" explicitFocusOrder="0" pos="11 184 61 20" edTextCol="ff000000"
         edBkgCol="0" labelText="Ratio" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <SLIDER name="Centre Frequecy" id="52e6eeba1ce46d68" memberName="AttactTime_Slider"
          virtualName="" explicitFocusOrder="0" pos="83 212 77 28" min="0.10000000000000000555"
          max="80" int="0.10000000000000000555" style="Rotary" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <LABEL name="new label" id="544a4c84551bd669" memberName="Q_Lebel2"
         virtualName="" explicitFocusOrder="0" pos="84 178 76 30" edTextCol="ff000000"
         edBkgCol="0" labelText="Attack Time(ms)" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <SLIDER name="Centre Frequecy" id="6cd7f965b6326282" memberName="ReleaseTime_Slider"
          virtualName="" explicitFocusOrder="0" pos="168 207 72 40" min="0.10000000000000000555"
          max="1000" int="0.10000000000000000555" style="Rotary" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <LABEL name="new label" id="1e4e1b24dbc3955" memberName="GaindB_Lebel2"
         virtualName="" explicitFocusOrder="0" pos="168 184 80 16" edTextCol="ff000000"
         edBkgCol="0" labelText="Release Time(ms)" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <TOGGLEBUTTON name="new toggle button" id="91bbb1e629622d71" memberName="CompressorToggle"
                virtualName="" explicitFocusOrder="0" pos="8 144 150 24" buttonText="Compressor"
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <SLIDER name="Centre Frequecy" id="4821aff50e4f0f73" memberName="Threshold_Slider"
          virtualName="" explicitFocusOrder="0" pos="248 213 64 24" min="-60"
          max="0" int="-60" style="Rotary" textBoxPos="TextBoxLeft" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <LABEL name="new label" id="5b5b17935881235a" memberName="Threshold"
         virtualName="" explicitFocusOrder="0" pos="245 188 72 11" edTextCol="ff000000"
         edBkgCol="0" labelText="Threshold" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <SLIDER name="Centre Frequecy" id="4456b6d3ae5479a1" memberName="CompressorGain_Slider"
          virtualName="" explicitFocusOrder="0" pos="319 208 65 29" min="0"
          max="40" int="0.10000000000000000555" style="Rotary" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <LABEL name="new label" id="dbf3cbe9a53073b2" memberName="Threshold2"
         virtualName="" explicitFocusOrder="0" pos="325 184 40 16" edTextCol="ff000000"
         edBkgCol="0" labelText="Gain" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <TOGGLEBUTTON name="new toggle button" id="2c419ed1a1da1f88" memberName="CompressorToggle2"
                virtualName="" explicitFocusOrder="0" pos="393 150 150 24" buttonText="Compressor"
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <SLIDER name="Centre Frequecy" id="dddd2ecc854eb04d" memberName="Threshold_Slider2"
          virtualName="" explicitFocusOrder="0" pos="416 200 64 24" min="-60"
          max="0" int="-60" style="Rotary" textBoxPos="TextBoxLeft" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1" needsCallback="1"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
