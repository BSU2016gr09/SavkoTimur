// В матрице (n,m) найти те строки и вывести их номера, элементы которых образуют возрастающую последовательность.
#include <iostream>

using namespace std;

int const N = 5, M = 5;

void findAscendingLine(int A[][N], int N, int M)
{
	int i = 0;
	for (i; i < M; i++)
	{
		int flag = 0, j = 0;
		for (j; j < N - 1; j++)
		{
			if (A[i][j] > A[i][j + 1])
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0) cout << i + 1;
	}
}

void initMatrix(int A[][N], int N, int M)
{
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)	cin >> A[i][j];
}

int main()
{
	setlocale(LC_ALL, "RUS");
	int A[M][N];
	initMatrix(A, N, M);
	findAscendingLine(A, N, M);
	system("pause");
}