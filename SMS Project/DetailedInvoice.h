#pragma once
#include "Invoice.h"
class DetailedInvoice:public Invoice
{
private:
	string dynamicName, productID, productName, quantity, cost;
public:
	DetailedInvoice(string s="");
	friend ostream &operator <<(ostream &os, DetailedInvoice &s);

	void setDName(string dynamicName) { this->dynamicName = dynamicName; }
	void setProductID(string productID) { this->productID = productID; }
	void setProductName(string productName) { this->productName = productName; }
	void setCost(string cost) { this->cost = cost; }
	void setQuantity(string quantity) { this->quantity = quantity; }

	string getDName() { return this->dynamicName; }
	string getProductID() { return this->productID; }
	string getProductName() { return this->productName; }
	string getCost() { return this->cost; }
	string getQuantity() { return this->quantity; }
};

