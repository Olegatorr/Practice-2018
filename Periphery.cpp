#include "stdafx.h"
#include "Periphery.h"


void Periphery::clear() {
	perDev = " ";
	 manufacturer = " " ;
	 year = " ";
	 print_colour = " ";
	 price = " ";
	 device_colour = " ";
	 Interface = " ";
	 format = " ";
	 speed = " ";
	scan_area = " " ;
}

void Periphery::show() {
	cout << perDev << endl;
	cout << manufacturer << endl
		<< year << endl
		<< print_colour << endl
		<< price << endl
		<< device_colour << endl
		<< Interface << endl
		<< format << endl
		<< speed << endl
		<< scan_area << endl;
}

void Periphery::save(ofstream &file) {
	file << perDev << endl;
	file << manufacturer << endl
		<< year << endl
		<< print_colour << endl
		<< price << endl
		<< device_colour << endl
		<< Interface << endl
		<< format << endl
		<< speed << endl
		<< scan_area << endl;  
}

void Periphery::read(ifstream &file) {

	getline(file, perDev);

	getline(file, manufacturer);
	getline(file, year);
	getline(file, print_colour);
	getline(file, price);
	getline(file, device_colour);
	getline(file, Interface);
	getline(file, format);
	getline(file, speed);
	getline(file, scan_area);

}

void Periphery::set(string dev) {
	perDev = dev;

	char *Temp = new char[NameLength];

	cout << "Manufacturer: ";
	cin >> Temp;
	manufacturer = Temp;

	cout << "Year : ";
	cin >> Temp;
	year = Temp;

	cout << "Print colour : ";
	cin >> Temp;
	print_colour = Temp;

	cout << "Price : ";
	cin >> Temp;
	price = Temp;

	cout << "Device colour : ";
	cin >> Temp;
	device_colour = Temp;

	cout << "Interface : ";
	cin >> Temp;
	Interface = Temp;

	cout << "Format : ";
	cin >> Temp;
	format = Temp;

	cout << "Speed : ";
	cin >> Temp;
	speed = Temp;

	cout << "Scan area : ";
	cin >> Temp;
	scan_area = Temp;
}
