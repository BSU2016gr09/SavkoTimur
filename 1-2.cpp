#include <iostream>
#include <ctime>
#include <clocale>

using namespace std;

void decompositionNumbers(int arr[], int n)
{
	int i = 0;
	while (i < 4)
	{
		arr[i] = n % 10;
		n = n / 10;
		i++;
	}
	arr[4] = n;
}

void sortArray(int arr[])
{
	int i = 0;
	while (i < 4)
	{
		if (arr[i + 1] > arr[i])
		{
			int tmp = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = tmp;
			i = 0;
		}
		else i++;
	}
}

void checkNatural(double n)
{
	if (floor(n) == n && n > 0);
	else exit(1);
}

void checkNumber(double n)
{
	if (n > 9999 && n < 100000);
	else exit(1);
}

void printArray(int a[])
{
	int i = 0;
	while (i < 5)
	{
		cout << a[i];
		i++;
	}
	cout << endl;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	/*
	Пользователь вводит с клавиатуры пятизначное натуральное число, которое сохраняется в переменную n,
	проверить корректность ввода, составить и вывести на экран число из цифр введённого числа n, так,
	чтобы выведенное число оказалось максимальным из возможных.
	*/
	int arr[5], i = 0;
	double n;
	cin >> n;
	checkNatural(n);
	checkNumber(n);
	decompositionNumbers(arr, n);
	sortArray(arr);
	printArray(arr);
	system("pause");
}