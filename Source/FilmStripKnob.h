/*
  ==============================================================================

    FilmStripKnob.h
    Created: 14 Jul 2016 5:45:28pm
    Author:  Abhijeet Malamkar

  ==============================================================================
*/

#ifndef FILMSTRIPKNOB_H_INCLUDED
#define FILMSTRIPKNOB_H_INCLUDED

#include "../JuceLibraryCode/JuceHeader.h"

//==============================================================================
/*
*/
class FilmStripKnob    : public Slider
{
public:
    FilmStripKnob(File const& image, const int numFrames, const bool stripIsHorizontal):
  //  :	Slider(image.getFullPathName() + T(" FilmStripKnob")),
  //  filmStrip(image.exists() ? ImageFileFormat::loadFrom(image) : 0),
    numFrames_(numFrames),
    isHorizontal_(stripIsHorizontal)
    {
        // In your constructor, you should add any child components, and
        if(filmStrip)
        {
            setTextBoxStyle(NoTextBox, 0, 0, 0);
            if(isHorizontal_) {
                frameHeight = filmStrip->getHeight();
                frameWidth = filmStrip->getWidth() / numFrames_;
            } else {
                frameHeight = filmStrip->getHeight() / numFrames_;
                frameWidth = filmStrip->getWidth();
            }
        }
        // initialise any special settings that your component needs.

    }

    ~FilmStripKnob()
    {
        delete filmStrip;
    }

    void paint (Graphics& g) override
    {
        
        if(filmStrip) {
            int value = (getValue() - getMinimum()) / (getMaximum() - getMinimum()) * (numFrames_ - 1);
            if(isHorizontal_) {
                g.drawImage(*filmStrip, 0, 0, getWidth(), getHeight(),
                            value * frameWidth, 0, frameWidth, frameHeight);
            } else {
                g.drawImage(*filmStrip, 0, 0, getWidth(), getHeight(),
                            0, value * frameHeight, frameWidth, frameHeight);
            }
        }
        
        /* This demo code just fills the component's background and
           draws some placeholder text to get you started.

           You should replace everything in this method with your own
           drawing code..
        */
 /*
        g.fillAll (Colours::white);   // clear the background

        g.setColour (Colours::grey);
        g.drawRect (getLocalBounds(), 1);   // draw an outline around the component

        g.setColour (Colours::lightblue);
        g.setFont (14.0f);
        g.drawText ("FilmStripKnob", getLocalBounds(),
                    Justification::centred, true);   // draw some placeholder text
  */
    }

    int getFrameWidth() const  { return filmStrip ? frameWidth  : 100; }
    int getFrameHeight() const { return filmStrip ? frameHeight : 24;  }
    
    void resized() override
    {
        // This method is where you should set the bounds of any child
        // components that your component contains..

    }

private:
    
    Image* filmStrip;
    const int numFrames_;
    const bool isHorizontal_;
    int frameWidth, frameHeight;
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (FilmStripKnob)
};


#endif  // FILMSTRIPKNOB_H_INCLUDED
