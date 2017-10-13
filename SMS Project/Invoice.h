#pragma once
#include <iostream>
#include <string>
#include "GlobalFunction.h"
using namespace std;
class Invoice
{
private:
	string id, date, customerID, type;
public:
	Invoice(string s = "");
	friend ostream &operator <<(ostream &os, Invoice &s);

	void setID(string id) { this->id = id; }
	void setDate(string date) { this->date = date; }
	void setCustomerID(string customerID) { this->customerID = customerID; }
	void setType(string type) { this->type = type; }

	string getID() { return this->id; }
	string getDate() { return this->date; }
	string getCustomerID() { return this->customerID; }
	string getType() { return this->type; }
};

