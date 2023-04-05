#include <iostream>
#include <cmath>
using namespace std;
int main()
{
#pragma region LabWork
#pragma region Task1
	cout << "Enter your year:\n";
	int year{};
	cin >> year;
	int res = (year % 4 == 0);
	cout << year << " = " << res + 365 << " days in year";
#pragma endregion
#pragma region Task2
	//int manat{};
	//float qepik{};
	//cout << "Enter manat:\n";
	//cin >> manat;
	//cout << "Enter qepik:\n";
	//cin >> qepik;
	//float res = manat + (qepik / 100);
	//int total = res;
	//int test = (res - total) * 100;
	//cout << total << " Manat " << test << " Qepik ";
#pragma endregion
#pragma region Task3
	//float lenght{}, width{}, height{};
	//cout << "Lenght (sm) -> ";
	//cin >> lenght;
	//cout << "Width (sm) -> ";
	//cin >> width;
	//cout << "Height (sm) -> ";
	//cin >> height;
	//float result = lenght * width * height;
	//cout << "Volume: " << result << " cube. cm";
#pragma endregion
#pragma region Task4
	//float scale{}, line{};
	//cout << "Map scale (number of kilometers in one centimeter):\n";
	//cin >> scale;
	//cout << "The distance between the points depicting settlements(cm):\n ";
	//cin >> line;
	//float result = scale * line;
	//cout << "Distance between settlements " << result << " km";
#pragma endregion
#pragma region Task5
	//float radius{}, pi = 3.14;
	//cout << "Enter your radius:\n";
	//cin >> radius;
	//cout << (4 * pi * pow(radius, 3) / 3);
#pragma endregion
#pragma endregion
#pragma region LastHomeWork
#pragma region Task1
	//float length{}, minute{};
	//cout
	//	<< "Calculating running speed."
	//	<< endl
	//	<< "Enter the length of distance(meters) = ";
	//cin >> length;
	//cout << "Enter time(min.sec) = ";
	//cin >> minute;
	//float time_second = minute - (int(minute));
	//float time = int(minute) * 60 + time_second * 100;
	//float speed = length / time;
	//cout << "You were running at speed " << speed / 1000 * 3600 << " km/h";
#pragma endregion
#pragma region Task2
	//float money{}, percent{};
	//cout << "Enter your money in euro:\n";
	//cin >> money;
	//cout << "Enter percent:\n";
	//cin >> percent;
	//float money_percent = money * percent / 100;
	//cout << "Every month you will receive: " << money_percent / 12 << " euro";
#pragma endregion
#pragma endregion
}




