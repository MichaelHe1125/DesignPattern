#pragma once
#include <string>
#include <iostream>

class Amplifier;
class DvdPlayer
{
public:

	DvdPlayer(const std::string &description, Amplifier *amplifier)
		: amplifier(amplifier), movie(nullptr)
	{
		this->description = new std::string(description);
	}

	virtual ~DvdPlayer(void)
	{
		delete description;
		description=nullptr;

		if (movie)
		{
			delete movie;
			movie=nullptr;
		}
	}

	void on()
	{
		std::cout<<*description+" on\n";
	}

	void off()
	{
		std::cout<<*description+" off\n";
	}

	void eject() 
	{
		delete movie;
		movie = nullptr;
		std::cout<<*description+" eject\n";
	}

	void play(const std::string &movie) {
		this->movie =  new std::string(movie);
		currentTrack = 0;
		std::cout<<*description + " playing \"" + movie + "\"\n";
	}

	void play(int track) {
		if (movie == nullptr) {
			std::cout<<*description + " can't play track "
				<<track<<" no dvd inserted\n";
		} else {
			currentTrack = track;
			std::cout<<*description + " playing track "
				<< currentTrack << " of \"" + *movie + "\"\n";
		}
	}

	void stop() {
		currentTrack = 0;
		std::cout << *description + " stopped \"" + *movie + "\"\n";
	}

	void pause() {
		std::cout << *description + " paused \"" + *movie + "\"\n";
	}

	void setTwoChannelAudio() {
		std::cout<<*description + " set two channel audio\n";
	}

	void setSurroundAudio() {
		std::cout<<*description + " set surround audio\n";
	}
	
	friend std::ostream& operator<<(std::ostream& out, const DvdPlayer &dvdPlayer)
	{
		return out<<*dvdPlayer.description;
	}

private:
	std::string   *description;
	Amplifier     *amplifier;
	int           currentTrack;
	std::string   *movie;
};

