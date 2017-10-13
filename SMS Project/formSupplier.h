#pragma once
#include "stdafx.h"
namespace SMSProject {

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for formSupplier
	/// </summary>
	public ref class formSupplier : public System::Windows::Forms::Form
	{
		GlobalFunction *handling = new GlobalFunction();
		
	public:	
		formSupplier(void)
		{
			InitializeComponent();
			StartPosition = FormStartPosition::CenterScreen;
			handling->showToDataGridView(table_Supplier, "suppliers.txt");
			this->AcceptButton = bt_Add;

			this->table_Supplier->RowsDefaultCellStyle->BackColor = Color::LightBlue;
			this->table_Supplier->AlternatingRowsDefaultCellStyle->BackColor = Color::AliceBlue;
			this->table_Supplier->SelectionMode = DataGridViewSelectionMode::FullRowSelect;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~formSupplier()
		{
			if (components)
			{
				delete components;
			}
		}
	
	protected:
	private: System::Windows::Forms::Label^  lb_Title;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::DataGridView^  table_Supplier;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  lb_ID;
	private: System::Windows::Forms::TextBox^  txtBoxID;
	private: System::Windows::Forms::TextBox^  txtBoxAddress;
	private: System::Windows::Forms::Label^  lb_Address;
	private: System::Windows::Forms::TextBox^  txtBoxPhone;
	private: System::Windows::Forms::Label^  lb_Phone;
	private: System::Windows::Forms::TextBox^  txtBoxName;
	private: System::Windows::Forms::Label^  lb_Name;
	private: System::Windows::Forms::Button^  bt_Add;
	private: System::Windows::Forms::Button^  bt_Reset;
	private: System::Windows::Forms::TextBox^  txtBoxEmail;
	private: System::Windows::Forms::Label^  lb_Email;
	private: System::Windows::Forms::TextBox^  txtBoxSearch;
	private: System::Windows::Forms::Button^  bt_Cancel;
	private: System::Windows::Forms::Button^  bt_Edit;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  bt_AdvancedSearch;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewButtonColumn^  Column6;
	private: System::Windows::Forms::DataGridViewButtonColumn^  Column7;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(formSupplier::typeid));
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->lb_Title = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->lb_Email = (gcnew System::Windows::Forms::Label());
			this->txtBoxEmail = (gcnew System::Windows::Forms::TextBox());
			this->txtBoxAddress = (gcnew System::Windows::Forms::TextBox());
			this->lb_Address = (gcnew System::Windows::Forms::Label());
			this->txtBoxPhone = (gcnew System::Windows::Forms::TextBox());
			this->lb_Phone = (gcnew System::Windows::Forms::Label());
			this->txtBoxName = (gcnew System::Windows::Forms::TextBox());
			this->lb_Name = (gcnew System::Windows::Forms::Label());
			this->txtBoxID = (gcnew System::Windows::Forms::TextBox());
			this->lb_ID = (gcnew System::Windows::Forms::Label());
			this->bt_Reset = (gcnew System::Windows::Forms::Button());
			this->bt_Add = (gcnew System::Windows::Forms::Button());
			this->table_Supplier = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->bt_AdvancedSearch = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtBoxSearch = (gcnew System::Windows::Forms::TextBox());
			this->bt_Cancel = (gcnew System::Windows::Forms::Button());
			this->bt_Edit = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table_Supplier))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// lb_Title
			// 
			this->lb_Title->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold));
			this->lb_Title->Location = System::Drawing::Point(3, 0);
			this->lb_Title->Name = L"lb_Title";
			this->lb_Title->Size = System::Drawing::Size(882, 41);
			this->lb_Title->TabIndex = 2;
			this->lb_Title->Text = L"Supplier Management";
			this->lb_Title->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->lb_Email);
			this->groupBox1->Controls->Add(this->txtBoxEmail);
			this->groupBox1->Controls->Add(this->txtBoxAddress);
			this->groupBox1->Controls->Add(this->lb_Address);
			this->groupBox1->Controls->Add(this->txtBoxPhone);
			this->groupBox1->Controls->Add(this->lb_Phone);
			this->groupBox1->Controls->Add(this->txtBoxName);
			this->groupBox1->Controls->Add(this->lb_Name);
			this->groupBox1->Controls->Add(this->txtBoxID);
			this->groupBox1->Controls->Add(this->lb_ID);
			this->groupBox1->Location = System::Drawing::Point(13, 38);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(513, 83);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Add Supplier";
			// 
			// lb_Email
			// 
			this->lb_Email->AutoSize = true;
			this->lb_Email->Location = System::Drawing::Point(7, 56);
			this->lb_Email->Name = L"lb_Email";
			this->lb_Email->Size = System::Drawing::Size(35, 13);
			this->lb_Email->TabIndex = 22;
			this->lb_Email->Text = L"Email:";
			// 
			// txtBoxEmail
			// 
			this->txtBoxEmail->Location = System::Drawing::Point(48, 53);
			this->txtBoxEmail->Name = L"txtBoxEmail";
			this->txtBoxEmail->Size = System::Drawing::Size(196, 20);
			this->txtBoxEmail->TabIndex = 4;
			// 
			// txtBoxAddress
			// 
			this->txtBoxAddress->Location = System::Drawing::Point(329, 53);
			this->txtBoxAddress->Name = L"txtBoxAddress";
			this->txtBoxAddress->Size = System::Drawing::Size(172, 20);
			this->txtBoxAddress->TabIndex = 5;
			// 
			// lb_Address
			// 
			this->lb_Address->AutoSize = true;
			this->lb_Address->Location = System::Drawing::Point(275, 57);
			this->lb_Address->Name = L"lb_Address";
			this->lb_Address->Size = System::Drawing::Size(48, 13);
			this->lb_Address->TabIndex = 6;
			this->lb_Address->Text = L"Address:";
			// 
			// txtBoxPhone
			// 
			this->txtBoxPhone->Location = System::Drawing::Point(397, 17);
			this->txtBoxPhone->Name = L"txtBoxPhone";
			this->txtBoxPhone->Size = System::Drawing::Size(104, 20);
			this->txtBoxPhone->TabIndex = 3;
			// 
			// lb_Phone
			// 
			this->lb_Phone->AutoSize = true;
			this->lb_Phone->Location = System::Drawing::Point(350, 20);
			this->lb_Phone->Name = L"lb_Phone";
			this->lb_Phone->Size = System::Drawing::Size(41, 13);
			this->lb_Phone->TabIndex = 4;
			this->lb_Phone->Text = L"Phone:";
			// 
			// txtBoxName
			// 
			this->txtBoxName->Location = System::Drawing::Point(182, 17);
			this->txtBoxName->Name = L"txtBoxName";
			this->txtBoxName->Size = System::Drawing::Size(141, 20);
			this->txtBoxName->TabIndex = 2;
			// 
			// lb_Name
			// 
			this->lb_Name->AutoSize = true;
			this->lb_Name->Location = System::Drawing::Point(130, 20);
			this->lb_Name->Name = L"lb_Name";
			this->lb_Name->Size = System::Drawing::Size(38, 13);
			this->lb_Name->TabIndex = 2;
			this->lb_Name->Text = L"Name:";
			// 
			// txtBoxID
			// 
			this->txtBoxID->Location = System::Drawing::Point(48, 16);
			this->txtBoxID->Name = L"txtBoxID";
			this->txtBoxID->Size = System::Drawing::Size(59, 20);
			this->txtBoxID->TabIndex = 1;
			// 
			// lb_ID
			// 
			this->lb_ID->AutoSize = true;
			this->lb_ID->Location = System::Drawing::Point(7, 20);
			this->lb_ID->Name = L"lb_ID";
			this->lb_ID->Size = System::Drawing::Size(21, 13);
			this->lb_ID->TabIndex = 0;
			this->lb_ID->Text = L"ID:";
			// 
			// bt_Reset
			// 
			this->bt_Reset->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bt_Reset.Image")));
			this->bt_Reset->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bt_Reset->Location = System::Drawing::Point(532, 88);
			this->bt_Reset->Name = L"bt_Reset";
			this->bt_Reset->Size = System::Drawing::Size(60, 23);
			this->bt_Reset->TabIndex = 3;
			this->bt_Reset->Text = L"Reset";
			this->bt_Reset->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->bt_Reset->UseVisualStyleBackColor = true;
			this->bt_Reset->Click += gcnew System::EventHandler(this, &formSupplier::bt_Reset_Click);
			// 
			// bt_Add
			// 
			this->bt_Add->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bt_Add.Image")));
			this->bt_Add->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bt_Add->Location = System::Drawing::Point(532, 53);
			this->bt_Add->Name = L"bt_Add";
			this->bt_Add->Size = System::Drawing::Size(56, 23);
			this->bt_Add->TabIndex = 2;
			this->bt_Add->Text = L"Add";
			this->bt_Add->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->bt_Add->UseVisualStyleBackColor = true;
			this->bt_Add->Click += gcnew System::EventHandler(this, &formSupplier::bt_Add_Click);
			// 
			// table_Supplier
			// 
			this->table_Supplier->AllowUserToAddRows = false;
			this->table_Supplier->AllowUserToDeleteRows = false;
			this->table_Supplier->AllowUserToResizeColumns = false;
			this->table_Supplier->AllowUserToResizeRows = false;
			this->table_Supplier->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->table_Supplier->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Column1,
					this->Column2, this->Column4, this->Column5, this->Column3, this->Column6, this->Column7
			});
			this->table_Supplier->Location = System::Drawing::Point(12, 127);
			this->table_Supplier->Name = L"table_Supplier";
			this->table_Supplier->ReadOnly = true;
			this->table_Supplier->RowHeadersWidth = 24;
			this->table_Supplier->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->table_Supplier->Size = System::Drawing::Size(860, 283);
			this->table_Supplier->TabIndex = 5;
			this->table_Supplier->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &formSupplier::table_Supplier_CellClick);
			this->table_Supplier->CellFormatting += gcnew System::Windows::Forms::DataGridViewCellFormattingEventHandler(this, &formSupplier::table_Supplier_CellFormatting);
			this->table_Supplier->CurrentCellChanged += gcnew System::EventHandler(this, &formSupplier::table_Supplier_CurrentCellChanged);
			// 
			// Column1
			// 
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->Column1->DefaultCellStyle = dataGridViewCellStyle1;
			this->Column1->HeaderText = L"ID";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 65;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Name";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 150;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Phone Number";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			this->Column4->Width = 120;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Email";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			this->Column5->Width = 185;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Address";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 200;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Edit";
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			this->Column6->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->Column6->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			this->Column6->Width = 40;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Remove";
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			this->Column7->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->Column7->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			this->Column7->Width = 56;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->bt_AdvancedSearch);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->txtBoxSearch);
			this->groupBox2->Location = System::Drawing::Point(610, 38);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(262, 83);
			this->groupBox2->TabIndex = 4;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Quick Search";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(62, 16);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 25;
			this->label2->Text = L"Name";
			// 
			// bt_AdvancedSearch
			// 
			this->bt_AdvancedSearch->Location = System::Drawing::Point(6, 57);
			this->bt_AdvancedSearch->Name = L"bt_AdvancedSearch";
			this->bt_AdvancedSearch->Size = System::Drawing::Size(250, 23);
			this->bt_AdvancedSearch->TabIndex = 3;
			this->bt_AdvancedSearch->Text = L"Advanced Search";
			this->bt_AdvancedSearch->UseVisualStyleBackColor = true;
			this->bt_AdvancedSearch->Click += gcnew System::EventHandler(this, &formSupplier::bt_AdvancedSearch_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(6, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 13);
			this->label1->TabIndex = 24;
			this->label1->Text = L"Keyword:";
			// 
			// txtBoxSearch
			// 
			this->txtBoxSearch->Location = System::Drawing::Point(9, 32);
			this->txtBoxSearch->Name = L"txtBoxSearch";
			this->txtBoxSearch->Size = System::Drawing::Size(247, 20);
			this->txtBoxSearch->TabIndex = 1;
			this->txtBoxSearch->TextChanged += gcnew System::EventHandler(this, &formSupplier::txtBoxSearch_TextChanged);
			// 
			// bt_Cancel
			// 
			this->bt_Cancel->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bt_Cancel.Image")));
			this->bt_Cancel->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bt_Cancel->Location = System::Drawing::Point(532, 88);
			this->bt_Cancel->Name = L"bt_Cancel";
			this->bt_Cancel->Size = System::Drawing::Size(60, 23);
			this->bt_Cancel->TabIndex = 3;
			this->bt_Cancel->Text = L"Cancel";
			this->bt_Cancel->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->bt_Cancel->UseVisualStyleBackColor = true;
			this->bt_Cancel->Visible = false;
			this->bt_Cancel->Click += gcnew System::EventHandler(this, &formSupplier::bt_Cancel_Click);
			// 
			// bt_Edit
			// 
			this->bt_Edit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bt_Edit.Image")));
			this->bt_Edit->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bt_Edit->Location = System::Drawing::Point(532, 53);
			this->bt_Edit->Name = L"bt_Edit";
			this->bt_Edit->Size = System::Drawing::Size(56, 23);
			this->bt_Edit->TabIndex = 2;
			this->bt_Edit->Text = L"Edit";
			this->bt_Edit->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->bt_Edit->UseVisualStyleBackColor = true;
			this->bt_Edit->Visible = false;
			this->bt_Edit->Click += gcnew System::EventHandler(this, &formSupplier::bt_Edit_Click);
			// 
			// formSupplier
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::AliceBlue;
			this->ClientSize = System::Drawing::Size(884, 422);
			this->Controls->Add(this->bt_Cancel);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->table_Supplier);
			this->Controls->Add(this->bt_Edit);
			this->Controls->Add(this->bt_Reset);
			this->Controls->Add(this->bt_Add);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->lb_Title);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"formSupplier";
			this->Text = L"Supplier";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table_Supplier))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}


