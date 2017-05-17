#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>

//ассортимент обуви

using namespace std;

class Shoes {
public:

	Shoes() {//конструктор по умолчанию
		*name = '\0';*art = '\0';
		size = 0;amount = 0;cost = 0;
	}


	Shoes(char*art, char*name) {
		size = 0;amount = 0;cost = 0;
		strcpy(this->art, art);
		strcpy(this->name, name);
	}
	Shoes(char*art, char*name, int size, int amount, int cost) {
		this->size = size;this->amount = amount;this->cost = cost;
		strcpy(this->art, art);
		strcpy(this->name, name);
	}


	~Shoes() {//деструктор по умолчанию
			  //cout << "Destructor is working\n";system("pause");
	}


	void setAll() {
		cout << "Type like this:\nArticle\nName\nSize amount cost\n";
		cin.getline(art, 5, '\n');
		cin.getline(name, 10, '\n');
		cin >> size >> amount >> cost;


	}
	void setSize() {
		cout << "Type size:\n";
		cin >> size;
	}

	void setAmount() {
		cout << "Type amount:\n";
		cin >> amount;
	}
	void setCost() {
		cout << "Type cost:\n";
		cin >> cost;
	}

	int getSize() {
		return size;
	}

	int getAmount() {
		return amount;
	}
	int getCost() {
		return cost;
	}
	char*getArt() {
		return art;
	}
	char*getName() {
		return name;
	}
private:
	char art[5], name[10];
	int size, amount, cost;

};

void giveMemory(Shoes*arr, int size);
void delMem(Shoes*arr);
void printByArticle(Shoes*, char*, int);
void printBySize(Shoes*, int, int);
void main() {
	Shoes arr[10];
	int pairs;
	cout << "How many pairs do you want to enter?\n";
	cin >> pairs;
	if (pairs > 10) giveMemory(arr, pairs);
	for (int i = 0;i < pairs;i++) {
		cin.ignore();
		arr[i].setAll();
	}

	cout << "Man shoes:\n";
	printByArticle(arr, "M", pairs);
	cout << "40th size shoes:\n";
	printBySize(arr, 40, pairs);


	if (pairs > 10) delMem(arr);
	system("pause");
}
void giveMemory(Shoes * arr, int size) {
	try {
		arr = new Shoes[size];
	}
	catch (...) {
		cout << "Allocation fault\n";
		system("pause");
	}
}

void delMem(Shoes*arr) {
	delete arr;
	arr = nullptr;
}
void printByArticle(Shoes*arr, char*art, int size) {
	for (int i = 0;i < size;i++) {
		if (!strcmp(arr[i].getArt(), art)) cout << arr[i].getName() << endl;
	}
	cout << endl << endl;
}
void printBySize(Shoes*arr, int shoesSize, int size) {
	for (int i = 0;i < size;i++) {
		if (arr[i].getSize() == shoesSize) cout << arr[i].getArt() << endl << arr[i].getName() << endl
			<< "amount=" << arr[i].getAmount() << " cost=" << arr[i].getCost() << endl;
	}
	cout << endl << endl;
}
