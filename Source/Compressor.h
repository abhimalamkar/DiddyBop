/*
  ==============================================================================

    Compressor.h
    Created: 26 Jun 2016 8:30:01pm
    Author:  abhij_000

  ==============================================================================
*/

#ifndef COMPRESSOR_H_INCLUDED
#define COMPRESSOR_H_INCLUDED

#include "../JuceLibraryCode/JuceHeader.h"

class Compressor
{
public:
	Compressor(int bufferSize,int sample);
	~Compressor();

	void Compress(AudioSampleBuffer &buffer, int m);

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

	HeapBlock <float> x_g, x_l, y_g, y_l, c, c2;
	int bufferSize;

private:
	AudioSampleBuffer inputBuffer;
	
	float ratio, threshold, makeUpGain, tauAttack, tauRelease, alphaAttack, alphaRelease, yL_prev;
	//int nhost;
	int samplerate;

};

#endif  // COMPRESSOR_H_INCLUDED
