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
		cout << arr[i] << " ";
		i++;
	}
}

void printArrayOddOrEven(float arr[], int N)
{
	int i = 1;
	while (i < N)
	{
		cout << arr[i] << ' ';
		i += 2;
	}
	i = 0;
	while (i < N)
	{
		cout << arr[i] << ' ';
		i += 2;
	}
}

int main()
{
	/*
	�������� ������ ������������ ����� ������� N (����� N �������� ��� ���������).
	������������������� �������� ��������� ������� ���������� ������� �� ���������� �� -50 �� 50.
	������� �������� ������� ��������� � ��������� �������������� (1-�, 3-�, 5-�,...) � ����� - � �������.
	*/
	srand(time(0));
	int const N = 10;
	float arr[N];
	initRandomRealArray(arr, N);
	printArrayOddOrEven(arr, N);
	system("pause");
}