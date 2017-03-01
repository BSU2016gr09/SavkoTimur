#include <iostream>
#include <time.h>

using namespace std;

void memoryAllocation(int* &arr, int N);
void memoryDeletion(int* &arr);
void arrayPrint(int* arr, int N);
void randomArr(int* arr, int N);
void randomArray(int* arr, int N);


int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "RUS");
	int N;
	cout << "Введите размер массива: ";
	cin >> N;
	int* arr;
	cout << "Введите первый элемент массива\n";
	cin >> arr[0];
	memoryAllocation(arr, N);
	randomArray(arr, N);
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

void arrayPrint(int* arr, int N)
{
	for (int i = 0; i < N; i++) cout << *(arr + i) << " ";
}

void randomArr(int* arr, int N) 
{
	for (int i = 1; i < N; i++) arr[i] = (4096 * arr[i - 1] + 150889) % 714025;
}

void randomArray(int* arr, int N) 
{
	for (int i = 1; i < N; i++) arr[i] = (8675 * arr[i - 1] + 22067) % 34700;
}