#include <iostream>
#include <ctime>
#include <clocale>

using namespace std;

void initRandomRealArray(float arr[], int N)
{
	int i = 0;
	while (i < N)
	{
		arr[i] = (rand() % 1001 - 500) / 10.0;
		i++;
	}
	cout << endl;
}

void arraySeparation(float A[], float B[], float C[], int N , int &j , int &g)
{
	int i = 0;
	while (i < N) 
	{
		if (A[i] > 0) {
			B[j] = A[i]; j++;
		}
		else if (A[i] < 0) {
			C[g] = A[i]; g++;
		}
		i++;
	}
}

int main()
{
	srand(time(0));
	/*
	Объявить массив А вещественных чисел размера N (число N объявить как константу).
	Проинициализировать значения элементов массива случайными числами из промежутка от -50 до 50.
	"Разделить" массив А на два массива: положительные записать в массив В, отрицательные - в С.
	*/
	int const N = 10;
	float A[N], B[N], C[N];
	int j = 0, g = 0;
	initRandomRealArray(A, N);
	arraySeparation(A, B, C, N, j, g);
	system("pause");
}