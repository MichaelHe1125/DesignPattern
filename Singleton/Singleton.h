#pragma once
class Singleton
{
public:

	static Singleton* getInstance()
	{
		if (uniqueInstance == nullptr)
		{
			uniqueInstance = new Singleton();
		}
		return uniqueInstance;
	}

	static void releaseInstance()
	{
		if (uniqueInstance)
		{
			delete uniqueInstance;
			uniqueInstance = nullptr;
		}
	}

private:

	Singleton(void) {}
	~Singleton() {}
	static Singleton* uniqueInstance;
};

