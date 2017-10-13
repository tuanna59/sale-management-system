#include "stdafx.h"

Customer::Customer(string s)
{
	this->id = GlobalFunction::split(s, 0);
	this->fname = GlobalFunction::split(s, 1);
	this->name = GlobalFunction::split(s, 2);
	this->sex = GlobalFunction::split(s, 3);
	this->phone = GlobalFunction::split(s, 4);
	this->email = GlobalFunction::split(s, 5);
	this->address = GlobalFunction::split(s, 6);
}

ostream &operator <<(ostream &os, Customer &obj) {
	os << obj.getId().append("|" + obj.getFname() + "|" + obj.getName() + "|" + obj.getSex() + "|" + obj.getPhone() + "|" + obj.getEmail() + "|" + obj.getAddress());
	return os;
}
