#pragma once

#include "Periphery.h"

#define MAX 300

using namespace std;

class Manager
{
	Periphery mas[MAX];
	int max;
protected:
	static Manager* Self;
	Manager() { max = 0; }
	virtual ~Manager() {}
public:

	static Manager* Instance()
	{
		if (!Self)
		{
			Self = new Manager();
		}
		return Self;
	}

	static bool DeleteInstance()
	{
		if (Self)
		{
			delete Self;
			Self = 0;
			return true;
		}
		return false;
	}

	void menu();
	bool Save();
	bool Read();
	void MenuAdd();
};

