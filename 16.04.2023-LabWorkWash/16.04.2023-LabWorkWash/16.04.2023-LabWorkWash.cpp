#include <iostream> 
#include "Option.h" 
using namespace std;
Machine* washingMachine()
{
	Machine* m1 = new Machine;
	cout << "Enter firm: ";
	cin.getline(m1->firm, 20);
	cout << "Enter color: ";
	cin.getline(m1->color, 20);
	cout << "Enter width: ";
	cin >> m1->width;
	cout << "Enter length: ";
	cin >> m1->length;
	cout << "Enter height: ";
	cin >> m1->height;
	cout << "Enter power: ";
	cin >> m1->power;
	cout << "Enter speedSpin: ";
	cin >> m1->speedSpin;
	cout << "Enter heatingTemperature: ";
	cin >> m1->heatingTemperature;
	return m1;
}
int main()
{
	int choise{};
	Machine** wash = new Machine*[1];
	while (choise == 0)
	{
	wash[0] = washingMachine();
	wash[0]->print();
	cout << "Do you want to continue washing?\n0-Yes\n1-No\n";
	cin >> choise;
	cin.ignore();
	}
	cout << "\t|Goodbye!|";
}
