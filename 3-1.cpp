/*
Напишите игру в кости между человеком и компьютером. Они по очереди кидают по два кубика. Побеждает тот у кого сумма больше. Игра заканчивается если набрана сумма >50. Кубики рисуйте в отдельной ф-ции псевдографикой (см. рисунок в качестве примера).
+---+
| O |
| O |
| O |
+---+
*/
#include <iostream>
#include <ctime>

using namespace std;

void score(int dice1, int dice2, int &score)
{
	score += dice1 + dice2;
	cout << "Выпало " << dice1 + dice2 << " баллов" <<"\n\n" ;
}

void randomDice(int &dice1, int &dice2)
{
	dice1 = rand() % 6 + 1;
	dice2 = rand() % 6 + 1;
}

void printDice(int point)
{
	switch (point)
	{
	case 1:
		cout << "+-------+" << "\n";
		cout << "|       |" << "\n";
		cout << "|   O   |" << "\n";
		cout << "|       |" << "\n";
		cout << "+-------+" << "\n";
		break;
	case 2:
		cout << "+-------+" << "\n";
		cout << "|       |" << "\n";
		cout << "| O   O |" << "\n";
		cout << "|       |" << "\n";
		cout << "+-------+" << "\n";
		break;
	case 3:
		cout << "+-------+" << "\n";
		cout << "| O     |" << "\n";
		cout << "|   O   |" << "\n";
		cout << "|     O |" << "\n";
		cout << "+-------+" << "\n";
		break;
	case 4:
		cout << "+-------+" << "\n";
		cout << "| O   O |" << "\n";
		cout << "|       |" << "\n";
		cout << "| O   O |" << "\n";
		cout << "+-------+" << "\n";
		break;
	case 5:
		cout << "+-------+" << "\n";
		cout << "| O   O |" << "\n";
		cout << "|   O   |" << "\n";
		cout << "| O   O |" << "\n";
		cout << "+-------+" << "\n";
		break;
	case 6:
		cout << "+-------+" << "\n";
		cout << "| O   O |" << "\n";
		cout << "| O   O |" << "\n";
		cout << "| O   O |" << "\n";
		cout << "+-------+" << "\n";
		break;
	}
}

int main() 
{
	setlocale(LC_ALL, "RUS");
	srand(time(0));

	int dice1, dice2, yourscore = 0, compscore = 0;

	while ((yourscore < 50) && (compscore < 50)) 
	{
		cout << "Ваша очередь бросать кости \n";
		cout << "Нажмите ВВОД чтобы бросить кости";
		getchar();
		randomDice(dice1, dice2);
		printDice(dice1); printDice(dice2);
		score(dice1, dice2, yourscore);
		cout << "Очередь компьютера бросать кости \n";
		randomDice(dice1, dice2);
		printDice(dice1); printDice(dice2);
		score(dice1, dice2, compscore);
		cout << "Ваши баллы:" << yourscore << "\n";
		cout << "Баллы компьютера:" << compscore << "\n\n";
	}

	if (yourscore < compscore) cout << "Вы проиграли \n"; else if (yourscore > compscore) cout << "Вы победили \n"; else cout << "Ничья \n";
	system("pause");
	
}