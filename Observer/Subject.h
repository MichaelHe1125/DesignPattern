#pragma once
class Observer;
class Subject
{
public:
	Subject(void) { }
	virtual ~Subject(void) { }

	virtual void registerObserver(Observer *o)=0;
	virtual void removeObserver(Observer *o)=0;
	virtual void notifyObservers()=0;

};
