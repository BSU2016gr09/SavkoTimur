//������ ����� ����� ������� N ������������������� ���������� ������� �� ���������� �� 1 �� N. "�����������" ������ (��������� ������� ������ ������, 1-� ������ ���������, 2-� ���������� � ������������� � �.�.) ����������� ��������� ������ ��������� N
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

	void flip�rray(int arr[], int const N)
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
	flip�rray(arr, N);
	system("pause");
}