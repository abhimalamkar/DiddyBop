/*
  ==============================================================================

	Compressor.cpp
	Created: 26 Jun 2016 8:30:01pm
	Author:  abhij_000

  ==============================================================================
*/

#include "Compressor.h"

Compressor::Compressor(int bSize,int sample)
{
	bufferSize = bSize;
	samplerate = sample;
	x_g.allocate(bSize, true);
	x_l.allocate(bSize, true);
	y_g.allocate(bSize, true);
	y_l.allocate(bSize, true);
	c.allocate(bSize, true);
	c2.allocate(bSize, true);
	resetAll();

}

Compressor::~Compressor()
{
}

void Compressor::Compress(AudioSampleBuffer& buffer, int m)
{   
	
	alphaAttack = exp(-1 / (0.001 * samplerate * tauAttack));
	alphaRelease = exp(-1 / (0.001 * samplerate * tauRelease));
	for (int i = 0; i < bufferSize; ++i)
	{
		//Level detection- estimate level using peak detector
		if (fabs(buffer.getWritePointer(m)[i]) < 0.000001) x_g[i] = -120;
		else x_g[i] = 20 * log10(fabs(buffer.getWritePointer(m)[i]));
		//Gain computer- static apply input/output curve
		if (x_g[i] >= threshold) y_g[i] = threshold + (x_g[i] - threshold) / ratio;
		else y_g[i] = x_g[i];
		x_l[i] = x_g[i] - y_g[i];
		//Ballistics- smoothing of the gain 
		if (x_l[0] > yL_prev)  y_l[i] = alphaAttack * yL_prev + (1 - alphaAttack) * x_l[i];
		else				 y_l[i] = alphaRelease* yL_prev + (1 - alphaRelease) * x_l[i];
		//find control
		c[i] = pow(10, (makeUpGain - y_l[i]) / 20);
		yL_prev = y_l[i];
	}
}

float Compressor::getThreshold()
{
	return threshold;
}

float Compressor::getRatio()
{
	return ratio;
}

float Compressor::getGain()
{
	return makeUpGain;
}

float Compressor::getAttackTime()
{
	return tauAttack;
}

float Compressor::getReleaseTime()
{
	return tauRelease;
}

void Compressor::setThreshold(float T)
{
	threshold = T;
}

void Compressor::setGain(float G)
{
	makeUpGain = G;
}

void Compressor::setRatio(float R)
{
	ratio = R;
}

void Compressor::setAttackTime(float A)
{
	tauAttack = A;
}

void Compressor::setReleaseTime(float R)
{
	tauRelease = R;
}

void Compressor::resetAll()
{
	tauAttack = 0; tauRelease = 0;
	alphaAttack = 0; alphaRelease = 0;
	threshold = 0;
	ratio = 1;
	makeUpGain = 0;
	samplerate = 0;
	yL_prev = 0;
	for (int i = 0; i < bufferSize; ++i)
	{
		x_g[i] = 0;	y_g[i] = 0;
		x_l[i] = 0;	y_l[i] = 0;
		c[i] = 0; c2[i] = 0;
	}
}
