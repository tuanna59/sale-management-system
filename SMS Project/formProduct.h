#pragma once
#include "stdafx.h"
namespace SMSProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for formProduct
	/// </summary>
	public ref class formProduct : public System::Windows::Forms::Form
	{
	public:
		GlobalFunction *handling = new GlobalFunction();
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	public:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::DataGridViewButtonColumn^  Column6;
	private: System::Windows::Forms::DataGridViewButtonColumn^  Column7;

	public:







	public:






	private: System::Windows::Forms::Button^  bt_AdvancedSearch;
	public:
		formProduct(void)
		{
			InitializeComponent();
			handling->showToDataGridView(table_Product, "products.txt");
			handling->addItemInCb(cbBoxSuID, 0, "suppliers.txt");
			StartPosition = FormStartPosition::CenterScreen;
			this->AcceptButton = bt_Add;

			this->table_Product->RowsDefaultCellStyle->BackColor = Color::LightBlue;
			this->table_Product->AlternatingRowsDefaultCellStyle->BackColor = Color::AliceBlue;
			this->table_Product->SelectionMode = DataGridViewSelectionMode::FullRowSelect;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~formProduct()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lb_Title;
	private: System::Windows::Forms::DataGridView^  table_Product;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  bt_Reset;
	private: System::Windows::Forms::Button^  bt_Add;
	private: System::Windows::Forms::TextBox^  txtBoxUnit;
	private: System::Windows::Forms::ComboBox^  cbBoxSuID;
	private: System::Windows::Forms::TextBox^  txtBoxName;
	private: System::Windows::Forms::Label^  lb_Note;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  lb_Name;
	private: System::Windows::Forms::TextBox^  txtBoxID;
	private: System::Windows::Forms::Label^  lb_ID;
	private: System::Windows::Forms::RichTextBox^  txtBoxNote;
	private: System::Windows::Forms::TextBox^  txtBoxSuInfo;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::TextBox^  txtBoxSearch;
	private: System::Windows::Forms::Button^  bt_Cancel;
	private: System::Windows::Forms::Button^  bt_Edit;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(formProduct::typeid));
			this->lb_Title = (gcnew System::Windows::Forms::Label());
			this->table_Product = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->bt_Cancel = (gcnew System::Windows::Forms::Button());
			this->txtBoxSuInfo = (gcnew System::Windows::Forms::TextBox());
			this->bt_Edit = (gcnew System::Windows::Forms::Button());
			this->txtBoxNote = (gcnew System::Windows::Forms::RichTextBox());
			this->txtBoxUnit = (gcnew System::Windows::Forms::TextBox());
			this->cbBoxSuID = (gcnew System::Windows::Forms::ComboBox());
			this->txtBoxName = (gcnew System::Windows::Forms::TextBox());
			this->lb_Note = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->lb_Name = (gcnew System::Windows::Forms::Label());
			this->txtBoxID = (gcnew System::Windows::Forms::TextBox());
			this->lb_ID = (gcnew System::Windows::Forms::Label());
			this->bt_Reset = (gcnew System::Windows::Forms::Button());
			this->bt_Add = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->bt_AdvancedSearch = (gcnew System::Windows::Forms::Button());
			this->txtBoxSearch = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table_Product))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// lb_Title
			// 
			this->lb_Title->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold));
			this->lb_Title->Location = System::Drawing::Point(0, -1);
			this->lb_Title->Name = L"lb_Title";
			this->lb_Title->Size = System::Drawing::Size(882, 41);
			this->lb_Title->TabIndex = 2;
			this->lb_Title->Text = L"Product Management";
			this->lb_Title->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// table_Product
			// 
			this->table_Product->AllowUserToAddRows = false;
			this->table_Product->AllowUserToDeleteRows = false;
			this->table_Product->AllowUserToResizeColumns = false;
			this->table_Product->AllowUserToResizeRows = false;
			this->table_Product->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->table_Product->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7
			});
			this->table_Product->Location = System::Drawing::Point(253, 43);
			this->table_Product->Name = L"table_Product";
			this->table_Product->ReadOnly = true;
			this->table_Product->RowHeadersWidth = 24;
			this->table_Product->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->table_Product->Size = System::Drawing::Size(619, 367);
			this->table_Product->TabIndex = 3;
			this->table_Product->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &formProduct::table_Product_CellClick);
			this->table_Product->CellFormatting += gcnew System::Windows::Forms::DataGridViewCellFormattingEventHandler(this, &formProduct::dataGridView1_CellFormatting);
			this->table_Product->CurrentCellChanged += gcnew System::EventHandler(this, &formProduct::table_Product_CurrentCellChanged);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"ID";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 48;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Name";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 120;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Supplier ID";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 83;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Unit";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			this->Column4->Width = 50;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Note";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			this->Column5->Width = 190;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Edit";
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			this->Column6->Width = 30;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Remove";
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			this->Column7->Width = 55;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->bt_Cancel);
			this->groupBox1->Controls->Add(this->txtBoxSuInfo);
			this->groupBox1->Controls->Add(this->bt_Edit);
			this->groupBox1->Controls->Add(this->txtBoxNote);
			this->groupBox1->Controls->Add(this->txtBoxUnit);
			this->groupBox1->Controls->Add(this->cbBoxSuID);
			this->groupBox1->Controls->Add(this->txtBoxName);
			this->groupBox1->Controls->Add(this->lb_Note);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->lb_Name);
			this->groupBox1->Controls->Add(this->txtBoxID);
			this->groupBox1->Controls->Add(this->lb_ID);
			this->groupBox1->Controls->Add(this->bt_Reset);
			this->groupBox1->Controls->Add(this->bt_Add);
			this->groupBox1->Location = System::Drawing::Point(13, 37);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(227, 298);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Add Product";
			// 
			// bt_Cancel
			// 
			this->bt_Cancel->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bt_Cancel.Image")));
			this->bt_Cancel->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bt_Cancel->Location = System::Drawing::Point(123, 268);
			this->bt_Cancel->Name = L"bt_Cancel";
			this->bt_Cancel->Size = System::Drawing::Size(60, 23);
			this->bt_Cancel->TabIndex = 7;
			this->bt_Cancel->Text = L"Cancel";
			this->bt_Cancel->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->bt_Cancel->UseVisualStyleBackColor = true;
			this->bt_Cancel->Visible = false;
			this->bt_Cancel->Click += gcnew System::EventHandler(this, &formProduct::bt_Cancel_Click);
			// 
			// txtBoxSuInfo
			// 
			this->txtBoxSuInfo->Location = System::Drawing::Point(72, 108);
			this->txtBoxSuInfo->Name = L"txtBoxSuInfo";
			this->txtBoxSuInfo->ReadOnly = true;
			this->txtBoxSuInfo->Size = System::Drawing::Size(142, 20);
			this->txtBoxSuInfo->TabIndex = 33;
			this->txtBoxSuInfo->TabStop = false;
			// 
			// bt_Edit
			// 
			this->bt_Edit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bt_Edit.Image")));
			this->bt_Edit->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bt_Edit->Location = System::Drawing::Point(32, 268);
			this->bt_Edit->Name = L"bt_Edit";
			this->bt_Edit->Size = System::Drawing::Size(58, 23);
			this->bt_Edit->TabIndex = 6;
			this->bt_Edit->Text = L"Edit";
			this->bt_Edit->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->bt_Edit->UseVisualStyleBackColor = true;
			this->bt_Edit->Visible = false;
			this->bt_Edit->Click += gcnew System::EventHandler(this, &formProduct::bt_Edit_Click);
			// 
			// txtBoxNote
			// 
			this->txtBoxNote->Location = System::Drawing::Point(72, 165);
			this->txtBoxNote->Name = L"txtBoxNote";
			this->txtBoxNote->Size = System::Drawing::Size(142, 96);
			this->txtBoxNote->TabIndex = 5;
			this->txtBoxNote->Text = L"";
			// 
			// txtBoxUnit
			// 
			this->txtBoxUnit->Location = System::Drawing::Point(72, 135);
			this->txtBoxUnit->Name = L"txtBoxUnit";
			this->txtBoxUnit->Size = System::Drawing::Size(142, 20);
			this->txtBoxUnit->TabIndex = 4;
			// 
			// cbBoxSuID
			// 
			this->cbBoxSuID->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbBoxSuID->FormattingEnabled = true;
			this->cbBoxSuID->Location = System::Drawing::Point(72, 80);
			this->cbBoxSuID->Name = L"cbBoxSuID";
			this->cbBoxSuID->Size = System::Drawing::Size(142, 21);
			this->cbBoxSuID->TabIndex = 3;
			this->cbBoxSuID->SelectedIndexChanged += gcnew System::EventHandler(this, &formProduct::cbBoxSuID_SelectedIndexChanged);
			// 
			// txtBoxName
			// 
			this->txtBoxName->Location = System::Drawing::Point(72, 53);
			this->txtBoxName->Name = L"txtBoxName";
			this->txtBoxName->Size = System::Drawing::Size(142, 20);
			this->txtBoxName->TabIndex = 2;
			// 
			// lb_Note
			// 
			this->lb_Note->AutoSize = true;
			this->lb_Note->Location = System::Drawing::Point(10, 165);
			this->lb_Note->Name = L"lb_Note";
			this->lb_Note->Size = System::Drawing::Size(33, 13);
			this->lb_Note->TabIndex = 28;
			this->lb_Note->Text = L"Note:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(10, 137);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(29, 13);
			this->label4->TabIndex = 26;
			this->label4->Text = L"Unit:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(10, 83);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 13);
			this->label3->TabIndex = 24;
			this->label3->Text = L"Supplier ID:";
			// 
			// lb_Name
			// 
			this->lb_Name->AutoSize = true;
			this->lb_Name->Location = System::Drawing::Point(10, 53);
			this->lb_Name->Name = L"lb_Name";
			this->lb_Name->Size = System::Drawing::Size(38, 13);
			this->lb_Name->TabIndex = 22;
			this->lb_Name->Text = L"Name:";
			// 
			// txtBoxID
			// 
			this->txtBoxID->Location = System::Drawing::Point(72, 24);
			this->txtBoxID->Name = L"txtBoxID";
			this->txtBoxID->Size = System::Drawing::Size(142, 20);
			this->txtBoxID->TabIndex = 1;
			// 
			// lb_ID
			// 
			this->lb_ID->AutoSize = true;
			this->lb_ID->Location = System::Drawing::Point(10, 27);
			this->lb_ID->Name = L"lb_ID";
			this->lb_ID->Size = System::Drawing::Size(21, 13);
			this->lb_ID->TabIndex = 20;
			this->lb_ID->Text = L"ID:";
			// 
			// bt_Reset
			// 
			this->bt_Reset->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bt_Reset.Image")));
			this->bt_Reset->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bt_Reset->Location = System::Drawing::Point(123, 269);
			this->bt_Reset->Name = L"bt_Reset";
			this->bt_Reset->Size = System::Drawing::Size(60, 23);
			this->bt_Reset->TabIndex = 7;
			this->bt_Reset->Text = L"Reset";
			this->bt_Reset->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->bt_Reset->UseVisualStyleBackColor = true;
			this->bt_Reset->Click += gcnew System::EventHandler(this, &formProduct::bt_Reset_Click);
			// 
			// bt_Add
			// 
			this->bt_Add->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bt_Add.Image")));
			this->bt_Add->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bt_Add->Location = System::Drawing::Point(32, 269);
			this->bt_Add->Name = L"bt_Add";
			this->bt_Add->Size = System::Drawing::Size(58, 23);
			this->bt_Add->TabIndex = 6;
			this->bt_Add->Text = L"Add";
			this->bt_Add->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->bt_Add->UseVisualStyleBackColor = true;
			this->bt_Add->Click += gcnew System::EventHandler(this, &formProduct::bt_Add_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->bt_AdvancedSearch);
			this->groupBox2->Controls->Add(this->txtBoxSearch);
			this->groupBox2->Location = System::Drawing::Point(13, 341);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(227, 69);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Quick Search";
			// 
			// bt_AdvancedSearch
			// 
			this->bt_AdvancedSearch->Location = System::Drawing::Point(6, 46);
			this->bt_AdvancedSearch->Name = L"bt_AdvancedSearch";
			this->bt_AdvancedSearch->Size = System::Drawing::Size(215, 23);
			this->bt_AdvancedSearch->TabIndex = 35;
			this->bt_AdvancedSearch->Text = L"Advanced Search";
			this->bt_AdvancedSearch->UseVisualStyleBackColor = true;
			this->bt_AdvancedSearch->Click += gcnew System::EventHandler(this, &formProduct::bt_AdvancedSearch_Click);
			// 
			// txtBoxSearch
			// 
			this->txtBoxSearch->Location = System::Drawing::Point(6, 21);
			this->txtBoxSearch->Name = L"txtBoxSearch";
			this->txtBoxSearch->Size = System::Drawing::Size(215, 20);
			this->txtBoxSearch->TabIndex = 1;
			this->txtBoxSearch->TextChanged += gcnew System::EventHandler(this, &formProduct::txtBoxSearch_TextChanged);
			// 
			// formProduct
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::AliceBlue;
			this->ClientSize = System::Drawing::Size(884, 422);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->table_Product);
			this->Controls->Add(this->lb_Title);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"formProduct";
			this->Text = L"Product";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table_Product))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	// Get value from textbox, then convert to cstring
	private: string getStringFromAllTextBox() {
		String ^tmp;
		tmp = txtBoxID->Text + "|" + txtBoxName->Text + "|" + cbBoxSuID->Text + "|" + txtBoxUnit->Text + "|" + txtBoxNote->Text;
		return handling->MarshalString(tmp);
	}

	// Check Input
	private: bool checkInput(string str, int i) {
		if (txtBoxID->Text == "" || txtBoxName->Text == "" || cbBoxSuID->Text == "" || txtBoxUnit->Text == "")
		{
			MessageBox::Show("Please Fill All TextBox", "Input is INVALID!!!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return false;
		}
		if (i == 1)
		{
			if (!handling->checkID(table_Product, GlobalFunction::split(str, 0)))
				return false;
		}
		return true;
	}

	// Add button's Event
	private: System::Void bt_Add_Click(System::Object^  sender, System::EventArgs^  e) {
		string str = getStringFromAllTextBox();

		if (checkInput(str,1))
		{
			Template<Product> *arr = new Template<Product>();
			arr->addAndWrite("products.txt", str);

			table_Product->Rows->Add(txtBoxID->Text, txtBoxName->Text, cbBoxSuID->Text, txtBoxUnit->Text, txtBoxNote->Text);
			bt_Reset_Click(sender, e);
		}
	}
	
	// Reset button's Event
	private: System::Void bt_Reset_Click(System::Object^  sender, System::EventArgs^  e) {
		txtBoxID->Clear();	txtBoxName->Clear();	cbBoxSuID->ResetText();
		txtBoxUnit->Clear();	txtBoxSuInfo->Clear();	txtBoxNote->Clear();
	}

	// Edit button's Event
	private: System::Void bt_Edit_Click(System::Object^  sender, System::EventArgs^  e) {
		string str = getStringFromAllTextBox();
		if (checkInput(str,0))
		{
			Template<Product> *arr = new Template<Product>();
			arr->edit(table_Product->CurrentRow->Index, str, "products.txt");

			table_Product->CurrentRow->SetValues(txtBoxID->Text, txtBoxName->Text, cbBoxSuID->Text, txtBoxUnit->Text, txtBoxNote->Text);
			bt_Cancel_Click(sender, e);
		}
	}

	// Cancel button's Event
	private: System::Void bt_Cancel_Click(System::Object^  sender, System::EventArgs^  e) {
		bt_Reset_Click(sender, e);
		bt_Add->Visible = true;
		bt_Reset->Visible = true;
		this->bt_Cancel->Visible = false;
		this->bt_Edit->Visible = false;
		txtBoxID->ReadOnly = false;
	}
	
	// Add Item to Combobox Supplier ID
	private: System::Void cbBoxSuID_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		handling->getInfoFromKey(cbBoxSuID, txtBoxSuInfo, 0, 1, "suppliers.txt");
	}

	// Add Edit and Remove button to Table
	private: System::Void dataGridView1_CellFormatting(System::Object^  sender, System::Windows::Forms::DataGridViewCellFormattingEventArgs^  e) {
		table_Product->Rows[e->RowIndex]->Cells[5]->Value = "Edit";
		table_Product->Rows[e->RowIndex]->Cells[6]->Value = "Remove";
	}

	// Edit and Remove button (table) 's Event
	private: System::Void table_Product_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		if (e->ColumnIndex == 5) // The index of Edit button is 5
		{
			txtBoxID->Text = table_Product->Rows[e->RowIndex]->Cells[0]->Value->ToString();
			txtBoxName->Text = table_Product->Rows[e->RowIndex]->Cells[1]->Value->ToString();
			cbBoxSuID->Text = table_Product->Rows[e->RowIndex]->Cells[2]->Value->ToString();
			txtBoxUnit->Text = table_Product->Rows[e->RowIndex]->Cells[3]->Value->ToString();
			txtBoxNote->Text = table_Product->Rows[e->RowIndex]->Cells[4]->Value->ToString();
			txtBoxID->ReadOnly = true;

			bt_Add->Visible = false;
			bt_Reset->Visible = false;
			this->bt_Cancel->Visible = true;
			this->bt_Edit->Visible = true;
		}
		else if (e->ColumnIndex == 6) // The index of Remove button is 6
		{
			if (bt_Edit->Visible == false)
			{
				if (MessageBox::Show("Do you want to delete this ? ", "Warning!!!", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
				{
					handling->removeFromDataGridView(table_Product);
					Template<Product> *arr = new Template<Product>();
					arr->removeAndWrite(e->RowIndex, "products.txt");
				}
			}
			else
				MessageBox::Show("Remove is not available when Edit is Enabling", "Function Not Available", MessageBoxButtons::OK, MessageBoxIcon::Hand);
		}
	}

	private: System::Void table_Product_CurrentCellChanged(System::Object^  sender, System::EventArgs^  e) {
		bt_Cancel_Click(sender, e);
	}

	// TextBox Search's Event
	private: System::Void txtBoxSearch_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		handling->searchFromTextbox(table_Product, 1, txtBoxSearch);
	}

	// Advanced Search button
	private: System::Void bt_AdvancedSearch_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		formSearch^ form = gcnew formSearch();
		form->ShowDialog();
		this->Show();
	}
};
}
