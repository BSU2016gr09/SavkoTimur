//Окончательно реализовать функции для работы стека на массиве. Сделать парные ф-ции push/pop для массива double и для массива char. Создать стек чисел и стек символов. Продемонстрировать их работоспособность вызывая их из main. В частности, показать, что стек не переполняется.
#include <iostream>
#include <clocale>
#include <ctime>
using namespace std;

int numberPush(double numberstack[], int &top, int number)
{
	numberstack[++top] = number;
	return top;
}

int numberPop(double numberstack[], int &top)
{
	return numberstack[top];
	top--;
}

int symbolPush(char symbolstack[], int &top, char symbol)
{
	symbolstack[++top] = symbol;
	return top;
}

int symbolPop(char symbolstack[], int &top)
{
	return symbolstack[top];
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