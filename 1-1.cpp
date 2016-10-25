#include <iostream>
#include <ctime>
#include <clocale>

using namespace std;

void sumOfNumbers(int n)
{
	int digit, sum = 0;
	while (n > 0)
	{
		digit = n % 10;
		n = n / 10;
		sum = sum + digit;
	}
	cout << sum << endl;
}

void checkNatural(double n)
{
	if (floor(n) == n && n > 0);
	else exit(1);
}

void printArray(int a[])
{
	int i = 0;
	while (i < 5)
	{
		cout << a[i] ;
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
	int n;
	cin >> n;
	checkNatural(n);
	decompositionNumbers(arr, n);
	sortArray(arr);
	printArray(arr);
	system("pause");
}