#include "Person.h"
#include <vector>
#include <iostream>


Person::Person(string FirstName, string Name, int Age, int PersonId): pAmount(0)
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

void Person::addBook()
{

	Book data;
	for (int i = 0; i < 10; i++)
		cin >> data;
	bk1.push_back(data);
	//istream operator>>(const istream& cin, const vector<Book>& bk);

}

void Person::showBook()
{
	for (int i = 0; i < 10; i++)
		cout << bk1[i];
	//Book data;
	//vector <Book> ::iterator bk0 = bk.begin();
	//for (; bk0 != bk.end(); bk0++)
	//cout << *bk0;
}

void Person::addPerson(Person& ppl)
{
	vector <Person> ppl1;
	Person info;
	for (int i = 0; i < 10; i++)
		cin >> info;
	ppl1.push_back(info);
}
void Person::showPerson(vector <Person> ppl1)
{
	for (int i = 0; i < 10; i++)
		cout << ppl1[i];
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