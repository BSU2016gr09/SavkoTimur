// Транспонировать случайную квадратную матрицу (n,n)
#include <iostream>

using namespace std;

int const N = 5;

void findSaddle(int a[][N])
{
	for (int i = 0; i < N; i++) {
		int saddle = a[i][0], k = 0, flag = 0;
		for (int j = 1; j < n; j++)
			if (a[i][j] < saddle)
			{
				saddle = a[i][j];
				k = j;
			}
		for (int i = 0; i < N; i++)
			if (a[i][k] > saddle)
			{
				flag = 1;
				break;
			}
		if (flag == 0) cout << "Точка " << min << " является седловой точкой в столбце " << k + 1 << '\n';
	}
}

void initMatrix(int A[][N], int N)
{
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)	A[i][j] = rand() % 10 + 1;
}

void printMatrix(int A[][N], int N)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)	cout << A[i][j] << ' ';
		cout << "\n";
	}
}

int main()
{
	int A[N][N];
	initMatrix(A,N);
	printMatrix(A,N);
	cout << endl;
	trans(A,N);
	printMatrix(A,N);
	system("pause");
}