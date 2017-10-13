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
	/// Summary for formCustomer
	/// </summary>
	public ref class formCustomer : public System::Windows::Forms::Form
	{
		GlobalFunction *handling = new GlobalFunction();
	
	public:			
		formCustomer(void)
		{
			InitializeComponent();
			handling->showToDataGridView(table_Customer, "customers.txt");
			StartPosition = FormStartPosition::CenterScreen;
			this->AcceptButton = bt_Add;

			this->table_Customer->RowsDefaultCellStyle->BackColor = Color::LightBlue;
			this->table_Customer->AlternatingRowsDefaultCellStyle->BackColor = Color::AliceBlue;
			this->table_Customer->SelectionMode = DataGridViewSelectionMode::FullRowSelect;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~formCustomer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lb_Title;
	private: System::Windows::Forms::DataGridView^  table_Customer;
	protected:

	private: System::Windows::Forms::Button^  bt_AdvancedSearch;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  lb_ID;
	private: System::Windows::Forms::TextBox^  txtBoxID;
	private: System::Windows::Forms::Button^  bt_Cancel;
	private: System::Windows::Forms::Button^  bt_Edit;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  txtBoxPhone;
	private: System::Windows::Forms::Label^  lb_Phone;
	private: System::Windows::Forms::TextBox^  txtBoxLname;
	private: System::Windows::Forms::Label^  lb_Lname;
	private: System::Windows::Forms::Label^  lb_Sex;
	private: System::Windows::Forms::TextBox^  txtBoxAddress;
	private: System::Windows::Forms::Label^  lb_Address;
	private: System::Windows::Forms::TextBox^  txtBoxFname;
	private: System::Windows::Forms::Label^  lb_Fname;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::TextBox^  txtBoxSearch;
	private: System::Windows::Forms::Label^  lb_SearchLname;
	private: System::Windows::Forms::ComboBox^  cbBoxSex;
	private: System::Windows::Forms::Button^  bt_Reset;
	private: System::Windows::Forms::Button^  bt_Add;
	private: System::Windows::Forms::TextBox^  txtBoxEmail;
	private: System::Windows::Forms::Label^  lb_Email;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewButtonColumn^  Column7;
	private: System::Windows::Forms::DataGridViewButtonColumn^  Column8;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(formCustomer::typeid));
			this->lb_Title = (gcnew System::Windows::Forms::Label());
			this->table_Customer = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->lb_ID = (gcnew System::Windows::Forms::Label());
			this->txtBoxID = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->cbBoxSex = (gcnew System::Windows::Forms::ComboBox());
			this->bt_Cancel = (gcnew System::Windows::Forms::Button());
			this->txtBoxEmail = (gcnew System::Windows::Forms::TextBox());
			this->bt_Edit = (gcnew System::Windows::Forms::Button());
			this->lb_Email = (gcnew System::Windows::Forms::Label());
			this->bt_Add = (gcnew System::Windows::Forms::Button());
			this->bt_Reset = (gcnew System::Windows::Forms::Button());
			this->txtBoxPhone = (gcnew System::Windows::Forms::TextBox());
			this->lb_Phone = (gcnew System::Windows::Forms::Label());
			this->txtBoxLname = (gcnew System::Windows::Forms::TextBox());
			this->lb_Lname = (gcnew System::Windows::Forms::Label());
			this->lb_Sex = (gcnew System::Windows::Forms::Label());
			this->txtBoxAddress = (gcnew System::Windows::Forms::TextBox());
			this->lb_Address = (gcnew System::Windows::Forms::Label());
			this->txtBoxFname = (gcnew System::Windows::Forms::TextBox());
			this->lb_Fname = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->bt_AdvancedSearch = (gcnew System::Windows::Forms::Button());
			this->txtBoxSearch = (gcnew System::Windows::Forms::TextBox());
			this->lb_SearchLname = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table_Customer))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// lb_Title
			// 
			this->lb_Title->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold));
			this->lb_Title->Location = System::Drawing::Point(-1, 0);
			this->lb_Title->Name = L"lb_Title";
			this->lb_Title->Size = System::Drawing::Size(882, 41);
			this->lb_Title->TabIndex = 3;
			this->lb_Title->Text = L"Customer Management";
			this->lb_Title->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// table_Customer
			// 
			this->table_Customer->AllowUserToAddRows = false;
			this->table_Customer->AllowUserToDeleteRows = false;
			this->table_Customer->AllowUserToResizeColumns = false;
			this->table_Customer->AllowUserToResizeRows = false;
			this->table_Customer->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->table_Customer->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->Column1,
					this->Column2, this->Column3, this->Column6, this->Column5, this->Column9, this->Column4, this->Column7, this->Column8
			});
			this->table_Customer->Location = System::Drawing::Point(12, 158);
			this->table_Customer->Name = L"table_Customer";
			this->table_Customer->ReadOnly = true;
			this->table_Customer->RowHeadersWidth = 24;
			this->table_Customer->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->table_Customer->Size = System::Drawing::Size(860, 252);
			this->table_Customer->TabIndex = 3;
			this->table_Customer->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &formCustomer::table_Customer_CellClick);
			this->table_Customer->CellFormatting += gcnew System::Windows::Forms::DataGridViewCellFormattingEventHandler(this, &formCustomer::table_Customer_CellFormatting);
			this->table_Customer->CurrentCellChanged += gcnew System::EventHandler(this, &formCustomer::table_Customer_CurrentCellChanged);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"ID";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 50;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"First Name";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 93;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Last Name";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 110;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Sex";
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			this->Column6->Width = 48;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Phone Number";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			this->Column5->Width = 101;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"Email";
			this->Column9->Name = L"Column9";
			this->Column9->ReadOnly = true;
			this->Column9->Width = 180;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Address";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			this->Column4->Width = 150;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Edit";
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			this->Column7->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->Column7->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			this->Column7->Width = 30;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Remove";
			this->Column8->Name = L"Column8";
			this->Column8->ReadOnly = true;
			this->Column8->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->Column8->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			this->Column8->Width = 54;
			// 
			// lb_ID
			// 
			this->lb_ID->AutoSize = true;
			this->lb_ID->Location = System::Drawing::Point(6, 21);
			this->lb_ID->Name = L"lb_ID";
			this->lb_ID->Size = System::Drawing::Size(21, 13);
			this->lb_ID->TabIndex = 6;
			this->lb_ID->Text = L"ID:";
			// 
			// txtBoxID
			// 
			this->txtBoxID->Location = System::Drawing::Point(51, 18);
			this->txtBoxID->Name = L"txtBoxID";
			this->txtBoxID->Size = System::Drawing::Size(67, 20);
			this->txtBoxID->TabIndex = 1;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->cbBoxSex);
			this->groupBox1->Controls->Add(this->bt_Cancel);
			this->groupBox1->Controls->Add(this->txtBoxEmail);
			this->groupBox1->Controls->Add(this->bt_Edit);
			this->groupBox1->Controls->Add(this->lb_Email);
			this->groupBox1->Controls->Add(this->bt_Add);
			this->groupBox1->Controls->Add(this->bt_Reset);
			this->groupBox1->Controls->Add(this->txtBoxPhone);
			this->groupBox1->Controls->Add(this->lb_Phone);
			this->groupBox1->Controls->Add(this->txtBoxLname);
			this->groupBox1->Controls->Add(this->lb_Lname);
			this->groupBox1->Controls->Add(this->lb_Sex);
			this->groupBox1->Controls->Add(this->txtBoxAddress);
			this->groupBox1->Controls->Add(this->lb_Address);
			this->groupBox1->Controls->Add(this->txtBoxFname);
			this->groupBox1->Controls->Add(this->lb_Fname);
			this->groupBox1->Controls->Add(this->txtBoxID);
			this->groupBox1->Controls->Add(this->lb_ID);
			this->groupBox1->Location = System::Drawing::Point(12, 44);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(580, 108);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Add Customer";
			// 
			// cbBoxSex
			// 
			this->cbBoxSex->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbBoxSex->FormattingEnabled = true;
			this->cbBoxSex->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Male", L"Female" });
			this->cbBoxSex->Location = System::Drawing::Point(51, 44);
			this->cbBoxSex->Name = L"cbBoxSex";
			this->cbBoxSex->Size = System::Drawing::Size(67, 21);
			this->cbBoxSex->TabIndex = 4;
			// 
			// bt_Cancel
			// 
			this->bt_Cancel->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bt_Cancel.Image")));
			this->bt_Cancel->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bt_Cancel->Location = System::Drawing::Point(513, 79);
			this->bt_Cancel->Name = L"bt_Cancel";
			this->bt_Cancel->Size = System::Drawing::Size(60, 23);
			this->bt_Cancel->TabIndex = 9;
			this->bt_Cancel->Text = L"Cancel";
			this->bt_Cancel->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->bt_Cancel->UseVisualStyleBackColor = true;
			this->bt_Cancel->Visible = false;
			this->bt_Cancel->Click += gcnew System::EventHandler(this, &formCustomer::bt_Cancel_Click);
			// 
			// txtBoxEmail
			// 
			this->txtBoxEmail->Location = System::Drawing::Point(420, 45);
			this->txtBoxEmail->Name = L"txtBoxEmail";
			this->txtBoxEmail->Size = System::Drawing::Size(152, 20);
			this->txtBoxEmail->TabIndex = 6;
			// 
			// bt_Edit
			// 
			this->bt_Edit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bt_Edit.Image")));
			this->bt_Edit->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bt_Edit->Location = System::Drawing::Point(419, 79);
			this->bt_Edit->Name = L"bt_Edit";
			this->bt_Edit->Size = System::Drawing::Size(58, 23);
			this->bt_Edit->TabIndex = 8;
			this->bt_Edit->Text = L"Edit";
			this->bt_Edit->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->bt_Edit->UseVisualStyleBackColor = true;
			this->bt_Edit->Visible = false;
			this->bt_Edit->Click += gcnew System::EventHandler(this, &formCustomer::bt_Edit_Click);
			// 
			// lb_Email
			// 
			this->lb_Email->AutoSize = true;
			this->lb_Email->Location = System::Drawing::Point(355, 48);
			this->lb_Email->Name = L"lb_Email";
			this->lb_Email->Size = System::Drawing::Size(35, 13);
			this->lb_Email->TabIndex = 20;
			this->lb_Email->Text = L"Email:";
			// 
			// bt_Add
			// 
			this->bt_Add->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bt_Add.Image")));
			this->bt_Add->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bt_Add->Location = System::Drawing::Point(420, 79);
			this->bt_Add->Name = L"bt_Add";
			this->bt_Add->Size = System::Drawing::Size(58, 23);
			this->bt_Add->TabIndex = 8;
			this->bt_Add->Text = L"Add";
			this->bt_Add->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->bt_Add->UseVisualStyleBackColor = true;
			this->bt_Add->Click += gcnew System::EventHandler(this, &formCustomer::bt_Add_Click);
			// 
			// bt_Reset
			// 
			this->bt_Reset->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bt_Reset.Image")));
			this->bt_Reset->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bt_Reset->Location = System::Drawing::Point(514, 79);
			this->bt_Reset->Name = L"bt_Reset";
			this->bt_Reset->Size = System::Drawing::Size(60, 23);
			this->bt_Reset->TabIndex = 9;
			this->bt_Reset->Text = L"Reset";
			this->bt_Reset->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->bt_Reset->UseVisualStyleBackColor = true;
			this->bt_Reset->Click += gcnew System::EventHandler(this, &formCustomer::bt_Reset_Click);
			// 
			// txtBoxPhone
			// 
			this->txtBoxPhone->Location = System::Drawing::Point(213, 45);
			this->txtBoxPhone->Name = L"txtBoxPhone";
			this->txtBoxPhone->Size = System::Drawing::Size(128, 20);
			this->txtBoxPhone->TabIndex = 5;
			// 
			// lb_Phone
			// 
			this->lb_Phone->AutoSize = true;
			this->lb_Phone->Location = System::Drawing::Point(127, 48);
			this->lb_Phone->Name = L"lb_Phone";
			this->lb_Phone->Size = System::Drawing::Size(81, 13);
			this->lb_Phone->TabIndex = 16;
			this->lb_Phone->Text = L"Phone Number:";
			// 
			// txtBoxLname
			// 
			this->txtBoxLname->Location = System::Drawing::Point(420, 16);
			this->txtBoxLname->Name = L"txtBoxLname";
			this->txtBoxLname->Size = System::Drawing::Size(152, 20);
			this->txtBoxLname->TabIndex = 3;
			// 
			// lb_Lname
			// 
			this->lb_Lname->AutoSize = true;
			this->lb_Lname->Location = System::Drawing::Point(353, 21);
			this->lb_Lname->Name = L"lb_Lname";
			this->lb_Lname->Size = System::Drawing::Size(61, 13);
			this->lb_Lname->TabIndex = 14;
			this->lb_Lname->Text = L"Last Name:";
			// 
			// lb_Sex
			// 
			this->lb_Sex->AutoSize = true;
			this->lb_Sex->Location = System::Drawing::Point(6, 50);
			this->lb_Sex->Name = L"lb_Sex";
			this->lb_Sex->Size = System::Drawing::Size(28, 13);
			this->lb_Sex->TabIndex = 12;
			this->lb_Sex->Text = L"Sex:";
			// 
			// txtBoxAddress
			// 
			this->txtBoxAddress->Location = System::Drawing::Point(51, 75);
			this->txtBoxAddress->Name = L"txtBoxAddress";
			this->txtBoxAddress->Size = System::Drawing::Size(156, 20);
			this->txtBoxAddress->TabIndex = 7;
			// 
			// lb_Address
			// 
			this->lb_Address->AutoSize = true;
			this->lb_Address->Location = System::Drawing::Point(6, 78);
			this->lb_Address->Name = L"lb_Address";
			this->lb_Address->Size = System::Drawing::Size(48, 13);
			this->lb_Address->TabIndex = 10;
			this->lb_Address->Text = L"Address:";
			// 
			// txtBoxFname
			// 
			this->txtBoxFname->Location = System::Drawing::Point(213, 18);
			this->txtBoxFname->Name = L"txtBoxFname";
			this->txtBoxFname->Size = System::Drawing::Size(128, 20);
			this->txtBoxFname->TabIndex = 2;
			// 
			// lb_Fname
			// 
			this->lb_Fname->AutoSize = true;
			this->lb_Fname->Location = System::Drawing::Point(127, 21);
			this->lb_Fname->Name = L"lb_Fname";
			this->lb_Fname->Size = System::Drawing::Size(60, 13);
			this->lb_Fname->TabIndex = 8;
			this->lb_Fname->Text = L"First Name:";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->bt_AdvancedSearch);
			this->groupBox2->Controls->Add(this->txtBoxSearch);
			this->groupBox2->Controls->Add(this->lb_SearchLname);
			this->groupBox2->Location = System::Drawing::Point(611, 44);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(261, 95);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Quick Search";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(66, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(126, 13);
			this->label1->TabIndex = 15;
			this->label1->Text = L"First name OR Last name";
			// 
			// bt_AdvancedSearch
			// 
			this->bt_AdvancedSearch->Location = System::Drawing::Point(6, 66);
			this->bt_AdvancedSearch->Name = L"bt_AdvancedSearch";
			this->bt_AdvancedSearch->Size = System::Drawing::Size(250, 23);
			this->bt_AdvancedSearch->TabIndex = 3;
			this->bt_AdvancedSearch->Text = L"Advanced Search";
			this->bt_AdvancedSearch->UseVisualStyleBackColor = true;
			this->bt_AdvancedSearch->Click += gcnew System::EventHandler(this, &formCustomer::bt_AdvancedSearch_Click);
			// 
			// txtBoxSearch
			// 
			this->txtBoxSearch->Location = System::Drawing::Point(9, 41);
			this->txtBoxSearch->Name = L"txtBoxSearch";
			this->txtBoxSearch->Size = System::Drawing::Size(246, 20);
			this->txtBoxSearch->TabIndex = 1;
			this->txtBoxSearch->TextChanged += gcnew System::EventHandler(this, &formCustomer::txtBoxSearch_TextChanged);
			// 
			// lb_SearchLname
			// 
			this->lb_SearchLname->AutoSize = true;
			this->lb_SearchLname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lb_SearchLname->Location = System::Drawing::Point(6, 21);
			this->lb_SearchLname->Name = L"lb_SearchLname";
			this->lb_SearchLname->Size = System::Drawing::Size(63, 13);
			this->lb_SearchLname->TabIndex = 14;
			this->lb_SearchLname->Text = L"Keyword: ";
			// 
			// formCustomer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::AliceBlue;
			this->ClientSize = System::Drawing::Size(884, 422);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->table_Customer);
			this->Controls->Add(this->lb_Title);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"formCustomer";
			this->Text = L"Customer";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table_Customer))->EndInit();
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
		tmp = txtBoxID->Text + "|" + txtBoxFname->Text + "|" + txtBoxLname->Text + "|" + cbBoxSex->Text + "|" + txtBoxPhone->Text + "|" + txtBoxEmail->Text + "|" + txtBoxAddress->Text;
		return handling->MarshalString(tmp);
	}

	// Check Input
	private: bool checkInput(string str, int i) {
		if (txtBoxID->Text == "" || txtBoxFname->Text == "" || txtBoxFname->Text == "" || cbBoxSex->Text == "" || txtBoxPhone->Text == "" || txtBoxEmail->Text == "" || txtBoxAddress->Text == "")
		{
			MessageBox::Show("Please Fill All TextBox", "Input is INVALID!!!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return false;
		}
		if (i == 1)
		{
			if (!handling->checkID(table_Customer, GlobalFunction::split(str, 0)))
				return false;
		}
		if (!handling->checkNumber(GlobalFunction::split(str, 4)))
		{
			MessageBox::Show("Phone does not contain any character without number. Please modify...", "Input is INVALID!!!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return false;
		}
		return true;
	}
	

	// Add button's Event
	private: System::Void bt_Add_Click(System::Object^  sender, System::EventArgs^  e) {
		
		string str = getStringFromAllTextBox(); // Get All Info

		if (checkInput(str,1))
		{
			Template<Customer> *arr = new Template<Customer>();
			
			arr->addAndWrite("customers.txt", str);
			table_Customer->Rows->Add(txtBoxID->Text, txtBoxFname->Text, txtBoxLname->Text, cbBoxSex->Text, txtBoxPhone->Text, txtBoxEmail->Text, txtBoxAddress->Text);
			bt_Reset_Click(sender, e);
		}
	}

	// Reset button's Event
	private: System::Void bt_Reset_Click(System::Object^  sender, System::EventArgs^  e) {
		txtBoxID->Clear();	txtBoxFname->Clear();	txtBoxLname->Clear();	cbBoxSex->ResetText();
		txtBoxPhone->Clear();	txtBoxEmail->Clear();	txtBoxAddress->Clear();
	}

	// Edit button's Event
	private: System::Void bt_Edit_Click(System::Object^  sender, System::EventArgs^  e) {
		string str = getStringFromAllTextBox();
		if (checkInput(str,0))
		{
			Template<Customer> *arr = new Template<Customer>();
			arr->edit(table_Customer->CurrentRow->Index, str, "customers.txt");

			table_Customer->CurrentRow->SetValues(txtBoxID->Text, txtBoxFname->Text, txtBoxLname->Text, cbBoxSex->Text, txtBoxPhone->Text, txtBoxEmail->Text, txtBoxAddress->Text);
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

	// Add Edit and Remove button to Table
	private: System::Void table_Customer_CellFormatting(System::Object^  sender, System::Windows::Forms::DataGridViewCellFormattingEventArgs^  e) {
		this->table_Customer->Rows[e->RowIndex]->Cells[7]->Value = "Edit";
		this->table_Customer->Rows[e->RowIndex]->Cells[8]->Value = "Remove";
	}

	// Edit and Remove button (table) 's Event
	private: System::Void table_Customer_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		if (e->ColumnIndex == 7) // The index of Edit button is 7
		{
			txtBoxID->Text = table_Customer->Rows[e->RowIndex]->Cells[0]->Value->ToString();
			txtBoxFname->Text = table_Customer->Rows[e->RowIndex]->Cells[1]->Value->ToString();
			txtBoxLname->Text = table_Customer->Rows[e->RowIndex]->Cells[2]->Value->ToString();
			cbBoxSex->Text = table_Customer->Rows[e->RowIndex]->Cells[3]->Value->ToString();
			txtBoxPhone->Text = table_Customer->Rows[e->RowIndex]->Cells[4]->Value->ToString();
			txtBoxEmail->Text = table_Customer->Rows[e->RowIndex]->Cells[5]->Value->ToString();
			txtBoxAddress->Text = table_Customer->Rows[e->RowIndex]->Cells[6]->Value->ToString();
			bt_Add->Visible = false;
			bt_Reset->Visible = false;
			this->bt_Cancel->Visible = true;
			this->bt_Edit->Visible = true;
			txtBoxID->ReadOnly = true;
		}
		else if (e->ColumnIndex == 8) // The index of Remove button is 8
		{
			if (bt_Edit->Visible == false)
			{
				if (MessageBox::Show("Do you want to delete this ? ", "Warning!!!", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
				{
					handling->removeFromDataGridView(table_Customer);
					Template<Customer> *arr = new Template<Customer>();
					arr->removeAndWrite(e->RowIndex, "customers.txt");
				}
			}
			else
				MessageBox::Show("Remove is not available when Edit is Enabling", "Function Not Available", MessageBoxButtons::OK, MessageBoxIcon::Hand);
		}
	}

	private: System::Void table_Customer_CurrentCellChanged(System::Object^  sender, System::EventArgs^  e) {
		bt_Cancel_Click(sender, e);
	}

	// TextBox Search's Event
	private: System::Void txtBoxSearch_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		handling->searchFromTextbox(table_Customer, 1, 2, txtBoxSearch);
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
