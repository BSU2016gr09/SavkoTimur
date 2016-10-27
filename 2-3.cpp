//Массив А целых чисел размера N проинициализировать случайными числами из промежутка от -N до N. Не используя функции из задачи 2-2 Написать функции циклического сдвига элементов массива вправо на k элементов (1-й станет 1+k -ым, 2-й станет 2+k -ым и т.д.) и влево на k элементов. В main написать вызов этих функций для числа k, которое вводит пользователь. (k может быть в частности =0, тогда сдвига нет, k=1 - задача аналогично предыдущей 2-2.cpp и т.д)
#include <iostream>
#include <ctime>
#include <clocale>

using namespace std;

void randomArray(int arr[], int const N)
{
	int i = 0, k;
	while (i < N)
	{
		arr[i] = (N - (rand() % (2 * N)));
		i++;
	}
}

void shiftArray(int arr[], int N, int k)
{
	int j = 0;
	while (j < k)
	{
		int i = N - 1;
		while (i > 0)
		{
			swap(arr[i - 1], arr[i]);
			i--;
		}
		j++;
	}
}

int main()
{
	srand(time(0));
	int const N = 10;
	int arr[N], k;
	cin >> k;
	randomArray(arr, N);
	shiftArray(arr, N, k);
	system("pause");
}
