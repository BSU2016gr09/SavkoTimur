//������������ ����������� ������� ��� ������ ����� �� �������. ������� ������ �-��� push/pop ��� ������� double � ��� ������� char. ������� ���� ����� � ���� ��������. ������������������ �� ����������������� ������� �� �� main. � ���������, ��������, ��� ���� �� �������������.
#include <iostream>
#include <clocale>
#include <ctime>
using namespace std;

void randomNumberStack(int stack[], int const N, int &top)
{
	int i = 0;
	while (i < N)
	{
		stack[i] = rand() % 20+1;
		i++;
		top++;
	}
}

int numberPush(int stack[], int &top, int const N)
{
	int i = 0;
	int newel;
	int numnewel;
	cout << "������� ���������� ���������� ";
	cin >> numnewel;
	while (i < numnewel)
	{
			cout << "������� ����� ������� = ";
			cin >> newel;
			stack[top] = newel;
			i++;
			top++;
			if (top == N)
			{
				cout << "���� ����������" << endl;
				while (i < numnewel)
					i++;
			}
	}
	return top;
}

int numberPop(int stack[], int &top)
{
	int numdelel;
	if (top == 0) return top;
	else
	{
		cout << "������� ���������� �������� ";
		cin >> numdelel;
		top = top - numdelel;
		if (top < 0) top = 0;
		return stack[top];
	}
}	

void printArray(int arr[], int top)
{
	int i = 0;
	while (i < top)
	{
		cout << arr[i] << ' ';
		i++;
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int const N = 5;
	int stack[N]; int top = 0, k = N - 1;
	randomNumberStack(stack, N, top);
	printArray(stack, top);
	while (top <= N)
	{
			numberPop(stack, top);
			printArray(stack, top);
			numberPush(stack, top, N);
			printArray(stack, top);
	}
	system("pause");
}