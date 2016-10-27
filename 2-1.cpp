//Массив целых чисел размера N проинициализировать случайными числами из промежутка от 1 до N. "Перевернуть" массив (последний элемент станет первым, 1-й станет последним, 2-й поменяется с предпоследним и т.д.) Внимательно проверьте случай нечетного N
#include <iostream>
#include <ctime>
#include <clocale>

using namespace std;

void initRandomArray(int arr[], int const N)
{
	int i = 0;
	while (i < N)
	{
		arr[i] = rand() % N;
		i++;
	}
}

	void flipАrray(int arr[], int const N)
	{
		int i = 0, j = N-1;
		while (i < N / 2)
		{
			swap(arr[i], arr[j]);
			i++;
			j--;
		}
	}

int main()
{
	srand(time(0));
	int const N=11;
	int arr[N];
	initRandomArray(arr, N);
	flipАrray(arr, N);
	system("pause");
}