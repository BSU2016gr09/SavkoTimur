// НЕ ТО ЗАДАНИЕ !!!!
#include <iostream>
#include <ctime>
#include <clocale>

using namespace std;

void sumOfNumbers(int n)
{
	int digit, sum = 0;
	while (n > 0)
	{
		digit = n % 10;
		n = n / 10;
		sum = sum + digit;
	}
	cout << sum << endl;
}

void checkNatural(double n)
{
	if (floor(n) == n && n > 0);
	else exit(1);
}

void printArray(int a[])
{
	int i = 0;
	while (i < 5)
	{
		cout << a[i] ;
		i++;
	}
	cout << endl;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	/*
	Ïîëüçîâàòåëü ââîäèò ñ êëàâèàòóðû ïÿòèçíà÷íîå íàòóðàëüíîå ÷èñëî, êîòîðîå ñîõðàíÿåòñÿ â ïåðåìåííóþ n,
	ïðîâåðèòü êîððåêòíîñòü ââîäà, ñîñòàâèòü è âûâåñòè íà ýêðàí ÷èñëî èç öèôð ââåä¸ííîãî ÷èñëà n, òàê,
	÷òîáû âûâåäåííîå ÷èñëî îêàçàëîñü ìàêñèìàëüíûì èç âîçìîæíûõ.
	*/
	int arr[5], i = 0;
	int n;
	cin >> n;
	checkNatural(n);
	decompositionNumbers(arr, n);
	sortArray(arr);
	printArray(arr);
	system("pause");
}
