//Окончательно реализовать функции для работы стека на массиве. Сделать парные ф-ции push/pop для массива double и для массива char. Создать стек чисел и стек символов. Продемонстрировать их работоспособность вызывая их из main. В частности, показать, что стек не переполняется.
#include <iostream>
#include <clocale>
#include <ctime>
using namespace std;

void randomNumberStack(double stack[], int const N)
{
	int i = 0;
	while (i < N)
	{
		stack[i] = rand() % (200 + 1) / 10.0;
		i++;
	}
}

void randomSymbolStack(char stack[], int const N)
{
	int i = 0;
	while (i < N)
	{
		stack[i] = rand() % 256 + 1;
		i++;
	}
}

int numberPush(double stack[], int &top, int number)
{
	stack[++top] = number;
	return top;
}

int numberPop(double stack[], int &top)
{
	return stack[top];
	top--;
}

int symbolPush(char stack[], int &top, char symbol)
{
	stack[++top] = symbol;
	return top;
}

int symbolPop(char stack[], int &top)
{
	return stack[top];
	top--;
}

int stackEmpty(int top)
{
	if (top < 0)
	{
		cout << "Стэк пустой\n"; return 0;
	}
	else return 1;

}

int stackFull(int &top, int N)
{
	if (top > N)
	{
		top--; cout << "Стэк переполнен\n"; return 0;
		
	}
	else return 1;
}

int main() 
{
	// Не придумал как продемонстрировать работу стэка
	system("pause");
}