#include "Invoice.h"

Invoice::Invoice(string s)
{
	this->id = GlobalFunction::split(s, 0);
	this->date = GlobalFunction::split(s, 1);
	this->customerID = GlobalFunction::split(s, 2);
	this->type = GlobalFunction::split(s, 3);
}

ostream &operator <<(ostream &os, Invoice &obj) {
	os << obj.getID().append("|" + obj.getDate() + "|" + obj.getCustomerID() + "|" + obj.getType());
	return os;
}