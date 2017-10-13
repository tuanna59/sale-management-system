#include "Product.h"

Product::Product(string s)
{
	this->id = GlobalFunction::split(s, 0);
	this->name = GlobalFunction::split(s, 1);
	this->supplierId = GlobalFunction::split(s, 2);
	this->unit = GlobalFunction::split(s, 3);
	this->note = GlobalFunction::split(s, 4);
}

ostream &operator <<(ostream &os, Product &obj) {
	os << obj.getID().append("|" + obj.getName() + "|" + obj.getSupplierId() + "|" + obj.getUnit() + "|" + obj.getNote());
	return os;
}
