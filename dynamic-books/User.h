#pragma once
#include <string>
using namespace std;
class User
{
private:
	string Nick;
	string Password;
public:
	//void Menu();
	void dziedziczna();
};
class Admin

: public User
{ 
	void dziedziczna();
};
class Client
	: public User
{
	
};