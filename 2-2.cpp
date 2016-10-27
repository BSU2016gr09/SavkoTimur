#include <iostream>
#include <ctime>
#include <clocale>

using namespace std;

void randomArray(int arr[], int const N)
{
	int i = 0;
	while (i < N)
	{
		arr[i] = (rand() % (2 * N + 1) - N);
		i++;
	}
}

void shiftArray(int arr[], int N)
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
	int const N=10;
	int arr[N];
	randomArray(arr, N);
	shiftArray(arr, N);
	system("pause");
}