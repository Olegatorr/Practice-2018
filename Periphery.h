#pragma once

#include <iostream>
#include <windows.h>
#include <fstream>
#include <string>

#define NameLength 1000


using namespace std;

class Periphery
{
public:
	Periphery() {}
	~Periphery() {}

	string perDev;

	string manufacturer;
	string year;
	string print_colour;
	string price;
	string device_colour;
	string Interface;
	string format;
	string speed;
	string scan_area;  

	void clear();
	void show();
	void save(ofstream &file);
	void read(ifstream &file);
	void set(string dev);
};
