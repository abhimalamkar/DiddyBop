/*
  ==============================================================================

    ParametricEQFilter.h
    Created: 11 Jun 2016 3:35:15pm
    Author:  abhij_000

  ==============================================================================
*/

#ifndef __PARAMETRICEQFILTER_H_6E48F605__
#define __PARAMETRICEQFILTER_H_6E48F605__

#define _USE_MATH_DEFINES
#include "../JuceLibraryCode/JuceHeader.h"

//==============================================================================
/**
* This class implements a biquad parametric EQ section according
* to the equations in the Reiss and McPherson text.
*/

class ParametricEQFilter : public IIRFilter
{
public:
	//==============================================================================

	/* Makes a parametric EQ section entirely from discrete-time parameters.
	* Frequency here is specified from 0 to M_PI.
	*/
	void makeParametric(const double discreteFrequency,
		const double Q,
		const double gainFactor) noexcept;

	/** Makes this filter duplicate the set-up of another one.
	*/
	void copyCoefficientsFrom(const ParametricEQFilter& other) noexcept;

private:
	//==============================================================================
	JUCE_LEAK_DETECTOR(ParametricEQFilter);
};


#endif //