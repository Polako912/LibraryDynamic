#include <iostream>
#include <windows.h>
#include <conio.h>
#include <string>
#include "Book.h"
#include "Person.h"
#include "User.h"
using namespace std;
string Nick, Password;
int main()
{
	cout << "~~Ekran Logowania~~" << endl;
		cout << "Podaj Nick:" << endl;
		cin >> Nick;
		cout << "Podaj Haslo:" << endl;
		cin >> Password;
		if (Nick=="admin" && Password=="1234")
		{
			cout << "Zalogowano jako administrator";
		}
	system("cls");
	cout << "~~~~MENU~~~~" << endl;
	void Menu();
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
/*		if (pozycja == 1) void addBook(Book& bk) ;
		if (pozycja == 2) void addPerson(Person& ppl);
		if (pozycja == 3) void showBook(vector<Book> bk1);
		if (pozycja == 4) void showPerson(vector<Person> ppl1);
		if (pozycja == 5) void attachBokk(Book& bk, Person& ppl, vector<Book> bk1, vector<Person> ppl1);*/
		/*if (pozycja == 6);
		if (pozycja == 7);
		if (pozycja == 8);
		if (pozycja == 9);*/
	}
	system("pause");
	return 0;
}
