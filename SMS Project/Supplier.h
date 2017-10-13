#pragma once
#include "stdafx.h"
#include "Person.h"

class Supplier:public Person
{
private:
	
public:
	Supplier(string s="");
	friend ostream &operator <<(ostream &os, Supplier &s);
};
