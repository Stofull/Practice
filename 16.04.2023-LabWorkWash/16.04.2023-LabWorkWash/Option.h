#include <iostream>
using namespace std;
struct Machine {
	char* firm = new char[20] {};
	char* color = new char[20] {};
	int width;
	int length;
	int height;
	int power;
	int speedSpin;
	int heatingTemperature;

	void print() {
		cout
			<< "\t|Your clothes have been washed|\nWashing machine characteristics" << endl
			<< "Firm: " << Machine::firm << endl
			<< "Color : " << Machine::color << endl
			<< "Width : " << Machine::width << endl
			<< "Length : " << Machine::length << endl
			<< "Height : " << Machine::height << endl
			<< "Power : " << Machine::power << endl
			<< "Speed spin : " << Machine::speedSpin << endl
			<< "Heating : " << Machine::heatingTemperature << endl;
	}
};