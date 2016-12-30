// Найти в случайной матрице седловую точку если она там есть. Седловой точкой называется элемент матрицы который является минимумом в строке и максимумом в столбце. 
#include <iostream>

using namespace std;

int const N = 5, M = 5;

void findSaddle(int a[][N], int N)
{
	int i = 0, j = 0, flag=0;
	while (j < N)
	{
		while (a[i][j] > a[i][j + 1] && i < N)
		{
			if (a[i][j] > a[i][j + 1])
			{
				flag = 0;
				i++;
			}
			else
			{
				flag = 1;
				break;
			}
			if flag == 0 cout << i;
			j++;
		}
	}
}

void initMatrix(int A[][N], int N)
{
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)	cin >> A[i][j];
}

int main()
{
	setlocale(LC_ALL, "RUS");
	int A[N][N];
	initMatrix(A, N);
	cout << endl;
	findSaddle(A, N);
	system("pause");
}