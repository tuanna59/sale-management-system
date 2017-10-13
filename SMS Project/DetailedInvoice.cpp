#include "DetailedInvoice.h"

DetailedInvoice::DetailedInvoice(string s)
{
	this->setID(GlobalFunction::split(s, 0));
	this->setDate(GlobalFunction::split(s, 1));
	this->setType(GlobalFunction::split(s, 2));
	this->dynamicName = GlobalFunction::split(s, 3);
	this->productID = GlobalFunction::split(s, 4);
	this->productName = GlobalFunction::split(s, 5);
	this->quantity = GlobalFunction::split(s, 6);
	this->cost = GlobalFunction::split(s, 7);
}

ostream &operator <<(ostream &os, DetailedInvoice &obj) {
	os << obj.getID() + "|" + obj.getDate() + "|" + obj.getType() + "|" + obj.getDName() + "|" + obj.getProductID() + "|" + obj.getProductName() + "|" + obj.getQuantity() + "|" + obj.getCost();
	return os;
}