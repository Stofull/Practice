#include <iostream>
using namespace std;
#pragma region Task1 Min Max
//template <typename T>
//T arr(T mass[], const T length, T min, T max)
//{
//	for (size_t i = 0; i < length; i++)
//	{
//		if (min > mass[i]) min = mass[i];
//		if (max < mass[i]) max = mass[i];
//	}
//	cout << "Minimal num in array is: " << min << endl << "Maximum num in array is: " << max;
//	return 0;
//}
//int main()
//{
//	const int length_int = 10;
//	int array_int[length_int] = { 2, 1, 3, 4, 5, 6, 7, 8, 10, 9 };
//	double array_double[length_int] = { 2, 1, 3, 4, 5, 6, 7, 8, 10, 9 };
//	float array_float[length_int] = { 2.5, 1.9, 3.4, 4.6, 5.1, 6.3, 7.7, 8, 10, 9 };
//	
//	int min = array_int[0];
//	int max = array_int[0];
//	cout << "For int: \n";
//	arr<int>(array_int, length_int, min, max);
//	cout << "\nFor double: \n";
//	arr<double>(array_double, length_int, min, max);
//	cout << "\nFor float: \n";
//	arr<float>(array_float, length_int, min, max);
//	return 0;
//}
#pragma endregion
#pragma region Task2 Average
//template <typename T>
//T arr(T mass[], const T length, T index)
//{
//	for (size_t i = 0; i < length; i++)
//	{
//		index += mass[i];
//	}
//	cout << index / length;
//	return 0;
//}
//int main()
//{
//	const int length_int = 10;
//	int array_int[length_int] = { 2, 1, 3, 4, 5, 6, 7, 8, 10, 9 };
//	double array_double[length_int] = { 2, 1, 3, 4, 5, 6, 7, 8, 10, 9 };
//	float array_float[length_int] = { 2.5, 1.9, 3.4, 4.6, 5.1, 6.3, 7.7, 8, 10, 9 };
//	float index{};
//	cout << "For int: \n";
//	arr<int>(array_int, length_int, index);
//	cout << "\nFor double: \n";
//	arr<double>(array_double, length_int, index);
//	cout << "\nFor float: \n";
//	arr<float>(array_float, length_int, index);
//	return 0;
//}
#pragma endregion
#pragma region Task3 Factorial
//template <typename T, typename T2>
//T arr(T mass[], const T2 length)
//{
//	T fact = 1;
//	T index = 1;
//	for (size_t i = 0; i < length; i++)
//	{
//		while (index <= mass[i])
//		{
//			fact *= index;
//			index += 1;
//		}
//		cout << mass[i] << "!=" << fact << " | ";
//		index = 1;
//		fact = 1;
//	}
//	return 0;
//}
//int main()
//{
//	const int length_int = 10;
//	int array_int[length_int] = { 2, 1, 3, 4, 5, 6, 7, 8, 10, 9 };
//	double array_double[length_int] = { 2, 1, 3, 4, 5, 6, 7, 8, 10, 9 };
//	float array_float[length_int] = { 2.5f, 1.9f, 3.4f, 4.6f, 5.1f, 6.3f, 7.7f, 8.5f, 10.3f, 9.1f};
//	cout << "For int: \n";
//	arr<int>(array_int, length_int);
//	cout << "\nFor double: \n";
//	arr<double>(array_double, length_int);
//	cout << "\nFor float: \n";
//	arr<float>(array_float, length_int);
//	return 0;
//}
#pragma endregion
#pragma region Task4 SummFact
//template <typename T, typename T2>
//T arr(T mass[], const T2 length)
//{
//	T fact = 1;
//	T index = 1;
//	T result{};
//	for (size_t i = 0; i < length; i++)
//	{
//		while (index <= mass[i])
//		{
//			fact *= index;
//			index += 1;
//		}
//		result += fact;
//		index = 1;
//		fact = 1;
//	}
//	cout << result;
//	return 0;
//}
//int main()
//{
//
//	const int length_int = 10;
//	int array_int[length_int] = { 2, 1, 3, 4, 5, 6, 7, 8, 10, 9 };
//	double array_double[length_int] = { 2, 1, 3, 4, 5, 6, 7, 8, 10, 9 };
//	float array_float[length_int] = { 2.5f, 1.9f, 3.4f, 4.6f, 5.1f, 6.3f, 7.7f, 8.5f, 10.3f, 9.1f };
//	cout << "For int: \n";
//	arr<int>(array_int, length_int);
//	cout << "\nFor double: \n";
//	arr<double>(array_double, length_int);
//	cout << "\nFor float: \n";
//	arr<float>(array_float, length_int);
//	return 0;
//}
#pragma endregion
