#include "GlobalFunction.h"

void GlobalFunction::WriteDataGridViewToFile(DataGridView^ dg, String ^pathFile)
{
	StreamWriter ^sw = gcnew StreamWriter(pathFile);
	String ^Line = "";

	for (int i = 0; i < dg->Rows->Count; i++)
	{
		Line = "";
		for (int j = 0; j < dg->Columns->Count; j++)
		{
			Line += dg->Rows[i]->Cells[j]->Value + "|";
		}
		sw->WriteLine(Line);
	}
	sw->Close();
}

string GlobalFunction::split(string s, int x) {
	int start = 0, end = 0, count = 0, i = 0;
	while (i<s.length()) {
		start = end;
		if (s.at(i) == '|')
		{
			end = i + 1;
			count++;
		}
		i++;
		if (count>x) break;
	}
	if (x == 0)
	{
		cout << start << "  " << end << endl;
		return s.substr(start, end - 1);

	}
	if (end >= s.length())
		return s.substr(start, end);
	return s.substr(start, end - start - 1);
}

void GlobalFunction::showToDataGridView(DataGridView^ dg, String^ path)
{
	StreamReader ^reader = gcnew StreamReader(path);
	String^ Line = reader->ReadLine();
	while ((Line != nullptr) && (Line != " "))
	{
		cli::array<String^>^ mang = Line->Split('|');
		dg->Rows->Add(mang);
		Line = reader->ReadLine();
	}
	reader->Close();
}

void GlobalFunction::removeFromDataGridView(DataGridView^ dg)
{
	dg->Rows->Remove(dg->CurrentRow);
}

void GlobalFunction::addItemInCb(ComboBox ^cb, int i, String ^path)
{
	cb->Items->Clear();
	StreamReader ^reader = gcnew StreamReader(path);
	String ^Line = reader->ReadLine();
	while ((Line != nullptr) && (Line != " "))
	{
		cli::array<String^>^ mang = Line->Split('|');
		cb->Items->Add(mang[i]);
		Line = reader->ReadLine();
	}
	reader->Close();
}

void GlobalFunction::addItemInCb(ComboBox ^cb, ComboBox ^cb2, int i, int j, String ^path)
{
	cb->Items->Clear();
	StreamReader ^reader = gcnew StreamReader(path);
	String ^Line = reader->ReadLine();
	while ((Line != nullptr) && (Line != " "))
	{
		cli::array<String^>^ mang = Line->Split('|');
		if (mang[i] == cb2->Text)
			cb->Items->Add(mang[j]);
		Line = reader->ReadLine();
	}
	reader->Close();
}

void GlobalFunction::getInfoFromKey(ComboBox ^cb, TextBox ^txtBox, int  i, int j, String ^path)
{
	StreamReader ^reader = gcnew StreamReader(path);
	String ^Line = reader->ReadLine();
	while ((Line != nullptr) && (Line != " "))
	{
		cli::array<String^>^ mang = Line->Split('|');
		if (mang[i] == cb->Text)
			txtBox->Text = mang[j];
		Line = reader->ReadLine();
	}
	reader->Close();
}

void GlobalFunction::getInfoFromCbToDG(ComboBox ^cb, DataGridView ^dg, int  i, String ^path)
{
	StreamReader ^reader = gcnew StreamReader(path);
	String ^Line = reader->ReadLine();
	while ((Line != nullptr) && (Line != " "))
	{
		cli::array<String^>^ mang = Line->Split('|');
		if (mang[i] == cb->Text)
			dg->Rows->Add(mang);
		Line = reader->ReadLine();
	}
	reader->Close();
}

void GlobalFunction::getInfoFromTboxToDG(TextBox ^txtBox, DataGridView ^dg, int  i, String ^path)
{
	StreamReader ^reader = gcnew StreamReader(path);
	String ^Line = reader->ReadLine();
	while ((Line != nullptr) && (Line != " "))
	{
		cli::array<String^>^ mang = Line->Split('|');
		if (mang[i]->ToLower()->Trim()->Contains(txtBox->Text->ToLower()->Trim()))
			dg->Rows->Add(mang);
		Line = reader->ReadLine();
	}
	reader->Close();
}

