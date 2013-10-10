#include <vld.h>
#include "HomeTheaterFacade.h"

int main(void)
{
	Amplifier *ampli = new Amplifier("Top-O-Line Amplifier");
	Tuner *tuner = new Tuner("Top-O-Line AM/FM Tuner", ampli);
	DvdPlayer *dvd = new DvdPlayer("Top-O-Line DVD Player", ampli);
	CdPlayer *cd = new CdPlayer("Top-O-Line CD Player", ampli);
	Projector *projector = new Projector("Top-O-Line Projector", dvd);
	TheaterLights *lights = new TheaterLights("Theater Ceiling Lights");
	Screen *screen = new Screen("Theater Screen");
	PopcornPopper *popper = new PopcornPopper("Popcorn Popper");

	HomeTheaterFacade *homeTheater = 
		new HomeTheaterFacade(ampli, tuner, dvd, cd, 
		projector, lights, screen,  popper);

	homeTheater->watchMovie("Raiders of the Lost Ark");
	homeTheater->endMovie();

	delete homeTheater;
	delete popper;
	delete screen;
	delete lights;
	delete projector;
	delete cd;
	delete dvd;
	delete tuner;
	delete ampli;

	return 0;
}