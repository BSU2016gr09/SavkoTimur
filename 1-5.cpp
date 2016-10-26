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
		i++;
	}
	cout << endl;
}
//Этот код я уже видел у Станкевича... Штраф 10 баллов
void arraySeparation(float A[], float B[], float C[], int N , int &j , int &g)
{
	int i = 0;
	while (i < N) 
	{
		if (A[i] > 0) {
			B[j] = A[i]; j++;
		}
		else if (A[i] < 0) {
			C[g] = A[i]; g++;
		}
		i++;
	}
}

int main()
{
	srand(time(0));
	/*
	Îáúÿâèòü ìàññèâ À âåùåñòâåííûõ ÷èñåë ðàçìåðà N (÷èñëî N îáúÿâèòü êàê êîíñòàíòó).
	Ïðîèíèöèàëèçèðîâàòü çíà÷åíèÿ ýëåìåíòîâ ìàññèâà ñëó÷àéíûìè ÷èñëàìè èç ïðîìåæóòêà îò -50 äî 50.
	"Ðàçäåëèòü" ìàññèâ À íà äâà ìàññèâà: ïîëîæèòåëüíûå çàïèñàòü â ìàññèâ Â, îòðèöàòåëüíûå - â Ñ.
	*/
	int const N = 10;
	float A[N], B[N], C[N];
	int j = 0, g = 0;
	initRandomRealArray(A, N);
	arraySeparation(A, B, C, N, j, g);
	system("pause");
}
