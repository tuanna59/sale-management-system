#pragma once
#include "stdafx.h";
class Product
{
private:
	string id, name, supplierId, unit, note;
public:
	Product(string s="");
	friend ostream &operator <<(ostream &os, Product &s);

	void setID(string id) { this->id = id; }
	void setName(string name) { this->name = name; }
	void setSupplierID(string supplierId) { this->supplierId = supplierId; }
	void setUnit(string unit) { this->unit = unit; }
	void setNote(string note) { this->note = note; }

	string getID() { return this->id; }
	string getName() { return this->name; }
	string getSupplierId() { return this->supplierId; }
	string getUnit() { return this->unit; }
	string getNote() { return this->note; }
};

