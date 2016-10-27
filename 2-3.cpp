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