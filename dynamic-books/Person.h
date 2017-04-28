#pragma once
#include <iostream>
#include <string>
#include "Book.h"
using namespace std;
class Person
{
private:
	string FirstName;
	string name;
	int age;
	int person_id;
	static int pAmount;
public:
//	Person();
	Person(string, string, int, int);

	string getFirstName();
	void setFirstName(string);

	virtual ~Person()
	{
		--Person::pAmount;
	};

	friend std::ostream& operator<<(std::ostream& ostr, const Person& obj);

	void show_p_amount(Person&, int p_amount);
	void attach_book_to_person(Person&, book&, int person_id, int book_id, int person_id1, int book_id1);
};
