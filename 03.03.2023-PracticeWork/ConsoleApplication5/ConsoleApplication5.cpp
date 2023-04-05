#include <iostream>
using namespace std;
void rectangle(int lenght, int height)
{
	for (size_t i = 0; i < lenght; i++)
	{
		cout << "*";
		for (size_t j = 0; j < height; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}
int factorial(int num)
{
	int result = 1;
	for (size_t i = 1; i <= num; i++)
	{
		result *= i;
	}
	return result;
}
int simple(int num)
{
	int index{};
	for (size_t i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			index++;
			break;
		}
	}
	return index;
}
int degree(int number)
{
	number = number * number * number;
	return number;
}
int more(int num, int number)
{
	int max{};
	if (num > number) max = num;
	else max = number;
	return max;
}
bool difference(int number)
{
	if (number > 0) return true;
	else return false;
}
int main()
{
#pragma region Rectangle
	//int len{}, heig{};
	//cout << "Enter height: ";
	//cin >> heig;
	//cout << "Enter lenght: ";
	//cin >> len;
	//rectangle(heig, len);
#pragma endregion
#pragma region Factorial
	//int number{};
	//cout << "Enter your number: ";
	//cin >> number;
	//cout << number << "! = " << factorial(number);
#pragma endregion
#pragma region SimpleNum
	//int num{};
	//cout << "Enter your number: ";
	//cin >> num;
	//if (simple(num) > 0) cout << "Your number is not simple!";
	//else cout << "Your number is simple!";
#pragma endregion
#pragma region Degree
	//int num{};
	//cout << "Enter your number: ";
	//cin >> num;
	//cout << num << "^3 = " << degree(num);
#pragma endregion
#pragma region More
	//int num_first{}, num_second{};
	//cout << "Enter your first number: ";
	//cin >> num_first;
	//cout << "Enter your second number: ";
	//cin >> num_second;
	//cout << "Max number is: " << more(num_first, num_second);
#pragma endregion
#pragma region True
	//int number{};
	//cout << "Enter your number: ";
	//cin >> number;
	//if (difference(number) > 0) cout << "True";
	//else cout << "False";
#pragma endregion
	return 0;
}
