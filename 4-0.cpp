//Построить график функции y=sin(2x)/x на промежутке [-6,6] с шагом 0.1
#include "iostream"
#include "iomanip" 
#include "cmath"

using namespace std;

#define PI 3.14 

int main()
{
	float coordinatex = -6, coordinatey;
	while (coordinatex <= 6)
	{
		if (coordinatex == 0) coordinatex = coordinatex + 5;
		coordinatey = (sin(2*coordinatex ) / coordinatex)*20; coordinatex = coordinatex + 0.1;
		cout << setw(40 + (coordinatey)) << setfill(' ') << '*' << "\n";

	}
	system("pause");
}
