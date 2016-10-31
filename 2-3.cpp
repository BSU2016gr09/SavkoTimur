// Массив А чисел размера N проинициализировать случайными числами из промежутка от -N до N. Не используя функции из задачи 2-2 Написать функции (без swap и аналогов) циклического сдвига элементов массива вправо на k элементов (1-й станет 1+k -ым, 2-й станет 2+k -ым и т.д.) и влево на k элементов. В main написать вызов этих функций для числа k, которое вводит пользователь. (k может быть в частности =0, тогда сдвига нет, k=1 - задача аналогично предыдущей 2-2.cpp и т.д) Надо придумать формулу вычисления нового индекса элемента чтобы обойтись одним циклом по массиву А., а не двумя вложенными циклами!
#include <iostream>
#include <ctime>
#include <clocale>

using namespace std;

void flipАrray(double a[], int const N)
{
	int i = 0, j = N - 1;
	while (i < N / 2)
	{
		swap(a[i], a[j]);
		i++;
		j--;
	}
}

void randomArray(double a[], int const N)
{
	int i = 0;
	while (i < N)
	{
		a[i] = (rand() % (20 * N + 1) - N*10)/10.0;
		i++;
	}
}

void shiftRightArray(double a[], int const N, double b[], int k)
{
	k = k % 10;
	int i = N - 1;
	while (i >= 0)
	{
		b[(i + k) % N] = a[i];
		i--;
	}
}

void shiftLeftArray(double a[], int const N, double b[], int k)
{
	k = k % 10;
	int i = 0;
	while (i < N)
	{
		b[(N - i + k - 1) % N] = a[i];
		i++;
	}
}

int main()
{
	srand(time(0));
	int const N = 10;
	double a[N], b[N];
	int k;
	cin >> k;
	randomArray(a, N);
	shiftLeftArray(a, N, b, k);
	shiftLeftArray(a, N, b, k);
	system("pause");
}
