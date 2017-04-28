#include "Person.h"

Person::Person(string first_name, string name, int age, int Person_id)
{
	this->FirstName = first_name;
	this->name = name;
	this->age = age;
	this->Person_id = Person_id;
	++Person::p_amount;
}

void Person::setFirstName(string FirstName)
{
	this->FirstName = FirstName;
}

string Person::getFirstName()
{
	return FirstName;
}




void Person::show_p_amount(Person &, int p_amount)
{
}

void Person::attach_book_to_Person(Person &, book &, int Person_id, int book_id, int Person_id1, int book_id1)
{
}

std::ostream& operator<<(std::ostream& ostr, const Person& obj)
{
	ostr << obj.FirstName << "/n";
	//		ostr << 

	return ostr;
}