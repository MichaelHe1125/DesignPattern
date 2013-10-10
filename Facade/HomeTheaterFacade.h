#pragma once

#include <string>
#include "Amplifier.h"
#include "Tuner.h"
#include "DvdPlayer.h"
#include "CdPlayer.h"
#include "Projector.h"
#include "TheaterLights.h"
#include "PopcornPopper.h"
#include "Screen.h"

//class Amplifier;
//class Tuner;
//class DvdPlayer;
//class CdPlayer;
//class Projector;
//class TheaterLights;
//class Screen;
//class PopcornPopper;

class HomeTheaterFacade
{
public:

	HomeTheaterFacade( Amplifier *ampli,
		Tuner *tuner,
		DvdPlayer *dvd,
		CdPlayer *cd,
		Projector *projector,
		TheaterLights *lights,
		Screen *screen,
		PopcornPopper *popper )
	{
		this->amp = ampli;
		this->tuner = tuner;
		this->dvd = dvd;
		this->cd = cd;
		this->projector = projector;
		this->screen = screen;
		this->lights = lights;
		this->popper = popper;
	}

	virtual ~HomeTheaterFacade(void);

	void watchMovie(const std::string &movie);

	void endMovie();

	void listenToCd(const std::string &cdTitle);

	void endCd();

	void listenToRadio(double frequency);

	void endRadio();

private:
	Amplifier *amp;
	Tuner *tuner;
	DvdPlayer *dvd;
	CdPlayer *cd;
	Projector *projector;
	TheaterLights *lights;
	Screen *screen;
	PopcornPopper *popper;
};
