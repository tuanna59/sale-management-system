#include "Supplier.h"
#include "Person.h"
#include <string>

Supplier::Supplier(string s)
{
	this->id = GlobalFunction::split(s, 0);
	this->name = GlobalFunction::split(s, 1);
	this->phone = GlobalFunction::split(s, 2);
	this->email = GlobalFunction::split(s, 3);
	this->address = GlobalFunction::split(s, 4);
}

ostream &operator <<(ostream &os, Supplier &s) {
	os << s.getId().append("|" + s.getName() + "|" + s.getPhone() + "|" + s.getEmail() + "|" + s.getAddress());
	return os;
}