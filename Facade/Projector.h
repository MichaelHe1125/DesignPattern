#pragma once
class DvdPlayer;
class Projector
{
public:

	Projector(const std::string &description, DvdPlayer *dvdPlayer)
	{
		this->dvdPlayer = dvdPlayer;
		this->description = new std::string(description);
	}

	virtual ~Projector(void)
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

	void wideScreenMode()
	{
		std::cout<<*description+" in widescreen mode (16x9 aspect ratio)\n";
	}

	void tvMode()
	{
		std::cout<<*description+" in tv mode (4x3 aspect ratio)\n";
	}

	std::string* toString()
	{
		return description;
	}
private:
	std::string   *description;
	DvdPlayer *dvdPlayer;
};

