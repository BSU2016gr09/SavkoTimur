﻿// Массив чисел размера N проинициализировать случайными числами из промежутка от -N до N. Циклически сдвинуть (не переставить, а именно сдвинуть! Т.е. нельзя использовать swap или аналоги надо использовать только присваивание a[i]=.....) элементы массива вправо на 1 элемент (последний элемент станет первым, 1-й станет 2-м, 2-й станет 3-м и т.д.) потом циклически сдвинуть элементы массива влево на 1 элемент (первый элемент станет последним, 2-й станет 1-м и т.д)
#include <iostream>
#include <ctime>
#include <clocale>

using namespace std;

void flipАrray(int a[], int const N)
{
	int i = 0, j = N - 1;
	while (i < N / 2)
	{
		swap(a[i], a[j]);
		i++;
		j--;
	}
}

void randomArray(int a[], int const N)
{
	int i = 0;
	while (i < N)
	{
		a[i] = (rand() % (2 * N + 1) - N);
		i++;
	}
}

void shiftRightArray(int a[], int const N, int b[])
{
	int i = N - 1;
	while (i >= 0)
	{
		b[(i + 1) % N] = a[i];
		i--;
	}
}

void shiftLeftArray(int a[], int const N, int b[])
{
	int i = 0;
	while (i < N)
	{
		b[(N - i) % N] = a[i];
		i++;
	}
	flipАrray(b, N);
}

int main()
{
	srand(time(0));
	int const N = 10;
	int a[N], b[N];
	randomArray(a, N);
	shiftLeftArray(a, N, b);
	shiftLeftArray(a, N, b);
	system("pause");
}