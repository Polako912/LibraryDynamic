#include <iostream>
#include <cstdlib>
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
	Menu();
	system("pause");
	return 0;
}