void GlobalFunction::searchFromTextbox(DataGridView ^dg, int cell, TextBox ^txtBox)
{
	dg->ClearSelection();
	for (int i = 0; i < dg->RowCount; i++)
		if (dg->Rows[i]->Cells[cell]->Value->ToString()->ToLower()->Trim()->Contains(txtBox->Text->ToLower()->Trim()))
		{
			dg->FirstDisplayedScrollingRowIndex = i;
			dg->Rows[i]->Selected = true;
		}
}

void GlobalFunction::searchFromTextbox(DataGridView ^dg, int cell1, int cell2, TextBox ^txtBox)
{
	dg->ClearSelection();
	for (int i = 0; i < dg->RowCount; i++)
		if (dg->Rows[i]->Cells[cell1]->Value->ToString()->ToLower()->Trim()->Contains(txtBox->Text->ToLower()->Trim())
			|| dg->Rows[i]->Cells[cell2]->Value->ToString()->ToLower()->Trim()->Contains(txtBox->Text->ToLower()->Trim()))
		{
			dg->FirstDisplayedScrollingRowIndex = i;
			dg->Rows[i]->Selected = true;
		}
}

void GlobalFunction::table_connected(DataGridView ^dg1, DataGridView ^dg2)
{
	dg1->ClearSelection();
	for (int i = 0; i < dg1->RowCount; i++)
		if (dg1->Rows[i]->Cells[0]->Value->ToString()->ToLower()->Trim() == dg2->CurrentRow->Cells[0]->Value->ToString()->ToLower()->Trim())
		{
			dg1->FirstDisplayedScrollingRowIndex = i;
			dg1->Rows[i]->Selected = true;
			dg1->CurrentCell = dg1->Rows[i]->Cells[0];
		}
}

void GlobalFunction::MarshalString(String ^ s, string& os) {
	using namespace Runtime::InteropServices;
	const char* chars =
		(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
}

string GlobalFunction::MarshalString(String ^ s) {
	string os;
	using namespace Runtime::InteropServices;
	const char* chars =
		(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
	return os;
}

bool GlobalFunction::checkDuplicatedID(DataGridView ^ dg, string str)
{
	int d = 0;
	for (int i = 0; i < dg->RowCount; i++)
	{
		if (str == MarshalString(dg->Rows[i]->Cells[0]->Value->ToString()))
			return true;
	}
	return false;
}

bool GlobalFunction::checkID(DataGridView ^ dg, string str)
{
	if (checkDuplicatedID(dg,str))
	{
		MessageBox::Show("ID is Duplication. Please enter another ID", "Input is INVALID!!!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return false;
	}
	if (str.length() != 5)
	{
		MessageBox::Show("ID is invalid. Please enter ID such as ABxxx", "Input is INVALID!!!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return false;
	}
	for (int i = 0; i < 2; i++)
		if (str.at(i) < 'A' || str.at(i) > 'Z')
		{
			MessageBox::Show("ID is invalid. Please enter ID such as ABxxx", "Input is INVALID!!!", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return false;
		}
	for (int i = 2; i < 5; i++)
		if ((int)str.at(i) < 48 || (int)str.at(i) > 57)
		{
			MessageBox::Show("ID is invalid. Please enter ID such as ABxxx", "Error!!!", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return false;
		}
	return true;
}

bool GlobalFunction::checkEmail(string email)
{
	for (int i = 0; i < email.length(); i++)
	{
		if (email.at(i) == '@')
			return true;
	}
	return false;
}

bool GlobalFunction::checkNumber(string str)
{
	for (int i = 0; i<str.length(); i++)
		if (str.at(i) < '0' || str.at(i) > '9')
			return false;
	return true;
}