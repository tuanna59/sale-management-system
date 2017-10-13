#pragma once
#include "stdafx.h"
#include "Person.h"
class Customer:public Person
{
private:
	string fname;
	string sex;
public:
	Customer(string s="");
	friend ostream &operator <<(ostream &os, Customer &s);

	void setFname(string fname) { this->fname = fname; }
	string getFname() { return this->fname; }
	void setSex(string sex) { this->sex = sex; }
	string getSex() { return this->sex; }

};