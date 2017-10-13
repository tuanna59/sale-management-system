#pragma once
#include <iostream>
using namespace std;
class Person
{
protected:
	string id;
	string name;
	string phone;
	string address;
	string email;
public:

	void setName(string name) { this->name = name; }
	void setPhone(string phone) { this->phone = phone; }
	void setAddress(string address) { this->address = address; }
	void setId(string id) { this->id = id; }
	void setEmail(string email) { this->email = email; }

	string getName() { return this->name; }
	string getPhone() { return this->phone; }
	string getAddress() { return this->address; }
	string getId() { return this->id; }
	string getEmail() { return this->email; }
};

