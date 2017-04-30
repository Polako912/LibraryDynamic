#include "Person.h"

Person::Person(string FirstName, string Name, int Age, int PersonId)
{
	this->FirstName = FirstName;
	this->Name = Name;
	this->Age = Age;
	this->PersonId = PersonId;
	++Person::pAmount;
}

void Person::setFirstName(string FirstName)
{
	this->FirstName = FirstName;
}
void Person::setName(string Name)
{
	this-> Name = Name;
}
void Person::setAge(int Age)
{
	this->Age = Age;
}
void Person::setPersonId(int)
{
	this->PersonId = PersonId; 
}

string Person::getFirstName()
{
	return FirstName;
}
string Person::getName()
{
	return Name;
}
int Person::getAge()
{
	return Age;
}

int Person::getPersonId()
{
	return PersonId;
}

/*void Person::show_p_amount(Person &, int p_amount)
{
}

void Person::attach_book_to_Person(Person &, book &, int Person_id, int book_id, int Person_id1, int book_id1)
{
}*/

std::ostream& operator<<(std::ostream& ostr, const Person& ppl)
{
	ostr << ppl.FirstName << "/n";
	ostr << ppl.Name << "/n";
	ostr << ppl.Age << "/n";
	ostr << ppl.PersonId << "/n";
	return ostr;
}
std::istream& operator>>(std::istream& is, Person& ppl)
{
	is >> ppl.FirstName;
	is >> ppl.Name;
	is >> ppl.Age;
	is >> ppl.PersonId;
	return is;
}