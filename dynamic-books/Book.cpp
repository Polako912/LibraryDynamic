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
/*void Book::addBook(Book& bk)
{
	
	Book data;
	for (int i = 0; i < 10; i++)
		cin >> data;
	bk1.push_back(data);
	//istream operator>>(const istream& cin, const vector<Book>& bk);

}*/
/*void Book::showBook(vector<Book> bk1)
{	
	for (int i = 0; i < 10; i++)
		cout << bk1[i];
	//Book data;
	//vector <Book> ::iterator bk0 = bk.begin();
	//for (; bk0 != bk.end(); bk0++)
		//cout << *bk0;
}*/
void Book::AttachBook(Book bk, Person& ppl, Book& bk1, Book ppl1)
{
	//przypisanie
	int numberppl, numberbk;
	for (int i=0; i<10; i++)
	{
		cout << "Podaj numer id ksiazki i osoby" << endl;
		cin >> numberppl;
		cin >> numberbk;
		if (numberppl == PersonId && numberbk == BookId)
			cout << ppl1[i];
			cout << bk1[i];
	}
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

