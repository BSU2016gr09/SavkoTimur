#include <iostream>
#include <ctime>
#include <clocale>

using namespace std;

void initRandomRealArray(float arr[], int N)
{
	int i = 0;
	while (i < N)
	{
		arr[i] = (rand() % 1001 - 500) / 10.0;
		cout << arr[i] << " ";
		i++;
	}
}

void printArrayOddOrEven(float arr[], int N)
{
	int i = 1;
	while (i < N)
	{
		cout << arr[i] << ' ';
		i += 2;
	}
	i = 0;
	while (i < N)
	{
		cout << arr[i] << ' ';
		i += 2;
	}
}

int main()
{
	/*
	Îáúÿâèòü ìàññèâ âåùåñòâåííûõ ÷èñåë ðàçìåðà N (÷èñëî N îáúÿâèòü êàê êîíñòàíòó).
	Ïðîèíèöèàëèçèðîâàòü çíà÷åíèÿ ýëåìåíòîâ ìàññèâà ñëó÷àéíûìè ÷èñëàìè èç ïðîìåæóòêà îò -50 äî 50.
	Âûâåñòè çíà÷åíèÿ ñíà÷àëà ýëåìåíòîâ ñ íå÷åòíûìè êîýôôèöèåíòàìè (1-é, 3-é, 5-é,...) à çàòåì - ñ ÷åòíûìè.
	*/
	srand(time(0));
	int const N = 10;
	float arr[N];//натуральное???
	initRandomRealArray(arr, N);
	printArrayOddOrEven(arr, N);
	system("pause");
}
