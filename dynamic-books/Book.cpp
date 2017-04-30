#include "Book.h"
#include "Person.h"
#include <vector>
#include <iostream>
using namespace std;

Book::Book(string AuthorFirstName, string AuthorName, string BookTitle, int Number, int Year, int BookId)
{
	this->AuthorFirstName = AuthorFirstName;
	this->AuthorName = AuthorName;
	this->BookTitle = BookTitle;
	this->Number = Number;
	this->Year = Year;
	this->BookId = BookId;
	++Book::bAmount;
}

void Book::setAuthorFirstName(string AuthorFirstName)
{
	this->AuthorFirstName = AuthorFirstName;
}
void Book::setAuthorName(string AuthorName)
{
	this->AuthorName = AuthorName;
}
void Book::setBookTitle(string BookTitle)
{
	this->BookTitle = BookTitle;
}
void Book::setNumber(int Number)
{
	this->Number = Number;
}
void Book::setYear (int Year)
{
	this->Year = Year;
}
void Book::setBookId (int BookId)
{
	this->BookId = BookId;
}
void Book::addBook(Book& bk)
{
	vector <Book> bk;
	for(int i=0; i<10; i++)
	//istream operator>>(const istream& cin, const vector<Book>& bk);
	cin >> bk;
}
void Book::showBook(Book& bk)
{
	for (int i = 0; i < bk.size(); i++)
		cout << bk << endl;
}
string Book::getAuthorFirstName()
{
	return AuthorFirstName;
}
string Book::getAuthorName()
{
	return AuthorName;
}
string Book::getBookTitle()
{
	return BookTitle;
}
int Book::getNumber()
{
	return Number;
}
int Book::getYear()
{
	return Year;
}
int Book::getBookId()
{
	return BookId;
}
std::ostream& operator<<(std::ostream& ostr, const Book& bk)
{
	ostr << bk.AuthorFirstName << "/n";
	ostr << bk.AuthorName << "/n";
	ostr << bk.BookTitle << "/n";
	ostr << bk.Number << "/n";
	ostr << bk.Year << "/n";
	ostr << bk.BookId << "/n";
	return ostr;
}
std::istream& operator>>(std::istream& is, Book& bk)
{
	is >> bk.AuthorFirstName;
	is >> bk.AuthorName;
	is >> bk.BookTitle;
	is >> bk.Number;
	is >> bk.Year;
	is >> bk.BookId;
	return is;
}

