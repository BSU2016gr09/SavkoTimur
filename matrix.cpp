#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include<ctime>

/*Доделать (учитывая мои комментарии в ваших репозиториях) свои проекты с дополнительной реализацией конструкторов, деструкторов
(в которых, просто выдается сообщение, что он сработал) и операций =, +,- тех простейших классов, которые вы делали к 6.04
В main() надо не только объявить 2-3 объекта вашего класса, но и сделать пару-тройку указателей на объеты!!!
Проинициализировать некоторые из них теми объетами, которые уже есть, а некоторые проинициализировать с помощью оператора, NEW.
После этого, в main выполнить пару-тройку действий с объектами и с указателями (присвоение, сумма, удаление...) чтобы показать, что все методы работают!*/

using namespace std;

class Matrix3x3 {
public:

	Matrix3x3() {//конструктор по умолчанию
		cout << "Constructor1 is working\n";
		for (int i = 0;i < 3;i++) {
			for (int j = 0;j < 3;j++)
				mat[i][j] = 0;
		}

	}

	~Matrix3x3() {//деструктор по умолчанию
		cout << "Destructor is working\n";system("pause");

	}

	//оператор присваивания
	Matrix3x3& operator =(Matrix3x3 &other) {
		cout << "Operator of equality is working\n";
		for (int i = 0;i < 3;i++) {
			for (int j = 0;j < 3;j++)
				mat[i][j] = other.mat[i][j];
		}
		return *this;
	}
	//оператор сложения
	Matrix3x3& operator +(Matrix3x3&addend) {
		cout << "Operator of addition is working\n";
		for (int i = 0;i < 3;i++) {
			for (int j = 0;j < 3;j++)
				mat[i][j] += addend.mat[i][j];
		}
		return *this;
	}
	//оператор вычитания
	Matrix3x3& operator -(Matrix3x3&subtrahend) {
		cout << "Operator of substraction is working\n";
		for (int i = 0;i < 3;i++) {
			for (int j = 0;j < 3;j++)
				mat[i][j] -= subtrahend.mat[i][j];
		}
		return *this;
	}
//оператор умножения надо было бы!!!
	void enter() {
		for (int i = 0;i < 3;i++) {
			for (int j = 0;j < 3;j++)
				cin >> mat[i][j];
		}
	}
	void random() {

		for (int i = 0;i < 3;i++) {
			for (int j = 0;j < 3;j++)
				mat[i][j] = rand() % 100 - 50;
		}
	}

	void print() {
		for (int i = 0;i < 3;i++) {
			for (int j = 0;j < 3;j++)
				cout << setw(4) << mat[i][j] << setw(3);
			cout << endl;
		}
		cout << endl;
	}
private:
	double mat[3][3];

};
void giveMemory(Matrix3x3 * &tmp);
void delMem(Matrix3x3 * &tmp);

void main() {
	srand(time(0));
	cout << "MATRIX1\n";
	Matrix3x3 m1;
	m1.print();
	cout << endl << endl;
	cout << "MATRIX2\n";
	Matrix3x3 m2;
	m2.random();
	m2.print();
	cout << endl << endl;
	cout << "MATRIX3\n";
	Matrix3x3 m3;
	m3 = m2 + m1;
	m3.print();
	cout << endl << endl;
	cout << "MATRIX4\n";
	Matrix3x3 *m4 = &m1;
	m4->print();
	m4->random();
	m4->print();
	cout << endl << endl;
	cout << "MATRIX5\n";
	Matrix3x3 *m5;
	giveMemory(m5);
	*m5 = *m4 - m3;
	m5->print();
	delMem(m5);
	cout << endl << endl;
	system("pause");
}
void giveMemory(Matrix3x3 * &tmp) {
	try {
		tmp = new Matrix3x3;
	}
	catch (...) {
		cout << "Allocation fault\n";
		system("pause");
	}
}

void delMem(Matrix3x3 * &tmp) {
	delete tmp;
	tmp = nullptr;
}
