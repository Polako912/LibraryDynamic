#pragma once
#include <iostream>
#include <string>
using namespace std;
class book
{
public:
	string author_first_name;
	string author_name;
	string book_title;
	int number;
	int year;
	int book_id;
	bool Wypozyczona;
	int IdPersonWyp;

	book() : number(0), year(0), book_id(0), Wypozyczona(false), IdPersonWyp(-1)
	{
	};
	~book()
	{
	};
	void add_books(book&, int b_amount);
	void add_books(int b_amount);
	void show_books(int b_amount);
};
