#pragma once
#include <string>
#include "Person.h"
#include <vector>
using namespace std;
class Book
{
private:
	string AuthorFirstName;
	string AuthorName;
	string BookTitle;
	int Number;
	int Year;
	int BookId;
	int PersonId;
//	vector <Book> bk1;
	//bool Wypozyczona;
	//int IdPersonWyp;
public:
	static int bAmount;

	Book(string, string, string, int, int, int);
	void setAuthorFirstName(string);
	void setAuthorName(string);
	void setBookTitle(string);
	void setNumber(int);
	void setYear(int);
	void setBookId(int);
	string getAuthorFirstName();
	string getAuthorName();
	string getBookTitle();
	int getNumber();
	int getYear();
	int getBookId();
	Book() : Number(0), Year(0), BookId(0) //Wypozyczona(false), IdPersonWyp(-1)
	{
		string AuthorFirstName = "";
		string AuthorName = "";
		string Booktitle = "";
		//int Number = 0;
		//int Year = 0;
		//int BookId = 0;
	};
	virtual ~Book()
	{
		--Book::bAmount;
	};
	friend std::ostream& operator<<(std::ostream& ostr, const Book& bk);
	friend std::istream& operator>>(std::istream& is, Book& bk);
//	void addBook(Book& bk);
//	void showBook(vector<Book> bk1);
	void AttachBook(Book bk, Person& ppl, Book bk1, Person ppl1);
};