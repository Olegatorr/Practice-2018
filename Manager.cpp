#include "stdafx.h"
#include "Manager.h"


Manager* Manager::Self = 0;

void Manager::menu() {
	int i = 0;

	while (1) {
		system("cls");
		cout << "1. Show\n2. Add\n3. Save\n4. Read \n0. Exit\n";
		cin >> i;

		switch (i) {
		case 0:
			return;
		case 1:
			if (max == 0) {
				cout << "No file found :c";
				break;
			}


			for (int j = 0; j < max; ++j)
				mas[j].show();
			break;
		case 2:
			MenuAdd();
			break;
		case 3:
			if (Save())
				cout << "Save successful";
			else
				cout << "Save error";
			break;
		case 4:
			if (Read())
				cout << "Read successful";
			else
				cout << "Read error";
			break;
		}

		Sleep(1000);
		i = 0;
	}

	DeleteInstance();
	return;
}

bool Manager::Read() {
	ifstream file("Perh.txt");
	if (!file.is_open())
		return false;

	string temp;

	getline(file, temp);
	max = atoi(temp.c_str());

	for (int i = 0; i < max; ++i) {
		mas[i].read(file);
	}

}

bool Manager::Save() {
	ofstream file("Perh.txt");
	if (!file.is_open())
		return false;

	file << max << endl;

	for (int i = 0; i < max; ++i) {
		mas[i].save(file);
	}

}

void Manager::MenuAdd(){
	int i = 0;

	while (1) {
		system("cls");
		cout << "1.printer\n2.scanner\n3.MFU\n4.graphics_tablet \n0. Exit\n";
		cin >> i;

		switch (i) {
		case 0:
			return;
		case 1:
			mas[max].set("Printer");
			++max;
			break;
		case 2:
			mas[max].set("Scanner");
			++max;
			break;
		case 3:
			mas[max].set("MFU");
			++max;
			break;
		case 4:
			mas[max].set("Graphics tablet");
			++max;
			break;
		}

		Sleep(1000);
		i = 0;
	}

	return;
}
