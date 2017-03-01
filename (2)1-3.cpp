#include <iostream>
#include <time.h>

using namespace std;

void memoryAllocation(int* &arr, int N);
void memoryDeletion(int* &arr);
void arrayInput(int* arr, int N);
void arrayPrint(int* arr, int N);
void inputArray(int* arr, int N);
void transpositionInteger(int* arr, int N);


int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "RUS");
	int N;
	cout << "Введите размер массива: ";
	cin >> N;
	int* arr;
	memoryAllocation(arr, N);
	inputArray(arr, N);
	transpositionInteger(arr, N);
	arrayPrint(arr, N);
	memoryDeletion(arr);
	system("pause");
}

void memoryAllocation(int* &arr, int N)
{
	try
	{
		arr = new int[N];
	}
	catch (...)
	{
		cout << "Память не выделилась";
		exit(0);
	}
}

void memoryDeletion(int* &arr)
{
	delete[] arr;
}

void arrayInput(int* arr, int N)
{
	for (int i = 0; i < N; i++)	*(arr + i) = rand() % N + 1;
}

void arrayPrint(int* arr, int N)
{
	for (int i = 0; i < N; i++) cout << *(arr + i) << " ";
}

void inputArray(int* arr, int N)
{
	int i = 0;
	while (i < N)
	{
		cin >> arr[i++];
	}
}

void transpositionInteger(int* arr, int N)
{
	for (int i = 0; i < N - 1; i++, N--)
		if (*(arr + i) > 0)
		{
			for (int j = i; j < N - 1; j++) swap(*(arr + j), *(arr + j + 1));
		}
	for (int i = 0; i < N; i++)
		for (int j = i; j < N; j++)
			if (*(arr + j) < *(arr + j + 1)) swap(*(arr + j), *(arr + j + 1));
}
