#include <stdio.h>
#include <list>
#include<iostream>

using namespace std;

int main() {
	list<const char*> station = {"Tabata","Nippori", "Uguisudani","Ueno","Okachimachi","Akihabara","Kanda","Tokyo","Yurakucho","Shimbashi","Hamamatsucho","Tamachi","Sinagawa" };

	for (list<const char*>::iterator itr = station.begin(); itr != station.end(); itr++) {
		cout << *itr << endl;
	}

	cout << endl;

	for (list<const char*>::iterator itr = station.begin(); itr != station.end(); itr++) {

		if (strcmp(*itr, "Nippori") == 0) {
			itr = station.insert(itr, "Nishi-Nippori");
			++itr;
		}
	}

	for (list<const char*>::iterator itr = station.begin(); itr != station.end(); itr++) {
		cout << *itr << endl;
	}

	cout << endl;

	for (list<const char*>::iterator itr = station.begin(); itr != station.end(); itr++) {

		if (strcmp(*itr, "Tamachi") == 0) {
			itr = station.insert(itr, "Takanawa-Gateway");
			++itr;
		}
	}

	for (list<const char*>::iterator itr = station.begin(); itr != station.end(); itr++) {
		cout << *itr << endl;
	}

	cout << endl;

	return 0;
}