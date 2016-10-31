//Массив целых чисел размера N проинициализировать последовательными числами от 1 до N. "Перетусовать" элементы массива двумя способами, предложенными на паре: с использованием доп.массива и просто меняя местами случайные элементы.
#include <iostream>
#include <ctime>
#include <clocale>

using namespace std;


void putArray(int A[], int const N)
{
	int i = 0;
	while (i < N)
	{
		A[i] = i;
		i++;
	}
}

void swapArray1(int A[], int const N)
{
	int i = 0;
	while (i < N)
	{
		swap(A[i],A[rand() % N]);
		i++;
	}
}

void swapArray2(int A[], int const N, int B[])
{
	int i = 0;
	while (i < N)
	{
		B[i] = rand() % N;
		swap(A[i], A[B[i]]);
		i++;
	}
}

int main()
{
	srand(time(0));
	int const N = 5;
	int A[N], B[N];
	putArray(A, N);
    swapArray1(A, N);
	swapArray2(A, N, B);
	system("pause");
}