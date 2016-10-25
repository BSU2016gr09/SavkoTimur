#include <iostream>
#include <ctime>
#include <clocale>

using namespace std;

void initRandomRealArray(float arr[], int N)
{
	int i = 0;
	while (i < N)
	{
		arr[i] = (rand() % 1001 - 500) / 10.0;
		cout << arr[i] << " ";
		i++;
	}
}

void printArrayOddOrEven(float arr[], int N)
{
	int i = 1;
	while (i < N)
	{
		cout << arr[i] << ' ';
		i += 2;
	}
	i = 0;
	while (i < N)
	{
		cout << arr[i] << ' ';
		i += 2;
	}
}

int main()
{
	/*
	Объявить массив вещественных чисел размера N (число N объявить как константу).
	Проинициализировать значения элементов массива случайными числами из промежутка от -50 до 50.
	Вывести значения сначала элементов с нечетными коэффициентами (1-й, 3-й, 5-й,...) а затем - с четными.
	*/
	srand(time(0));
	int const N = 10;
	float arr[N];
	initRandomRealArray(arr, N);
	printArrayOddOrEven(arr, N);
	system("pause");
}