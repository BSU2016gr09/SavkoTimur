// Найти в случайной матрице минимум в каждом столбце. 
#include <iostream> 

using namespace std;

const int M = 5, N = 5;

void initMatrix(int A[][M], int N, int M)
{
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)	A[i][j] = rand() % 10 + 1;
}

void maxElement(int A[][M], int N, int M)
{
	int i, j;
	int min;
	for (j = 0;j < M;j++)
	{
		min = A[0][j];
		for (i = 1;i < N;i++)
			if (min > A[i][j]) min = A[i][j];
		cout << "Минимальный елемент в столбце " << j + 1 << "=" << min << endl;
	}
}

int main()
{
	setlocale(LC_ALL, "RUS");
	int A[N][M];
	initMatrix(A, N, M);
	maxElement(A, N, M);
	system("pause");
}