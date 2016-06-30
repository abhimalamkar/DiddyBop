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

    addAndMakeVisible (EqCentreFrequecy_Slider2 = new Slider ("Centre Frequecy"));
    EqCentreFrequecy_Slider2->setRange (10, 20000, 0.1);
    EqCentreFrequecy_Slider2->setSliderStyle (Slider::Rotary);
    EqCentreFrequecy_Slider2->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    EqCentreFrequecy_Slider2->addListener (this);

    addAndMakeVisible (CentreFrequecy_Lebel2 = new Label ("new label",
                                                          TRANS("Centre Frequecy:")));
    CentreFrequecy_Lebel2->setFont (Font (15.00f, Font::plain));
    CentreFrequecy_Lebel2->setJustificationType (Justification::centredLeft);
    CentreFrequecy_Lebel2->setEditable (false, false, false);
    CentreFrequecy_Lebel2->setColour (TextEditor::textColourId, Colours::black);
    CentreFrequecy_Lebel2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (EqQ_Slider2 = new Slider ("Centre Frequecy"));
    EqQ_Slider2->setRange (0.1, 20, 0.1);
    EqQ_Slider2->setSliderStyle (Slider::Rotary);
    EqQ_Slider2->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    EqQ_Slider2->addListener (this);

    addAndMakeVisible (Q_Lebel3 = new Label ("new label",
                                             TRANS("Q:")));
    Q_Lebel3->setFont (Font (15.00f, Font::plain));
    Q_Lebel3->setJustificationType (Justification::centredLeft);
    Q_Lebel3->setEditable (false, false, false);
    Q_Lebel3->setColour (TextEditor::textColourId, Colours::black);
    Q_Lebel3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (EqGain_Slider2 = new Slider ("Centre Frequecy"));
    EqGain_Slider2->setRange (-40, 40, 0.1);
    EqGain_Slider2->setSliderStyle (Slider::Rotary);
    EqGain_Slider2->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    EqGain_Slider2->addListener (this);

    addAndMakeVisible (GaindB_Lebel3 = new Label ("new label",
                                                  TRANS("Gain(dB):")));
    GaindB_Lebel3->setFont (Font (15.00f, Font::plain));
    GaindB_Lebel3->setJustificationType (Justification::centredLeft);
    GaindB_Lebel3->setEditable (false, false, false);
    GaindB_Lebel3->setColour (TextEditor::textColourId, Colours::black);
    GaindB_Lebel3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (EqToggleButton2 = new ToggleButton ("new toggle button"));
    EqToggleButton2->setButtonText (TRANS("Eq"));
    EqToggleButton2->addListener (this);

    addAndMakeVisible (CompressionRatio_Slider2 = new Slider ("Centre Frequecy"));
    CompressionRatio_Slider2->setRange (1, 100, 0.1);
    CompressionRatio_Slider2->setSliderStyle (Slider::Rotary);
    CompressionRatio_Slider2->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    CompressionRatio_Slider2->addListener (this);

    addAndMakeVisible (CompressionRatio_Label2 = new Label ("new label",
                                                            TRANS("Ratio")));
    CompressionRatio_Label2->setFont (Font (15.00f, Font::plain));
    CompressionRatio_Label2->setJustificationType (Justification::centredLeft);
    CompressionRatio_Label2->setEditable (false, false, false);
    CompressionRatio_Label2->setColour (TextEditor::textColourId, Colours::black);
    CompressionRatio_Label2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (AttactTime_Slider2 = new Slider ("Centre Frequecy"));
    AttactTime_Slider2->setRange (0.1, 80, 0.1);
    AttactTime_Slider2->setSliderStyle (Slider::Rotary);
    AttactTime_Slider2->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    AttactTime_Slider2->addListener (this);

    addAndMakeVisible (Q_Lebel4 = new Label ("new label",
                                             TRANS("Attack Time(ms)")));
    Q_Lebel4->setFont (Font (15.00f, Font::plain));
    Q_Lebel4->setJustificationType (Justification::centredLeft);
    Q_Lebel4->setEditable (false, false, false);
    Q_Lebel4->setColour (TextEditor::textColourId, Colours::black);
    Q_Lebel4->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (ReleaseTime_Slider2 = new Slider ("Centre Frequecy"));
    ReleaseTime_Slider2->setRange (0.1, 1000, 0.1);
    ReleaseTime_Slider2->setSliderStyle (Slider::Rotary);
    ReleaseTime_Slider2->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    ReleaseTime_Slider2->addListener (this);

    addAndMakeVisible (GaindB_Lebel4 = new Label ("new label",
                                                  TRANS("Release Time(ms)")));
    GaindB_Lebel4->setFont (Font (15.00f, Font::plain));
    GaindB_Lebel4->setJustificationType (Justification::centredLeft);
    GaindB_Lebel4->setEditable (false, false, false);
    GaindB_Lebel4->setColour (TextEditor::textColourId, Colours::black);
    GaindB_Lebel4->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (CompressorToggle2 = new ToggleButton ("new toggle button"));
    CompressorToggle2->setButtonText (TRANS("Compressor"));
    CompressorToggle2->addListener (this);

    addAndMakeVisible (Threshold_Slider2 = new Slider ("Centre Frequecy"));
    Threshold_Slider2->setRange (-60, 0, -60);
    Threshold_Slider2->setSliderStyle (Slider::Rotary);
    Threshold_Slider2->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    Threshold_Slider2->addListener (this);

    addAndMakeVisible (Threshold3 = new Label ("new label",
                                               TRANS("Threshold")));
    Threshold3->setFont (Font (15.00f, Font::plain));
    Threshold3->setJustificationType (Justification::centredLeft);
    Threshold3->setEditable (false, false, false);
    Threshold3->setColour (TextEditor::textColourId, Colours::black);
    Threshold3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (CompressorGain_Slider2 = new Slider ("Centre Frequecy"));
    CompressorGain_Slider2->setRange (0, 40, 0.1);
    CompressorGain_Slider2->setSliderStyle (Slider::Rotary);
    CompressorGain_Slider2->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    CompressorGain_Slider2->addListener (this);

    addAndMakeVisible (Threshold4 = new Label ("new label",
                                               TRANS("Gain")));
    Threshold4->setFont (Font (15.00f, Font::plain));
    Threshold4->setJustificationType (Justification::centredLeft);
    Threshold4->setEditable (false, false, false);
    Threshold4->setColour (TextEditor::textColourId, Colours::black);
    Threshold4->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (EqCentreFrequecy_Slider3 = new Slider ("Centre Frequecy"));
    EqCentreFrequecy_Slider3->setRange (10, 20000, 0.1);
    EqCentreFrequecy_Slider3->setSliderStyle (Slider::Rotary);
    EqCentreFrequecy_Slider3->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    EqCentreFrequecy_Slider3->addListener (this);

    addAndMakeVisible (CentreFrequecy_Lebel3 = new Label ("new label",
                                                          TRANS("Centre Frequecy:")));
    CentreFrequecy_Lebel3->setFont (Font (15.00f, Font::plain));
    CentreFrequecy_Lebel3->setJustificationType (Justification::centredLeft);
    CentreFrequecy_Lebel3->setEditable (false, false, false);
    CentreFrequecy_Lebel3->setColour (TextEditor::textColourId, Colours::black);
    CentreFrequecy_Lebel3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (EqQ_Slider3 = new Slider ("Centre Frequecy"));
    EqQ_Slider3->setRange (0.1, 20, 0.1);
    EqQ_Slider3->setSliderStyle (Slider::Rotary);
    EqQ_Slider3->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    EqQ_Slider3->addListener (this);

    addAndMakeVisible (Q_Lebel5 = new Label ("new label",
                                             TRANS("Q:")));
    Q_Lebel5->setFont (Font (15.00f, Font::plain));
    Q_Lebel5->setJustificationType (Justification::centredLeft);
    Q_Lebel5->setEditable (false, false, false);
    Q_Lebel5->setColour (TextEditor::textColourId, Colours::black);
    Q_Lebel5->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (EqGain_Slider3 = new Slider ("Centre Frequecy"));
    EqGain_Slider3->setRange (-40, 40, 0.1);
    EqGain_Slider3->setSliderStyle (Slider::Rotary);
    EqGain_Slider3->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    EqGain_Slider3->addListener (this);

    addAndMakeVisible (GaindB_Lebel5 = new Label ("new label",
                                                  TRANS("Gain(dB):")));
    GaindB_Lebel5->setFont (Font (15.00f, Font::plain));
    GaindB_Lebel5->setJustificationType (Justification::centredLeft);
    GaindB_Lebel5->setEditable (false, false, false);
    GaindB_Lebel5->setColour (TextEditor::textColourId, Colours::black);
    GaindB_Lebel5->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (EqToggleButton3 = new ToggleButton ("new toggle button"));
    EqToggleButton3->setButtonText (TRANS("Eq"));
    EqToggleButton3->addListener (this);

    addAndMakeVisible (CompressionRatio_Slider3 = new Slider ("Centre Frequecy"));
    CompressionRatio_Slider3->setRange (1, 100, 0.1);
    CompressionRatio_Slider3->setSliderStyle (Slider::Rotary);
    CompressionRatio_Slider3->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    CompressionRatio_Slider3->addListener (this);

    addAndMakeVisible (CompressionRatio_Label3 = new Label ("new label",
                                                            TRANS("Ratio")));
    CompressionRatio_Label3->setFont (Font (15.00f, Font::plain));
    CompressionRatio_Label3->setJustificationType (Justification::centredLeft);
    CompressionRatio_Label3->setEditable (false, false, false);
    CompressionRatio_Label3->setColour (TextEditor::textColourId, Colours::black);
    CompressionRatio_Label3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (AttactTime_Slider3 = new Slider ("Centre Frequecy"));
    AttactTime_Slider3->setRange (0.1, 80, 0.1);
    AttactTime_Slider3->setSliderStyle (Slider::Rotary);
    AttactTime_Slider3->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    AttactTime_Slider3->addListener (this);

    addAndMakeVisible (Q_Lebel6 = new Label ("new label",
                                             TRANS("Attack Time(ms)")));
    Q_Lebel6->setFont (Font (15.00f, Font::plain));
    Q_Lebel6->setJustificationType (Justification::centredLeft);
    Q_Lebel6->setEditable (false, false, false);
    Q_Lebel6->setColour (TextEditor::textColourId, Colours::black);
    Q_Lebel6->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (ReleaseTime_Slider3 = new Slider ("Centre Frequecy"));
    ReleaseTime_Slider3->setRange (0.1, 1000, 0.1);
    ReleaseTime_Slider3->setSliderStyle (Slider::Rotary);
    ReleaseTime_Slider3->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    ReleaseTime_Slider3->addListener (this);

    addAndMakeVisible (GaindB_Lebel6 = new Label ("new label",
                                                  TRANS("Release Time(ms)")));
    GaindB_Lebel6->setFont (Font (15.00f, Font::plain));
    GaindB_Lebel6->setJustificationType (Justification::centredLeft);
    GaindB_Lebel6->setEditable (false, false, false);
    GaindB_Lebel6->setColour (TextEditor::textColourId, Colours::black);
    GaindB_Lebel6->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (CompressorToggle3 = new ToggleButton ("new toggle button"));
    CompressorToggle3->setButtonText (TRANS("Compressor"));
    CompressorToggle3->addListener (this);

    addAndMakeVisible (Threshold_Slider3 = new Slider ("Centre Frequecy"));
    Threshold_Slider3->setRange (-60, 0, -60);
    Threshold_Slider3->setSliderStyle (Slider::Rotary);
    Threshold_Slider3->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    Threshold_Slider3->addListener (this);

    addAndMakeVisible (Threshold5 = new Label ("new label",
                                               TRANS("Threshold")));
    Threshold5->setFont (Font (15.00f, Font::plain));
    Threshold5->setJustificationType (Justification::centredLeft);
    Threshold5->setEditable (false, false, false);
    Threshold5->setColour (TextEditor::textColourId, Colours::black);
    Threshold5->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (CompressorGain_Slider3 = new Slider ("Centre Frequecy"));
    CompressorGain_Slider3->setRange (0, 40, 0.1);
    CompressorGain_Slider3->setSliderStyle (Slider::Rotary);
    CompressorGain_Slider3->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    CompressorGain_Slider3->addListener (this);

    addAndMakeVisible (Threshold6 = new Label ("new label",
                                               TRANS("Gain")));
    Threshold6->setFont (Font (15.00f, Font::plain));
    Threshold6->setJustificationType (Justification::centredLeft);
    Threshold6->setEditable (false, false, false);
    Threshold6->setColour (TextEditor::textColourId, Colours::black);
    Threshold6->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (EqCentreFrequecy_Slider4 = new Slider ("Centre Frequecy"));
    EqCentreFrequecy_Slider4->setRange (10, 20000, 0.1);
    EqCentreFrequecy_Slider4->setSliderStyle (Slider::Rotary);
    EqCentreFrequecy_Slider4->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    EqCentreFrequecy_Slider4->addListener (this);

    addAndMakeVisible (CentreFrequecy_Lebel4 = new Label ("new label",
                                                          TRANS("Centre Frequecy:")));
    CentreFrequecy_Lebel4->setFont (Font (15.00f, Font::plain));
    CentreFrequecy_Lebel4->setJustificationType (Justification::centredLeft);
    CentreFrequecy_Lebel4->setEditable (false, false, false);
    CentreFrequecy_Lebel4->setColour (TextEditor::textColourId, Colours::black);
    CentreFrequecy_Lebel4->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (EqQ_Slider4 = new Slider ("Centre Frequecy"));
    EqQ_Slider4->setRange (0.1, 20, 0.1);
    EqQ_Slider4->setSliderStyle (Slider::Rotary);
    EqQ_Slider4->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    EqQ_Slider4->addListener (this);

    addAndMakeVisible (Q_Lebel7 = new Label ("new label",
                                             TRANS("Q:")));
    Q_Lebel7->setFont (Font (15.00f, Font::plain));
    Q_Lebel7->setJustificationType (Justification::centredLeft);
    Q_Lebel7->setEditable (false, false, false);
    Q_Lebel7->setColour (TextEditor::textColourId, Colours::black);
    Q_Lebel7->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (EqGain_Slider4 = new Slider ("Centre Frequecy"));
    EqGain_Slider4->setRange (-40, 40, 0.1);
    EqGain_Slider4->setSliderStyle (Slider::Rotary);
    EqGain_Slider4->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    EqGain_Slider4->addListener (this);

    addAndMakeVisible (GaindB_Lebel7 = new Label ("new label",
                                                  TRANS("Gain(dB):")));
    GaindB_Lebel7->setFont (Font (15.00f, Font::plain));
    GaindB_Lebel7->setJustificationType (Justification::centredLeft);
    GaindB_Lebel7->setEditable (false, false, false);
    GaindB_Lebel7->setColour (TextEditor::textColourId, Colours::black);
    GaindB_Lebel7->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (EqToggleButton4 = new ToggleButton ("new toggle button"));
    EqToggleButton4->setButtonText (TRANS("Eq"));
    EqToggleButton4->addListener (this);

    addAndMakeVisible (CompressionRatio_Slider4 = new Slider ("Centre Frequecy"));
    CompressionRatio_Slider4->setRange (1, 100, 0.1);
    CompressionRatio_Slider4->setSliderStyle (Slider::Rotary);
    CompressionRatio_Slider4->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    CompressionRatio_Slider4->addListener (this);

    addAndMakeVisible (CompressionRatio_Label4 = new Label ("new label",
                                                            TRANS("Ratio")));
    CompressionRatio_Label4->setFont (Font (15.00f, Font::plain));
    CompressionRatio_Label4->setJustificationType (Justification::centredLeft);
    CompressionRatio_Label4->setEditable (false, false, false);
    CompressionRatio_Label4->setColour (TextEditor::textColourId, Colours::black);
    CompressionRatio_Label4->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (AttactTime_Slider4 = new Slider ("Centre Frequecy"));
    AttactTime_Slider4->setRange (0.1, 80, 0.1);
    AttactTime_Slider4->setSliderStyle (Slider::Rotary);
    AttactTime_Slider4->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    AttactTime_Slider4->addListener (this);

    addAndMakeVisible (Q_Lebel8 = new Label ("new label",
                                             TRANS("Attack Time(ms)")));
    Q_Lebel8->setFont (Font (15.00f, Font::plain));
    Q_Lebel8->setJustificationType (Justification::centredLeft);
    Q_Lebel8->setEditable (false, false, false);
    Q_Lebel8->setColour (TextEditor::textColourId, Colours::black);
    Q_Lebel8->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (ReleaseTime_Slider4 = new Slider ("Centre Frequecy"));
    ReleaseTime_Slider4->setRange (0.1, 1000, 0.1);
    ReleaseTime_Slider4->setSliderStyle (Slider::Rotary);
    ReleaseTime_Slider4->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    ReleaseTime_Slider4->addListener (this);

    addAndMakeVisible (GaindB_Lebel8 = new Label ("new label",
                                                  TRANS("Release Time(ms)")));
    GaindB_Lebel8->setFont (Font (15.00f, Font::plain));
    GaindB_Lebel8->setJustificationType (Justification::centredLeft);
    GaindB_Lebel8->setEditable (false, false, false);
    GaindB_Lebel8->setColour (TextEditor::textColourId, Colours::black);
    GaindB_Lebel8->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (CompressorToggle4 = new ToggleButton ("new toggle button"));
    CompressorToggle4->setButtonText (TRANS("Compressor"));
    CompressorToggle4->addListener (this);

    addAndMakeVisible (Threshold_Slider4 = new Slider ("Centre Frequecy"));
    Threshold_Slider4->setRange (-60, 0, -60);
    Threshold_Slider4->setSliderStyle (Slider::Rotary);
    Threshold_Slider4->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    Threshold_Slider4->addListener (this);

    addAndMakeVisible (Threshold7 = new Label ("new label",
                                               TRANS("Threshold")));
    Threshold7->setFont (Font (15.00f, Font::plain));
    Threshold7->setJustificationType (Justification::centredLeft);
    Threshold7->setEditable (false, false, false);
    Threshold7->setColour (TextEditor::textColourId, Colours::black);
    Threshold7->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (CompressorGain_Slider4 = new Slider ("Centre Frequecy"));
    CompressorGain_Slider4->setRange (0, 40, 0.1);
    CompressorGain_Slider4->setSliderStyle (Slider::Rotary);
    CompressorGain_Slider4->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    CompressorGain_Slider4->addListener (this);

    addAndMakeVisible (Threshold8 = new Label ("new label",
                                               TRANS("Gain")));
    Threshold8->setFont (Font (15.00f, Font::plain));
    Threshold8->setJustificationType (Justification::centredLeft);
    Threshold8->setEditable (false, false, false);
    Threshold8->setColour (TextEditor::textColourId, Colours::black);
    Threshold8->setColour (TextEditor::backgroundColourId, Colour (0x00000000));


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
    EqCentreFrequecy_Slider2 = nullptr;
    CentreFrequecy_Lebel2 = nullptr;
    EqQ_Slider2 = nullptr;
    Q_Lebel3 = nullptr;
    EqGain_Slider2 = nullptr;
    GaindB_Lebel3 = nullptr;
    EqToggleButton2 = nullptr;
    CompressionRatio_Slider2 = nullptr;
    CompressionRatio_Label2 = nullptr;
    AttactTime_Slider2 = nullptr;
    Q_Lebel4 = nullptr;
    ReleaseTime_Slider2 = nullptr;
    GaindB_Lebel4 = nullptr;
    CompressorToggle2 = nullptr;
    Threshold_Slider2 = nullptr;
    Threshold3 = nullptr;
    CompressorGain_Slider2 = nullptr;
    Threshold4 = nullptr;
    EqCentreFrequecy_Slider3 = nullptr;
    CentreFrequecy_Lebel3 = nullptr;
    EqQ_Slider3 = nullptr;
    Q_Lebel5 = nullptr;
    EqGain_Slider3 = nullptr;
    GaindB_Lebel5 = nullptr;
    EqToggleButton3 = nullptr;
    CompressionRatio_Slider3 = nullptr;
    CompressionRatio_Label3 = nullptr;
    AttactTime_Slider3 = nullptr;
    Q_Lebel6 = nullptr;
    ReleaseTime_Slider3 = nullptr;
    GaindB_Lebel6 = nullptr;
    CompressorToggle3 = nullptr;
    Threshold_Slider3 = nullptr;
    Threshold5 = nullptr;
    CompressorGain_Slider3 = nullptr;
    Threshold6 = nullptr;
    EqCentreFrequecy_Slider4 = nullptr;
    CentreFrequecy_Lebel4 = nullptr;
    EqQ_Slider4 = nullptr;
    Q_Lebel7 = nullptr;
    EqGain_Slider4 = nullptr;
    GaindB_Lebel7 = nullptr;
    EqToggleButton4 = nullptr;
    CompressionRatio_Slider4 = nullptr;
    CompressionRatio_Label4 = nullptr;
    AttactTime_Slider4 = nullptr;
    Q_Lebel8 = nullptr;
    ReleaseTime_Slider4 = nullptr;
    GaindB_Lebel8 = nullptr;
    CompressorToggle4 = nullptr;
    Threshold_Slider4 = nullptr;
    Threshold7 = nullptr;
    CompressorGain_Slider4 = nullptr;
    Threshold8 = nullptr;


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
    EqCentreFrequecy_Slider2->setBounds (393, 110, 80, 32);
    CentreFrequecy_Lebel2->setBounds (393, 78, 80, 24);
    EqQ_Slider2->setBounds (481, 110, 72, 32);
    Q_Lebel3->setBounds (482, 76, 63, 24);
    EqGain_Slider2->setBounds (561, 110, 72, 32);
    GaindB_Lebel3->setBounds (561, 76, 72, 24);
    EqToggleButton2->setBounds (401, 38, 150, 24);
    CompressionRatio_Slider2->setBounds (396, 215, 69, 36);
    CompressionRatio_Label2->setBounds (396, 186, 61, 24);
    AttactTime_Slider2->setBounds (468, 218, 77, 28);
    Q_Lebel4->setBounds (469, 184, 76, 30);
    ReleaseTime_Slider2->setBounds (553, 213, 72, 40);
    GaindB_Lebel4->setBounds (553, 190, 80, 16);
    CompressorToggle2->setBounds (393, 150, 150, 24);
    Threshold_Slider2->setBounds (633, 219, 64, 24);
    Threshold3->setBounds (630, 194, 72, 11);
    CompressorGain_Slider2->setBounds (704, 214, 65, 29);
    Threshold4->setBounds (710, 190, 40, 16);
    EqCentreFrequecy_Slider3->setBounds (789, 106, 80, 32);
    CentreFrequecy_Lebel3->setBounds (789, 74, 80, 24);
    EqQ_Slider3->setBounds (877, 106, 72, 32);
    Q_Lebel5->setBounds (878, 72, 63, 24);
    EqGain_Slider3->setBounds (957, 106, 72, 32);
    GaindB_Lebel5->setBounds (957, 72, 72, 24);
    EqToggleButton3->setBounds (797, 34, 150, 24);
    CompressionRatio_Slider3->setBounds (792, 211, 69, 36);
    CompressionRatio_Label3->setBounds (792, 182, 61, 24);
    AttactTime_Slider3->setBounds (864, 214, 77, 28);
    Q_Lebel6->setBounds (865, 180, 76, 30);
    ReleaseTime_Slider3->setBounds (949, 209, 72, 40);
    GaindB_Lebel6->setBounds (949, 186, 80, 16);
    CompressorToggle3->setBounds (789, 146, 150, 24);
    Threshold_Slider3->setBounds (1029, 215, 64, 24);
    Threshold5->setBounds (1026, 190, 72, 11);
    CompressorGain_Slider3->setBounds (1100, 210, 65, 29);
    Threshold6->setBounds (1106, 186, 40, 16);
    EqCentreFrequecy_Slider4->setBounds (14, 366, 80, 32);
    CentreFrequecy_Lebel4->setBounds (14, 334, 80, 24);
    EqQ_Slider4->setBounds (102, 366, 72, 32);
    Q_Lebel7->setBounds (103, 332, 63, 24);
    EqGain_Slider4->setBounds (182, 366, 72, 32);
    GaindB_Lebel7->setBounds (182, 332, 72, 24);
    EqToggleButton4->setBounds (22, 294, 150, 24);
    CompressionRatio_Slider4->setBounds (17, 471, 69, 36);
    CompressionRatio_Label4->setBounds (17, 442, 61, 24);
    AttactTime_Slider4->setBounds (89, 474, 77, 28);
    Q_Lebel8->setBounds (90, 440, 76, 30);
    ReleaseTime_Slider4->setBounds (174, 469, 72, 40);
    GaindB_Lebel8->setBounds (174, 446, 80, 16);
    CompressorToggle4->setBounds (14, 406, 150, 24);
    Threshold_Slider4->setBounds (254, 475, 64, 24);
    Threshold7->setBounds (251, 450, 72, 11);
    CompressorGain_Slider4->setBounds (325, 470, 65, 29);
    Threshold8->setBounds (331, 446, 40, 16);
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
    else if (sliderThatWasMoved == EqCentreFrequecy_Slider2)
    {
        //[UserSliderCode_EqCentreFrequecy_Slider2] -- add your slider handling code here..
        //[/UserSliderCode_EqCentreFrequecy_Slider2]
    }
    else if (sliderThatWasMoved == EqQ_Slider2)
    {
        //[UserSliderCode_EqQ_Slider2] -- add your slider handling code here..
        //[/UserSliderCode_EqQ_Slider2]
    }
    else if (sliderThatWasMoved == EqGain_Slider2)
    {
        //[UserSliderCode_EqGain_Slider2] -- add your slider handling code here..
        //[/UserSliderCode_EqGain_Slider2]
    }
    else if (sliderThatWasMoved == CompressionRatio_Slider2)
    {
        //[UserSliderCode_CompressionRatio_Slider2] -- add your slider handling code here..
		getProcessor()->compressor_[1]->setRatio(CompressionRatio_Slider->getValue());
        //[/UserSliderCode_CompressionRatio_Slider2]
    }
    else if (sliderThatWasMoved == AttactTime_Slider2)
    {
        //[UserSliderCode_AttactTime_Slider2] -- add your slider handling code here..
		getProcessor()->compressor_[1]->setAttackTime(AttactTime_Slider2->getValue());
        //[/UserSliderCode_AttactTime_Slider2]
    }
    else if (sliderThatWasMoved == ReleaseTime_Slider2)
    {
        //[UserSliderCode_ReleaseTime_Slider2] -- add your slider handling code here..
		getProcessor()->compressor_[1]->setReleaseTime(ReleaseTime_Slider2->getValue());
        //[/UserSliderCode_ReleaseTime_Slider2]
    }
    else if (sliderThatWasMoved == Threshold_Slider2)
    {
        //[UserSliderCode_Threshold_Slider2] -- add your slider handling code here..
		getProcessor()->compressor_[1]->setThreshold(Threshold_Slider2->getValue());
        //[/UserSliderCode_Threshold_Slider2]
    }
    else if (sliderThatWasMoved == CompressorGain_Slider2)
    {
        //[UserSliderCode_CompressorGain_Slider2] -- add your slider handling code here..
		getProcessor()->compressor_[1]->setGain(CompressorGain_Slider2->getValue());
        //[/UserSliderCode_CompressorGain_Slider2]
    }
    else if (sliderThatWasMoved == EqCentreFrequecy_Slider3)
    {
        //[UserSliderCode_EqCentreFrequecy_Slider3] -- add your slider handling code here..
        //[/UserSliderCode_EqCentreFrequecy_Slider3]
    }
    else if (sliderThatWasMoved == EqQ_Slider3)
    {
        //[UserSliderCode_EqQ_Slider3] -- add your slider handling code here..
        //[/UserSliderCode_EqQ_Slider3]
    }
    else if (sliderThatWasMoved == EqGain_Slider3)
    {
        //[UserSliderCode_EqGain_Slider3] -- add your slider handling code here..
        //[/UserSliderCode_EqGain_Slider3]
    }
    else if (sliderThatWasMoved == CompressionRatio_Slider3)
    {
        //[UserSliderCode_CompressionRatio_Slider3] -- add your slider handling code here..
        //[/UserSliderCode_CompressionRatio_Slider3]
    }
    else if (sliderThatWasMoved == AttactTime_Slider3)
    {
        //[UserSliderCode_AttactTime_Slider3] -- add your slider handling code here..
        //[/UserSliderCode_AttactTime_Slider3]
    }
    else if (sliderThatWasMoved == ReleaseTime_Slider3)
    {
        //[UserSliderCode_ReleaseTime_Slider3] -- add your slider handling code here..
        //[/UserSliderCode_ReleaseTime_Slider3]
    }
    else if (sliderThatWasMoved == Threshold_Slider3)
    {
        //[UserSliderCode_Threshold_Slider3] -- add your slider handling code here..
        //[/UserSliderCode_Threshold_Slider3]
    }
    else if (sliderThatWasMoved == CompressorGain_Slider3)
    {
        //[UserSliderCode_CompressorGain_Slider3] -- add your slider handling code here..
        //[/UserSliderCode_CompressorGain_Slider3]
    }
    else if (sliderThatWasMoved == EqCentreFrequecy_Slider4)
    {
        //[UserSliderCode_EqCentreFrequecy_Slider4] -- add your slider handling code here..
        //[/UserSliderCode_EqCentreFrequecy_Slider4]
    }
    else if (sliderThatWasMoved == EqQ_Slider4)
    {
        //[UserSliderCode_EqQ_Slider4] -- add your slider handling code here..
        //[/UserSliderCode_EqQ_Slider4]
    }
    else if (sliderThatWasMoved == EqGain_Slider4)
    {
        //[UserSliderCode_EqGain_Slider4] -- add your slider handling code here..
        //[/UserSliderCode_EqGain_Slider4]
    }
    else if (sliderThatWasMoved == CompressionRatio_Slider4)
    {
        //[UserSliderCode_CompressionRatio_Slider4] -- add your slider handling code here..
        //[/UserSliderCode_CompressionRatio_Slider4]
    }
    else if (sliderThatWasMoved == AttactTime_Slider4)
    {
        //[UserSliderCode_AttactTime_Slider4] -- add your slider handling code here..
        //[/UserSliderCode_AttactTime_Slider4]
    }
    else if (sliderThatWasMoved == ReleaseTime_Slider4)
    {
        //[UserSliderCode_ReleaseTime_Slider4] -- add your slider handling code here..
        //[/UserSliderCode_ReleaseTime_Slider4]
    }
    else if (sliderThatWasMoved == Threshold_Slider4)
    {
        //[UserSliderCode_Threshold_Slider4] -- add your slider handling code here..
        //[/UserSliderCode_Threshold_Slider4]
    }
    else if (sliderThatWasMoved == CompressorGain_Slider4)
    {
        //[UserSliderCode_CompressorGain_Slider4] -- add your slider handling code here..
        //[/UserSliderCode_CompressorGain_Slider4]
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
    else if (buttonThatWasClicked == EqToggleButton2)
    {
        //[UserButtonCode_EqToggleButton2] -- add your button handler code here..
        //[/UserButtonCode_EqToggleButton2]
    }
    else if (buttonThatWasClicked == CompressorToggle2)
    {
        //[UserButtonCode_CompressorToggle2] -- add your button handler code here..
		getProcessor()->compressorONOFF[1] = CompressorToggle->getToggleState();
        //[/UserButtonCode_CompressorToggle2]
    }
    else if (buttonThatWasClicked == EqToggleButton3)
    {
        //[UserButtonCode_EqToggleButton3] -- add your button handler code here..
        //[/UserButtonCode_EqToggleButton3]
    }
    else if (buttonThatWasClicked == CompressorToggle3)
    {
        //[UserButtonCode_CompressorToggle3] -- add your button handler code here..
        //[/UserButtonCode_CompressorToggle3]
    }
    else if (buttonThatWasClicked == EqToggleButton4)
    {
        //[UserButtonCode_EqToggleButton4] -- add your button handler code here..
        //[/UserButtonCode_EqToggleButton4]
    }
    else if (buttonThatWasClicked == CompressorToggle4)
    {
        //[UserButtonCode_CompressorToggle4] -- add your button handler code here..
        //[/UserButtonCode_CompressorToggle4]
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
  <SLIDER name="Centre Frequecy" id="56529f3e12b54f65" memberName="EqCentreFrequecy_Slider2"
          virtualName="" explicitFocusOrder="0" pos="393 110 80 32" min="10"
          max="20000" int="0.10000000000000000555" style="Rotary" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <LABEL name="new label" id="6bad0e5a4cf4f76" memberName="CentreFrequecy_Lebel2"
         virtualName="" explicitFocusOrder="0" pos="393 78 80 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Centre Frequecy:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <SLIDER name="Centre Frequecy" id="e71a269887a6f015" memberName="EqQ_Slider2"
          virtualName="" explicitFocusOrder="0" pos="481 110 72 32" min="0.10000000000000000555"
          max="20" int="0.10000000000000000555" style="Rotary" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <LABEL name="new label" id="bc2f6e469c1f7180" memberName="Q_Lebel3"
         virtualName="" explicitFocusOrder="0" pos="482 76 63 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Q:" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <SLIDER name="Centre Frequecy" id="aac67268c12fd0a6" memberName="EqGain_Slider2"
          virtualName="" explicitFocusOrder="0" pos="561 110 72 32" min="-40"
          max="40" int="0.10000000000000000555" style="Rotary" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <LABEL name="new label" id="d655998cad1ce29" memberName="GaindB_Lebel3"
         virtualName="" explicitFocusOrder="0" pos="561 76 72 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Gain(dB):" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <TOGGLEBUTTON name="new toggle button" id="2500f1a7f3fdede6" memberName="EqToggleButton2"
                virtualName="" explicitFocusOrder="0" pos="401 38 150 24" buttonText="Eq"
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <SLIDER name="Centre Frequecy" id="461a4955008e970a" memberName="CompressionRatio_Slider2"
          virtualName="" explicitFocusOrder="0" pos="396 215 69 36" min="1"
          max="100" int="0.10000000000000000555" style="Rotary" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <LABEL name="new label" id="da7fd40de5150ffc" memberName="CompressionRatio_Label2"
         virtualName="" explicitFocusOrder="0" pos="396 186 61 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Ratio" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <SLIDER name="Centre Frequecy" id="14e685550557f6a7" memberName="AttactTime_Slider2"
          virtualName="" explicitFocusOrder="0" pos="468 218 77 28" min="0.10000000000000000555"
          max="80" int="0.10000000000000000555" style="Rotary" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <LABEL name="new label" id="5c246dd8e4115ce1" memberName="Q_Lebel4"
         virtualName="" explicitFocusOrder="0" pos="469 184 76 30" edTextCol="ff000000"
         edBkgCol="0" labelText="Attack Time(ms)" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <SLIDER name="Centre Frequecy" id="84197a2c5410aa08" memberName="ReleaseTime_Slider2"
          virtualName="" explicitFocusOrder="0" pos="553 213 72 40" min="0.10000000000000000555"
          max="1000" int="0.10000000000000000555" style="Rotary" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <LABEL name="new label" id="8cb593cb35dc1e0e" memberName="GaindB_Lebel4"
         virtualName="" explicitFocusOrder="0" pos="553 190 80 16" edTextCol="ff000000"
         edBkgCol="0" labelText="Release Time(ms)" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <TOGGLEBUTTON name="new toggle button" id="2c419ed1a1da1f88" memberName="CompressorToggle2"
                virtualName="" explicitFocusOrder="0" pos="393 150 150 24" buttonText="Compressor"
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <SLIDER name="Centre Frequecy" id="17153379e6faad77" memberName="Threshold_Slider2"
          virtualName="" explicitFocusOrder="0" pos="633 219 64 24" min="-60"
          max="0" int="-60" style="Rotary" textBoxPos="TextBoxLeft" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <LABEL name="new label" id="b19a907fa1352eec" memberName="Threshold3"
         virtualName="" explicitFocusOrder="0" pos="630 194 72 11" edTextCol="ff000000"
         edBkgCol="0" labelText="Threshold" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <SLIDER name="Centre Frequecy" id="f300abc332aabdb7" memberName="CompressorGain_Slider2"
          virtualName="" explicitFocusOrder="0" pos="704 214 65 29" min="0"
          max="40" int="0.10000000000000000555" style="Rotary" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <LABEL name="new label" id="bbe688df0aedbeb6" memberName="Threshold4"
         virtualName="" explicitFocusOrder="0" pos="710 190 40 16" edTextCol="ff000000"
         edBkgCol="0" labelText="Gain" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <SLIDER name="Centre Frequecy" id="28e692661e8aeabb" memberName="EqCentreFrequecy_Slider3"
          virtualName="" explicitFocusOrder="0" pos="789 106 80 32" min="10"
          max="20000" int="0.10000000000000000555" style="Rotary" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <LABEL name="new label" id="2f1d8d19a65df684" memberName="CentreFrequecy_Lebel3"
         virtualName="" explicitFocusOrder="0" pos="789 74 80 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Centre Frequecy:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <SLIDER name="Centre Frequecy" id="7ef71efc35827ff3" memberName="EqQ_Slider3"
          virtualName="" explicitFocusOrder="0" pos="877 106 72 32" min="0.10000000000000000555"
          max="20" int="0.10000000000000000555" style="Rotary" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <LABEL name="new label" id="d2c59a9e74fb96f8" memberName="Q_Lebel5"
         virtualName="" explicitFocusOrder="0" pos="878 72 63 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Q:" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <SLIDER name="Centre Frequecy" id="c58ce4de7907e190" memberName="EqGain_Slider3"
          virtualName="" explicitFocusOrder="0" pos="957 106 72 32" min="-40"
          max="40" int="0.10000000000000000555" style="Rotary" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <LABEL name="new label" id="dda7c77ac227739" memberName="GaindB_Lebel5"
         virtualName="" explicitFocusOrder="0" pos="957 72 72 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Gain(dB):" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <TOGGLEBUTTON name="new toggle button" id="2ea825c4673bab51" memberName="EqToggleButton3"
                virtualName="" explicitFocusOrder="0" pos="797 34 150 24" buttonText="Eq"
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <SLIDER name="Centre Frequecy" id="365d894bc177209" memberName="CompressionRatio_Slider3"
          virtualName="" explicitFocusOrder="0" pos="792 211 69 36" min="1"
          max="100" int="0.10000000000000000555" style="Rotary" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <LABEL name="new label" id="1512c4454b02a517" memberName="CompressionRatio_Label3"
         virtualName="" explicitFocusOrder="0" pos="792 182 61 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Ratio" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <SLIDER name="Centre Frequecy" id="9c4fe8aa8c6c84d" memberName="AttactTime_Slider3"
          virtualName="" explicitFocusOrder="0" pos="864 214 77 28" min="0.10000000000000000555"
          max="80" int="0.10000000000000000555" style="Rotary" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <LABEL name="new label" id="119fcb7a9f1fdbb8" memberName="Q_Lebel6"
         virtualName="" explicitFocusOrder="0" pos="865 180 76 30" edTextCol="ff000000"
         edBkgCol="0" labelText="Attack Time(ms)" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <SLIDER name="Centre Frequecy" id="a83f1df13f097ff" memberName="ReleaseTime_Slider3"
          virtualName="" explicitFocusOrder="0" pos="949 209 72 40" min="0.10000000000000000555"
          max="1000" int="0.10000000000000000555" style="Rotary" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <LABEL name="new label" id="83e94ce22296f312" memberName="GaindB_Lebel6"
         virtualName="" explicitFocusOrder="0" pos="949 186 80 16" edTextCol="ff000000"
         edBkgCol="0" labelText="Release Time(ms)" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <TOGGLEBUTTON name="new toggle button" id="8868548448314e69" memberName="CompressorToggle3"
                virtualName="" explicitFocusOrder="0" pos="789 146 150 24" buttonText="Compressor"
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <SLIDER name="Centre Frequecy" id="3b73b88517190563" memberName="Threshold_Slider3"
          virtualName="" explicitFocusOrder="0" pos="1029 215 64 24" min="-60"
          max="0" int="-60" style="Rotary" textBoxPos="TextBoxLeft" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <LABEL name="new label" id="bde1f5a2e3e2898f" memberName="Threshold5"
         virtualName="" explicitFocusOrder="0" pos="1026 190 72 11" edTextCol="ff000000"
         edBkgCol="0" labelText="Threshold" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <SLIDER name="Centre Frequecy" id="b2ec135b3b8fa3d8" memberName="CompressorGain_Slider3"
          virtualName="" explicitFocusOrder="0" pos="1100 210 65 29" min="0"
          max="40" int="0.10000000000000000555" style="Rotary" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <LABEL name="new label" id="d2f089951a41cec" memberName="Threshold6"
         virtualName="" explicitFocusOrder="0" pos="1106 186 40 16" edTextCol="ff000000"
         edBkgCol="0" labelText="Gain" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <SLIDER name="Centre Frequecy" id="33de48441d242d61" memberName="EqCentreFrequecy_Slider4"
          virtualName="" explicitFocusOrder="0" pos="14 366 80 32" min="10"
          max="20000" int="0.10000000000000000555" style="Rotary" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <LABEL name="new label" id="a7ea4d3cba2fe8d1" memberName="CentreFrequecy_Lebel4"
         virtualName="" explicitFocusOrder="0" pos="14 334 80 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Centre Frequecy:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <SLIDER name="Centre Frequecy" id="ad398a8210b8986a" memberName="EqQ_Slider4"
          virtualName="" explicitFocusOrder="0" pos="102 366 72 32" min="0.10000000000000000555"
          max="20" int="0.10000000000000000555" style="Rotary" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <LABEL name="new label" id="1dd5bfe2e7252b1b" memberName="Q_Lebel7"
         virtualName="" explicitFocusOrder="0" pos="103 332 63 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Q:" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <SLIDER name="Centre Frequecy" id="7ec787f202cb1a92" memberName="EqGain_Slider4"
          virtualName="" explicitFocusOrder="0" pos="182 366 72 32" min="-40"
          max="40" int="0.10000000000000000555" style="Rotary" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <LABEL name="new label" id="99fc8977c575dafb" memberName="GaindB_Lebel7"
         virtualName="" explicitFocusOrder="0" pos="182 332 72 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Gain(dB):" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <TOGGLEBUTTON name="new toggle button" id="67bbdbfd243ce928" memberName="EqToggleButton4"
                virtualName="" explicitFocusOrder="0" pos="22 294 150 24" buttonText="Eq"
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <SLIDER name="Centre Frequecy" id="2acd023501a968c2" memberName="CompressionRatio_Slider4"
          virtualName="" explicitFocusOrder="0" pos="17 471 69 36" min="1"
          max="100" int="0.10000000000000000555" style="Rotary" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <LABEL name="new label" id="7418811841fdb333" memberName="CompressionRatio_Label4"
         virtualName="" explicitFocusOrder="0" pos="17 442 61 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Ratio" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <SLIDER name="Centre Frequecy" id="b0a8f8df58b05968" memberName="AttactTime_Slider4"
          virtualName="" explicitFocusOrder="0" pos="89 474 77 28" min="0.10000000000000000555"
          max="80" int="0.10000000000000000555" style="Rotary" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <LABEL name="new label" id="26b44d4abf5d3da2" memberName="Q_Lebel8"
         virtualName="" explicitFocusOrder="0" pos="90 440 76 30" edTextCol="ff000000"
         edBkgCol="0" labelText="Attack Time(ms)" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <SLIDER name="Centre Frequecy" id="dcebecdd96f75fe4" memberName="ReleaseTime_Slider4"
          virtualName="" explicitFocusOrder="0" pos="174 469 72 40" min="0.10000000000000000555"
          max="1000" int="0.10000000000000000555" style="Rotary" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <LABEL name="new label" id="6e8e32ec835e0ec7" memberName="GaindB_Lebel8"
         virtualName="" explicitFocusOrder="0" pos="174 446 80 16" edTextCol="ff000000"
         edBkgCol="0" labelText="Release Time(ms)" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <TOGGLEBUTTON name="new toggle button" id="2b1846ab058237be" memberName="CompressorToggle4"
                virtualName="" explicitFocusOrder="0" pos="14 406 150 24" buttonText="Compressor"
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <SLIDER name="Centre Frequecy" id="140d49afccc2dd06" memberName="Threshold_Slider4"
          virtualName="" explicitFocusOrder="0" pos="254 475 64 24" min="-60"
          max="0" int="-60" style="Rotary" textBoxPos="TextBoxLeft" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <LABEL name="new label" id="61f53274fd4114e1" memberName="Threshold7"
         virtualName="" explicitFocusOrder="0" pos="251 450 72 11" edTextCol="ff000000"
         edBkgCol="0" labelText="Threshold" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <SLIDER name="Centre Frequecy" id="2649e3e3f5f7b4c9" memberName="CompressorGain_Slider4"
          virtualName="" explicitFocusOrder="0" pos="325 470 65 29" min="0"
          max="40" int="0.10000000000000000555" style="Rotary" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <LABEL name="new label" id="add00fa28acbcb5" memberName="Threshold8"
         virtualName="" explicitFocusOrder="0" pos="331 446 40 16" edTextCol="ff000000"
         edBkgCol="0" labelText="Gain" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