#pragma endregion
	// Get value from textbox, then convert to cstring
	private: string getStringFromAllTextBox() {
		String ^tmp;
		tmp = txtBoxID->Text + "|" + txtBoxName->Text + "|" + txtBoxPhone->Text + "|" + txtBoxEmail->Text + "|" + txtBoxAddress->Text;
		return handling->MarshalString(tmp);
	}

	// Check Input
	private: bool checkInput(string str, int i) {
		if (txtBoxID->Text == "" || txtBoxName->Text == "" || txtBoxPhone->Text == "" || txtBoxEmail->Text == "" || txtBoxAddress->Text == "")
		{
			MessageBox::Show("Please Fill All TextBox", "Input is INVALID!!!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return false;
		}
		if (i == 1)
		{
			if (!handling->checkID(table_Supplier, GlobalFunction::split(str, 0)))
				return false;
		}
		if (!handling->checkNumber(GlobalFunction::split(str, 2)))
		{
			MessageBox::Show("Phone does not contain any character without number. Please mofify...", "Input is INVALID!!!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return false;
		}
		return true;
	}

	// Add button's event
	private: System::Void bt_Add_Click(System::Object^  sender, System::EventArgs^  e) {
		string str = getStringFromAllTextBox();

		if (checkInput(str,1))
		{
			Template<Supplier> *arr = new Template<Supplier>();
			
			arr->addAndWrite("suppliers.txt", str);
			table_Supplier->Rows->Add(txtBoxID->Text, txtBoxName->Text, txtBoxPhone->Text, txtBoxEmail->Text, txtBoxAddress->Text);
			bt_Reset_Click(sender, e);
		}
	}

	// Reset button's event
	private: System::Void bt_Reset_Click(System::Object^  sender, System::EventArgs^  e) {
		txtBoxID->Clear();	txtBoxName->Clear();	txtBoxPhone->Clear();
		txtBoxEmail->Clear();	txtBoxAddress->Clear();
	}

	// Edit button's event
	private: System::Void bt_Edit_Click(System::Object^  sender, System::EventArgs^  e) {
		string str = getStringFromAllTextBox();
		if (checkInput(str,0))
		{
			Template<Supplier> *arr = new Template<Supplier>();
			arr->edit(table_Supplier->CurrentRow->Index, str, "suppliers.txt");

			table_Supplier->CurrentRow->SetValues(txtBoxID->Text, txtBoxName->Text, txtBoxPhone->Text, txtBoxEmail->Text, txtBoxAddress->Text);
			bt_Cancel_Click(sender, e);
		}
	}

	// Cancel button's event
	private: System::Void bt_Cancel_Click(System::Object^  sender, System::EventArgs^  e) {
		bt_Reset_Click(sender, e);
		bt_Add->Visible = true;
		bt_Reset->Visible = true;
		this->bt_Cancel->Visible = false;
		this->bt_Edit->Visible = false;
		txtBoxID->ReadOnly = false;
	}

	// Add Edit and Remove button to DataGridView (table)
	private: System::Void table_Supplier_CellFormatting(System::Object^  sender, System::Windows::Forms::DataGridViewCellFormattingEventArgs^  e) {
		table_Supplier->Rows[e->RowIndex]->Cells[5]->Value = "Edit";
		table_Supplier->Rows[e->RowIndex]->Cells[6]->Value = "Remove";
	}

	// Edit and Remove button (table) 's Event
	private: System::Void table_Supplier_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		if (e->ColumnIndex == 5) // The index of Edit button is 5
		{
			txtBoxID->Text = table_Supplier->Rows[e->RowIndex]->Cells[0]->Value->ToString();
			txtBoxName->Text = table_Supplier->Rows[e->RowIndex]->Cells[1]->Value->ToString();
			txtBoxPhone->Text = table_Supplier->Rows[e->RowIndex]->Cells[2]->Value->ToString();
			txtBoxEmail->Text = table_Supplier->Rows[e->RowIndex]->Cells[3]->Value->ToString();
			txtBoxAddress->Text = table_Supplier->Rows[e->RowIndex]->Cells[4]->Value->ToString();
			bt_Add->Visible = false;
			bt_Reset->Visible = false;
			this->bt_Cancel->Visible = true;
			this->bt_Edit->Visible = true;
			txtBoxID->ReadOnly = true;
		}
		else if (e->ColumnIndex == 6) // The index of Remove button is 6
		{
			if (bt_Edit->Visible == false)
			{
				if (MessageBox::Show("Do you want to delete this ? ", "Warning!!!", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
				{
					handling->removeFromDataGridView(table_Supplier);
					Template<Supplier> *su = new Template<Supplier>();
					su->removeAndWrite(e->RowIndex, "suppliers.txt");
				}
			}
			else
				MessageBox::Show("Remove is not available when Edit is Enabling", "Function Not Available", MessageBoxButtons::OK, MessageBoxIcon::Hand);
		}
	}
	
	private: System::Void table_Supplier_CurrentCellChanged(System::Object^  sender, System::EventArgs^  e) {
		 bt_Cancel_Click(sender, e);
	}

	//Text box search
	private: System::Void txtBoxSearch_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		handling->searchFromTextbox(table_Supplier, 1, txtBoxSearch);
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
