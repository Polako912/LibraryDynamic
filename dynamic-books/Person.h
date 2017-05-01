#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Book.h"

using namespace std;

class Person
{
private:
	string FirstName;
	string Name;
	int Age;
	int PersonId;
	std::vector<Book> bk1;
//	Book* bk1;
public:
	int pAmount;
	Person(string, string, int, int);
	string getFirstName();
	string getName();
	int getAge();
	int getPersonId();
	void setFirstName(string);
	void setName(string);
	void setAge(int);
	void setPersonId(int);

	void addBook();
	void showBook();

	Person() : Age(0), PersonId(0)
	{ 
//		Book* bk1 = new Book[10];
		string FirstName = "";
		string Name = "";
		//int Age = 0;
		//int PersonId = 0;
	};
	virtual ~Person() 
	{
		--Person::pAmount;
	};
	friend std::ostream& operator<<(std::ostream& ostr, const Person& ppl);
	friend std::istream& operator>>(std::istream& is, Person& ppl);
	void addPerson(Person& ppl);
	void showPerson(Person ppl1);
};