#include <iostream>
#include <time.h>

using namespace std;

void memoryAllocation(int* &arr, int N);
void memoryDeletion(int* &arr);
void arrayInput(int* arr, int N);
void arrayPrint(int* arr, int N);
void sortingArray(int* arr, int N);


int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "RUS");
	int N;
	cout << "Введите размер массива: ";
	cin >> N;
	int* arr;
	memoryAllocation(arr, N);
	arrayInput(arr, N);
	arrayPrint(arr, N);
	sortingArray(arr, N);
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

void sortingArray(int* arr, int N)
{
	int k;
	cout << "Введите номер элемента массива, с которого начинается сортировка: ";
	cin >> k;
	for (int i = k - 1; i < N - 1; i++)
		for (int j = k - 1; j < N - 1; j++)
		if (*(arr + j) > *(arr + j + 1)) swap(*(arr + j), *(arr + j + 1));
}
