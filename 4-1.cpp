#include <iostream>
#include <clocale>
#include <ctime>
void initA(int A[], int N);
void initA(int A[], int N, int k);
void printA(int A[], int N);
void inputArray(int A[], int N);
void printNumber(int A[], int N);
void sum(int A[], int B[], int Rez[], int N);
void dif(int A[], int B[], int Rez[], int N);
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	const int maxCount = 100;
	int A[maxCount], B[maxCount], Rez[maxCount];
	initA(A, maxCount);
	initA(B, maxCount);
	inputArray(A, maxCount);
	printNumber(A, maxCount);
	inputArray(B, maxCount);
	printNumber(B, maxCount);
	dif(A, B, Rez, maxCount);
	printNumber(Rez, maxCount);
	system("PAUSE");
}

void sum(int A[], int B[], int Rez[], int N)
{
	int i = 0;
	int t = 0;
	while (i < N)
	{
		Rez[i] = A[i] + B[i] + t;
		t = Rez[i] / 10;
		Rez[i] %= 10;
		i++;
	}
}

void dif(int A[], int B[], int Rez[], int N)
{
	int i = 0;
	int t = 0;
	while (i < N)
	{
		if (A[i] >= B[i]) Rez[i] = A[i] -B[i];
		else { A[i + 1] -= 1; A[i] += 10; Rez[i] = A[i] - B[i]; }
		i++;
    }
}

void Fib(int A[], int B[], int Rez[], int N)
{
	int i = 2;
	int t = 0;
	A[0] = 1;
	A[1] = 1;
	while (i < N)
	{
		A[i] = A[i - 1] + A[i - 2];
	}
}

void initA(int A[], int N)
{
	int i = 0;
	while (i < N) A[i++] = 0;
}

void initA(int A[], int N, int k)
{
	int i = 0;
	while (i < N) A[i++] = k;
}

void printA(int A[], int N)
{
	int i = 0;
	while (i<N) cout << A[i++] << " ";
}

void inputArray(int A[], int N)
{
	int k;
	N = N - 2;
	int i = 0;
	int top = 0;
	cout << "Введите цифры разрядов числа через пробел начиная с большего разряда \nДля завершения ввода введите цифру 99 \n";
	while (i <= top)
	{
		cin >> k;
		if (k < 10)
		{
			top++;
			A[i++] = k;
		}
		else top--;
	}
}
void printNumber(int A[], int N)
{
	int i = N - 1;

	while (i >= 0) cout << A[i--];
	cout << '\n';
}