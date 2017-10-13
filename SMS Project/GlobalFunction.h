#pragma once
#include <iostream>
#include <fstream>
using namespace std;
using namespace System;
using namespace System::IO;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

class GlobalFunction
{
private:
	
public:
	
	void WriteDataGridViewToFile(DataGridView^ dg, String ^pathFile);

	// Split string
	static string split(string s, int x);
	
	// Display data from text file to DataGridView
	void showToDataGridView(DataGridView^ dg, String^ path);

	// Remove from DataGridView
	void removeFromDataGridView(DataGridView^ dg);

	// Add item to combobox
	void addItemInCb(ComboBox ^cb, int i, String ^path);
	void addItemInCb(ComboBox ^cb, ComboBox ^cb2, int i, int j, String ^path);

	// Get info to textbox from combobox
	void getInfoFromKey(ComboBox ^cb, TextBox ^txtBox, int i, int j, String ^path);

	// Search form Combobox
	void getInfoFromCbToDG(ComboBox ^cb, DataGridView ^dg, int  i, String ^path);

	// Search form textbox to Table
	void getInfoFromTboxToDG(TextBox ^txtBox, DataGridView ^dg, int  i, String ^path);

	// Search With Keyword From TextBox. Find in 1 or 2 fields
	void searchFromTextbox(DataGridView ^dg, int cell, TextBox ^txtBox);
	void searchFromTextbox(DataGridView ^dg, int cell1, int cell2, TextBox ^txtBox);

	// Linking 2 table
	void table_connected(DataGridView ^dg1, DataGridView ^dg2);
	
	//Convert String^ to string
	void MarshalString(String ^ s, string& os);
	string MarshalString(String ^ s);

	// Check Duplicated ID
	bool checkDuplicatedID(DataGridView ^ dg, string str);

	//Check Email
	bool checkEmail(string email);
	
	//Check ID
	bool checkID(DataGridView ^ dg, string str);

	// Check Number
	bool checkNumber(string str);
};

