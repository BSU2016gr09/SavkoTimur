#include <iostream>
#include <ctime>
#include <clocale>

using namespace std;

void initRandomArray(int arr[], int n)
{
	int i = 0;
	while (i <10)
	{
		arr[i] = rand() % (3 * n + 1) - (2 * n);
		cout << arr[i] << ' ';
		i++;
	}
	cout << endl;
}

void positiveEvenNumbers(int arr[])
{
	int k = 0, i = 0;
	while (i < 10)
	{
		if (arr[i] > 0 && arr[i] % 2 == 0) k = k + 1;
		i++;
	}
	cout << k;
}

void checkNatural(double n)
{
	if (floor(n) == n && n > 0);
	else exit(1);
}

void checkNumber(double n)
{
	if (n <= 100);
	else exit(1);
}

int main()
{
	srand(time(0));
	setlocale(LC_ALL, "Russian");
	/*
	ѕользователь вводит с клавиатуры натуральное число не большее 100, которое сохран€етс€ в переменную n,
	проверить корректность ввода, создать массив из 10 случайных целых чисел из отрезка [-2n;n], вывести массив на экран в строку,
	подсчитать и и вывести на экран количество положительных чЄтных чисел в массиве.
	*/
	int arr[10];
	double n;
	cin >> n;
	checkNatural(n);
	checkNumber(n);
	initRandomArray(arr, n);
	positiveEvenNumbers(arr);
	system("pause");
}