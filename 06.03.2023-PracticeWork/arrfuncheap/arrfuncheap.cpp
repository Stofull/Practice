#include <iostream>
#include <time.h>
using namespace std;
#pragma region Task1
int* create(int length)
{
	srand(time(0));
	int* arr = new int[length] {};

	for (size_t i = 0; i < length; i++)
	{
		arr[i] = 1 + rand() % 100;
	}
	return arr;
}

int main() {
	int num{};
	cout << "Length of the arr: " << endl;
	cin >> num;
	int* res = create(num);
	int max = res[0], min = res[0];
	for (size_t i = 0; i < num; i++)
	{
		cout << res[i] << " ";
		if (max < res[i]) max = res[i];
		if (min > res[i]) min = res[i];
	}
	cout << endl;
	cout << "Max number is: " << max << endl << "Min number is: " << min;
	return 0;
}
#pragma endregion
#pragma region Task2
//int* create(int length)
//{
//	srand(time(0));
//	int* arr = new int[length] {};
//
//	for (size_t i = 0; i < length; i++)
//	{
//		arr[i] = 1 + rand() % 100;
//	}
//	return arr;
//}
//int* new_arr(int length)
//{
//	int* heap = new int[length] {};
//	int* res = create(length);
//	int i{}, j = length - 1;
//	while (i != length)
//	{
//		heap[i] = res[j];
//		j--;
//		i++;
//	}
//	return heap;
//}
//
//int main() {
//	int num{};
//	cout << "Length of the arr: " << endl;
//	cin >> num;
//	int* res = create(num);
//	int* new_res = new_arr(num);
//	for (size_t i = 0; i < num; i++)
//	{
//		cout << res[i] << " ";
//	}
//	cout << endl;
//	for (size_t i = 0; i < num; i++)
//	{
//		cout << new_res[i] << " ";
//	}
//	return 0;
//
//}
#pragma endregion
#pragma region Task3
//int* create(int length)
//{
//	srand(time(0));
//	int* arr = new int[length] {};
//
//	for (size_t i = 0; i < length; i++)
//	{
//		arr[i] = 1 + rand() % 50;
//	}
//	return arr;
//}
//bool isSimple(int num)
//{
//	for (int i = 2; i <= num / 2 ; ++i)
//		if (num % i == 0)
//			return false;
//	return true;
//}
//
//int countSimple(int* numbers, int length)
//{
//	int count{};
//	for (size_t i = 0; i < length; i++)
//		if (isSimple(numbers[i])) count++;
//	return count;
//}
//int main() {
//	int length{};
//	cout << "Length of the arr: " << endl;
//	cin >> length;
//	int* numbers = create(length);
//	for (size_t i = 0; i < length; i++)
//	{
//		cout << numbers[i] << " ";
//	}
//	cout << endl;
//	cout << countSimple(numbers,length);
//	return 0;
//}
#pragma endregion