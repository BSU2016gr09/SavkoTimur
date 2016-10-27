//Массив чисел размера N проинициализировать случайными числами из промежутка от -N до N. Циклически сдвинуть элементы массива вправо на 1 элемент (последний элемент станет первым, 1-й станет 2-м, 2-й станет 3-м и т.д.) потом циклически сдвинуть элементы массива влево на 1 элемент (первый элемент станет последним, 2-й станет 1-м и т.д)
#include <iostream>
#include <ctime>
#include <clocale>

using namespace std;

void RandomArray(double arr[], int const N)
{
	int i = 0;
	while (i < N)
	{
		arr[i] = (rand() % (20 * N + 1) - N * 10)/10.0;
		i++;
	}
}


void shiftArray(double arr[], int N)
{
	int i = N - 1;
	while (i > 0)
	{
		swap(arr[i - 1], arr[i]);
		i--;
	}
}

int main()
{
	srand(time(0));
	int const N = 10;
	double arr[10];
	RandomArray(arr, N);
	shiftArray(arr, N);
	system("pause");
}