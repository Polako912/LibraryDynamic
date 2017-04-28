#include "Book.h"

void book::add_books( int b_amount)
{
	cout << "Podaj imie autora ksiazki: " << endl;
	cin >> author_first_name;
	cout << "Podaj nazwisko autora ksiazki: " << endl;
	cin >> author_name;
	cout << "Podaj tytul ksizaki: " << endl;
	cin >> book_title;
	cout << "Podaj rok wydania ksziaki: " << endl;
	cin >> year;
	cout << "Podaj numer wydania ksziaki: " << endl;
	cin >> number;
	number = b_amount;
}

void book::show_books(int b_amount)
{
	cout << "Imie autora ksizaki: " << author_first_name << endl;
	cout << "Nazwisko autora ksiazki: " << author_name<< endl;
	cout << "Tytul ksiazki: " << book_title << endl;
	cout << "Rok wydania: " << year << endl;
	cout << "Numer wydania :" << number << endl;
}
