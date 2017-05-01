#include "User.h"
#include "Book.h"
//#include "Person.h"
//#include <windows.h>
//#include <conio.h>
#include <iostream>
using namespace std;
//Book bk;
//Person ppl;
void User::dziedziczna()
{
	cout << "Ta klasa dziedziczy z klasy User" << endl;
	cout << "W przyszlosci klsa Admin i Client beda mia³y inne mo¿liwosci w programie, np dodawanie i usuwanie osob" << endl;
	cout << "Zabrak³o mi czasu" << endl;
}
/*void Menu()
{
	auto pozycja = 1;
	char znak;
	do {

		system("cls");

		cout << " Wybierz zadanie do uruchomienia:" << endl;

		//pozycja 1
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		cout << " [1] ";
		if (pozycja == 1) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 240);
		cout << "Pozycja 1" << endl;

		//pozycja 2
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		cout << " [2] ";
		if (pozycja == 2) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 240);
		cout << "Pozycja 2" << endl;

		//pozycja 3
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		cout << " [3] ";
		if (pozycja == 3) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 240);
		cout << "Pozycja 3" << endl;

		//pozycja 4
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		cout << " [4] ";
		if (pozycja == 4) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 240);
		cout << "Pozycja 4" << endl;

		//pozycja 5
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		cout << " [5] ";
		if (pozycja == 5) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 240);
		cout << "Pozycja 5" << endl;

		//pozycja 6
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		cout << " [6] ";
		if (pozycja == 6) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 240);
		cout << "Pozycja 6" << endl;

		//pozycja 7
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		cout << " [7] ";
		if (pozycja == 7) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 240);
		cout << "Pozycja 7" << endl;

		//pozycja 8
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		cout << " [8] ";
		if (pozycja == 8) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 240);
		cout << "Pozycja 8" << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

		cout << endl;
		//pozycja 9 (wyjœcie z programu)
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		cout << " [0] ";
		if (pozycja == 9) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 240);
		cout << "Wyjdz z programu" << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

		znak = _getch();
		if (znak == 72 && pozycja > 1) pozycja--;
		if (znak == 80 && pozycja < 9) pozycja++;
	} while (znak != 13);

	// wywo³ywanie odpowiedniej funkcji zadania po naciœniêciu klaiwsza enter
	if (pozycja == 1) cout << ppl;
	if (pozycja == 2) cout << bk;
	if (pozycja == 3) cin >> ppl;
	if (pozycja == 4) cin >> bk;
	/*if (pozycja == 5); 
	if (pozycja == 6);
	if (pozycja == 7);
	if (pozycja == 8);
	if (pozycja == 9);
}*/