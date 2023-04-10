#include <iostream>
using namespace std;
float Addition(int first, int second)
{
	return first + second;
}
float Subtraction(int first, int second)
{
	return first - second;
}
float Multiplication(int first, int second)
{
	return first * second;
}
float Division(int first, int second)
{
	return first / second;
}
int main()
{
	int first{}, second{}, choise{};
	cout << "Enter your first number: ";
	cin >> first;
	cout << "Enter your second number: ";
	cin >> second;
	cout
		<< "Enter your choise" << endl
		<< "1.Addition" << endl
		<< "2.Subtraction" << endl
		<< "3.Multiplication" << endl
		<< "4.Division" << endl;
	cin >> choise;
	float (*operations[])(int, int) = { Addition, Subtraction, Multiplication, Division };
	cout << "Your answer is: " << operations[choise - 1](first, second);
		
		
	return 0;
}
