#pragma once
#include <iostream>
#include <string>
#include "Book.h"
using namespace std;
class Person
{
private:
	string FirstName;
	string Name;
	int Age;
	int PersonId;
public:
	static int pAmount;
    Person(): Age(0), PersonId(0)
    {
		string FirstName = "";
		string Name = "";
		int Age = 0;
		int PersonId = 0;
	};
	Person(string, string, int, int);
	string getFirstName();
	string getName();
	int getAge();
	int getPersonId();
	void setFirstName(string);
	void setName(string);
	void setAge(int);
	void setPersonId(int);

	virtual ~Person()
	{
		--Person::pAmount;
	};
	friend std::ostream& operator<<(std::ostream& ostr, const Person& obj);
	friend std::istream& operator>>(std::istream& is, Person& ppl);
	/*void show_p_amount(Person&, int p_amount);
	void attach_book_to_person(Person&, Book&, int person_id, int book_id, int person_id1, int book_id1);*/
};
