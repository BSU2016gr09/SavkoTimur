// В массиве размера N, заполненного случ.числами от 0 до 10, подсчитать количество элементов, встречающихся более одного раза.
#include <iostream>
#include <ctime>

using namespace std;

void randomArray(int a[], int const N)
{
	int i = 0;
	while (i < N)
	{
		a[i] = rand() % 10 + 1;
		i++;
	}
}

void sortArray(int a[], int const N)
{
	int i = 0;
	while (i < N)
	{
		if (a[i + 1] > a[i])
		{
			int tmp = a[i]; 
			a[i] = a[i + 1];
			a[i + 1] = tmp;
			i = 0;
		}
		else i++;
	}
}

void checkReplays(int a[], int const N)
{
	int i = 0, sum = 0;
	while (i < N)
	{
		int j = i+1, repl = 1;
		while (a[i] == a[j])
		{
			repl++;
			j++;
		}
		if (repl > 1) sum++;
		i = j;	
	}
	cout << sum;
}

int main()
{
	srand(time(0));
	int const N = 10;
	int a[N];
	randomArray(a, N);
	sortArray(a, N);
	checkReplays(a, N);
	system("pause");
}