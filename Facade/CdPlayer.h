#pragma once
#include <string>
#include <iostream>

class Amplifier;
class CdPlayer
{
public:

	CdPlayer(const std::string &description, Amplifier *amplifier)
		: amplifier(amplifier), title(nullptr)
	{
		this->description = new std::string(description);
	}

	virtual ~CdPlayer(void)
	{
		delete description;
		description=nullptr;

		if (title)
		{
			delete title;
			title=nullptr;
		}		
	}

	std::ostream& operator<<(std::ostream& out)
	{
		return out<<*description;
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
		delete title;
		title = nullptr;
		std::cout<<*description+" eject\n";
	}
	void play(const std::string &title) {
		this->title =  new std::string(title);
		currentTrack = 0;
		std::cout<<*description + " playing \"" + title + "\"";
	}

	void play(int track) {
		if (title == nullptr) {
			std::cout<<*description + " can't play track "
				<<track<<" no cd inserted\n";
		} else {
			currentTrack = track;
			std::cout<<*description + " playing track "
				<< currentTrack << " of \"" + *title + "\"\n";
		}
	}

	void stop() {
		currentTrack = 0;
		std::cout << *description + " stopped \"" + *title + "\"\n";
	}

	void pause() {
		std::cout << *description + " paused \"" + *title + "\"\n";
	}

private:
	std::string   *description;
	Amplifier     *amplifier;
	int           currentTrack;
	std::string   *title;
};
