#pragma once
#include <string>
#include <iostream>

class DvdPlayer;
class CdPlayer;
class Tuner;
class Amplifier
{
public:

	Amplifier(const std::string &description)
	{
		this->description = new std::string(description);
	}

	virtual ~Amplifier(void)
	{
		delete description;
	}

	void on()
	{
		std::cout<<*description+" on\n";
	}

	void off()
	{
		std::cout<<*description+" off\n";
	}

	void setStereoSound() {
		std::cout<<*description + " stereo mode on\n";
	}

	void setSurroundSound() {
		std::cout<<*description + " surround sound on (5 speakers, 1 subwoofer)\n";
	}

	void setVolume(int level) {
		std::cout<<*description + " setting volume to "<<level<<std::endl;
	}

	void setTuner(Tuner *tuner) {
		std::cout<<*description + " setting tuner to "<<dvd<<std::endl;
		this->tuner = tuner;
	}

	void setDvd(DvdPlayer *dvd) {
		std::cout<<*description + " setting DVD player to "<<dvd<<std::endl;
		this->dvd = dvd;
	}

	void setCd(CdPlayer *cd) {
		std::cout<<*description + " setting CD player to "<<cd<<std::endl;
		this->cd = cd;
	}

	std::string* toString()
	{
		return description;
	}
private:
	std::string   *description;
	Tuner *tuner;
	DvdPlayer *dvd;
	CdPlayer *cd;
};

