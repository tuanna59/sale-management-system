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
	/// Summary for formSearch
	/// </summary>
	public ref class formSearch : public System::Windows::Forms::Form
	{
		GlobalFunction *handling = new GlobalFunction();
	public:
		formSearch(void)
		{
			InitializeComponent();
			StartPosition = FormStartPosition::CenterScreen;

			this->table_Result->RowsDefaultCellStyle->BackColor = Color::LightBlue;
			this->table_Result->AlternatingRowsDefaultCellStyle->BackColor = Color::AliceBlue;
			this->table_Result->SelectionMode = DataGridViewSelectionMode::FullRowSelect;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~formSearch()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lb_Title;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::DataGridView^  table_Result;
	private: System::Windows::Forms::RadioButton^  rbCustomer;
	private: System::Windows::Forms::RadioButton^  rbSupplier;
	private: System::Windows::Forms::RadioButton^  rbInvoice;
	private: System::Windows::Forms::RadioButton^  rbProduct;
	private: System::Windows::Forms::TextBox^  txtBoxSearch;
	private: System::Windows::Forms::ComboBox^  cbDetail1;
	private: System::Windows::Forms::Label^  lb_Detail1;
	private: System::Windows::Forms::ComboBox^  cbDetail2;
	private: System::Windows::Forms::Label^  lb_Detail2;
	private: System::Windows::Forms::RadioButton^  rbEmail;
	private: System::Windows::Forms::RadioButton^  rbPhone;
	private: System::Windows::Forms::RadioButton^  rbAddress;
	private: System::Windows::Forms::RadioButton^  rbName;
	private: System::Windows::Forms::ComboBox^  cbDetail3;
	private: System::Windows::Forms::Label^  lb_Detail3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column8;

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
			this->lb_Title = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->rbProduct = (gcnew System::Windows::Forms::RadioButton());
			this->rbCustomer = (gcnew System::Windows::Forms::RadioButton());
			this->rbSupplier = (gcnew System::Windows::Forms::RadioButton());
			this->rbInvoice = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->cbDetail3 = (gcnew System::Windows::Forms::ComboBox());
			this->lb_Detail3 = (gcnew System::Windows::Forms::Label());
			this->cbDetail2 = (gcnew System::Windows::Forms::ComboBox());
			this->lb_Detail2 = (gcnew System::Windows::Forms::Label());
			this->cbDetail1 = (gcnew System::Windows::Forms::ComboBox());
			this->lb_Detail1 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->rbEmail = (gcnew System::Windows::Forms::RadioButton());
			this->rbPhone = (gcnew System::Windows::Forms::RadioButton());
			this->rbAddress = (gcnew System::Windows::Forms::RadioButton());
			this->txtBoxSearch = (gcnew System::Windows::Forms::TextBox());
			this->rbName = (gcnew System::Windows::Forms::RadioButton());
			this->table_Result = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table_Result))->BeginInit();
			this->SuspendLayout();
			// 
			// lb_Title
			// 
			this->lb_Title->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold));
			this->lb_Title->Location = System::Drawing::Point(-1, 2);
			this->lb_Title->Name = L"lb_Title";
			this->lb_Title->Size = System::Drawing::Size(882, 41);
			this->lb_Title->TabIndex = 3;
			this->lb_Title->Text = L"Advanced Search";
			this->lb_Title->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->rbProduct);
			this->groupBox1->Controls->Add(this->rbCustomer);
			this->groupBox1->Controls->Add(this->rbSupplier);
			this->groupBox1->Controls->Add(this->rbInvoice);
			this->groupBox1->Location = System::Drawing::Point(12, 44);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(214, 77);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Search by:";
			// 
			// rbProduct
			// 
			this->rbProduct->AutoSize = true;
			this->rbProduct->Location = System::Drawing::Point(118, 51);
			this->rbProduct->Name = L"rbProduct";
			this->rbProduct->Size = System::Drawing::Size(62, 17);
			this->rbProduct->TabIndex = 3;
			this->rbProduct->TabStop = true;
			this->rbProduct->Text = L"Product";
			this->rbProduct->UseVisualStyleBackColor = true;
			this->rbProduct->CheckedChanged += gcnew System::EventHandler(this, &formSearch::rbProduct_CheckedChanged);
			// 
			// rbCustomer
			// 
			this->rbCustomer->AutoSize = true;
			this->rbCustomer->Location = System::Drawing::Point(118, 20);
			this->rbCustomer->Name = L"rbCustomer";
			this->rbCustomer->Size = System::Drawing::Size(69, 17);
			this->rbCustomer->TabIndex = 1;
			this->rbCustomer->TabStop = true;
			this->rbCustomer->Text = L"Customer";
			this->rbCustomer->UseVisualStyleBackColor = true;
			this->rbCustomer->CheckedChanged += gcnew System::EventHandler(this, &formSearch::rbCustomer_CheckedChanged);
			// 
			// rbSupplier
			// 
			this->rbSupplier->AutoSize = true;
			this->rbSupplier->Location = System::Drawing::Point(7, 51);
			this->rbSupplier->Name = L"rbSupplier";
			this->rbSupplier->Size = System::Drawing::Size(63, 17);
			this->rbSupplier->TabIndex = 2;
			this->rbSupplier->TabStop = true;
			this->rbSupplier->Text = L"Supplier";
			this->rbSupplier->UseVisualStyleBackColor = true;
			this->rbSupplier->CheckedChanged += gcnew System::EventHandler(this, &formSearch::rbSupplier_CheckedChanged);
			// 
			// rbInvoice
			// 
			this->rbInvoice->AutoSize = true;
			this->rbInvoice->Location = System::Drawing::Point(7, 20);
			this->rbInvoice->Name = L"rbInvoice";
			this->rbInvoice->Size = System::Drawing::Size(60, 17);
			this->rbInvoice->TabIndex = 0;
			this->rbInvoice->TabStop = true;
			this->rbInvoice->Text = L"Invoice";
			this->rbInvoice->UseVisualStyleBackColor = true;
			this->rbInvoice->CheckedChanged += gcnew System::EventHandler(this, &formSearch::rbInvoice_CheckedChanged);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->cbDetail3);
			this->groupBox2->Controls->Add(this->lb_Detail3);
			this->groupBox2->Controls->Add(this->cbDetail2);
			this->groupBox2->Controls->Add(this->lb_Detail2);
			this->groupBox2->Controls->Add(this->cbDetail1);
			this->groupBox2->Controls->Add(this->lb_Detail1);
			this->groupBox2->Location = System::Drawing::Point(257, 44);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(200, 77);
			this->groupBox2->TabIndex = 5;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Detail:";
			// 
			// cbDetail3
			// 
			this->cbDetail3->FormattingEnabled = true;
			this->cbDetail3->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Male", L"Female" });
			this->cbDetail3->Location = System::Drawing::Point(127, 17);
			this->cbDetail3->Name = L"cbDetail3";
			this->cbDetail3->Size = System::Drawing::Size(63, 21);
			this->cbDetail3->TabIndex = 5;
			this->cbDetail3->SelectedIndexChanged += gcnew System::EventHandler(this, &formSearch::cbDetail3_SelectedIndexChanged);
			// 
			// lb_Detail3
			// 
			this->lb_Detail3->AutoSize = true;
			this->lb_Detail3->Location = System::Drawing::Point(101, 22);
			this->lb_Detail3->Name = L"lb_Detail3";
			this->lb_Detail3->Size = System::Drawing::Size(28, 13);
			this->lb_Detail3->TabIndex = 4;
			this->lb_Detail3->Text = L"Sex:";
			// 
			// cbDetail2
			// 
			this->cbDetail2->FormattingEnabled = true;
			this->cbDetail2->Location = System::Drawing::Point(43, 50);
			this->cbDetail2->Name = L"cbDetail2";
			this->cbDetail2->Size = System::Drawing::Size(121, 21);
			this->cbDetail2->TabIndex = 3;
			this->cbDetail2->SelectedIndexChanged += gcnew System::EventHandler(this, &formSearch::cbDetail2_SelectedIndexChanged);
			// 
			// lb_Detail2
			// 
			this->lb_Detail2->AutoSize = true;
			this->lb_Detail2->Location = System::Drawing::Point(3, 54);
			this->lb_Detail2->Name = L"lb_Detail2";
			this->lb_Detail2->Size = System::Drawing::Size(38, 13);
			this->lb_Detail2->TabIndex = 2;
			this->lb_Detail2->Text = L"Name:";
			// 
			// cbDetail1
			// 
			this->cbDetail1->FormattingEnabled = true;
			this->cbDetail1->Location = System::Drawing::Point(43, 17);
			this->cbDetail1->Name = L"cbDetail1";
			this->cbDetail1->Size = System::Drawing::Size(56, 21);
			this->cbDetail1->TabIndex = 1;
			this->cbDetail1->SelectedIndexChanged += gcnew System::EventHandler(this, &formSearch::cbDetail1_SelectedIndexChanged);
			// 
			// lb_Detail1
			// 
			this->lb_Detail1->AutoSize = true;
			this->lb_Detail1->Location = System::Drawing::Point(7, 22);
			this->lb_Detail1->Name = L"lb_Detail1";
			this->lb_Detail1->Size = System::Drawing::Size(21, 13);
			this->lb_Detail1->TabIndex = 0;
			this->lb_Detail1->Text = L"ID:";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->rbEmail);
			this->groupBox3->Controls->Add(this->rbPhone);
			this->groupBox3->Controls->Add(this->rbAddress);
			this->groupBox3->Controls->Add(this->txtBoxSearch);
			this->groupBox3->Controls->Add(this->rbName);
			this->groupBox3->Location = System::Drawing::Point(490, 44);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(382, 77);
			this->groupBox3->TabIndex = 5;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Keyword";
			// 
			// rbEmail
			// 
			this->rbEmail->AutoSize = true;
			this->rbEmail->Location = System::Drawing::Point(203, 17);
			this->rbEmail->Name = L"rbEmail";
			this->rbEmail->Size = System::Drawing::Size(50, 17);
			this->rbEmail->TabIndex = 7;
			this->rbEmail->TabStop = true;
			this->rbEmail->Text = L"Email";
			this->rbEmail->UseVisualStyleBackColor = true;
			// 
			// rbPhone
			// 
			this->rbPhone->AutoSize = true;
			this->rbPhone->Location = System::Drawing::Point(100, 17);
			this->rbPhone->Name = L"rbPhone";
			this->rbPhone->Size = System::Drawing::Size(56, 17);
			this->rbPhone->TabIndex = 5;
			this->rbPhone->TabStop = true;
			this->rbPhone->Text = L"Phone";
			this->rbPhone->UseVisualStyleBackColor = true;
			// 
			// rbAddress
			// 
			this->rbAddress->AutoSize = true;
			this->rbAddress->Location = System::Drawing::Point(305, 17);
			this->rbAddress->Name = L"rbAddress";
			this->rbAddress->Size = System::Drawing::Size(63, 17);
			this->rbAddress->TabIndex = 6;
			this->rbAddress->TabStop = true;
			this->rbAddress->Text = L"Address";
			this->rbAddress->UseVisualStyleBackColor = true;
			// 
			// txtBoxSearch
			// 
			this->txtBoxSearch->Location = System::Drawing::Point(10, 47);
			this->txtBoxSearch->Name = L"txtBoxSearch";
			this->txtBoxSearch->Size = System::Drawing::Size(358, 20);
			this->txtBoxSearch->TabIndex = 3;
			this->txtBoxSearch->TextChanged += gcnew System::EventHandler(this, &formSearch::txtBoxSearch_TextChanged);
			// 
			// rbName
			// 
			this->rbName->AutoSize = true;
			this->rbName->Location = System::Drawing::Point(10, 17);
			this->rbName->Name = L"rbName";
			this->rbName->Size = System::Drawing::Size(53, 17);
			this->rbName->TabIndex = 4;
			this->rbName->TabStop = true;
			this->rbName->Text = L"Name";
			this->rbName->UseVisualStyleBackColor = true;
			// 
			// table_Result
			// 
			this->table_Result->AllowUserToAddRows = false;
			this->table_Result->AllowUserToDeleteRows = false;
			this->table_Result->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->table_Result->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedHeaders;
			this->table_Result->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->table_Result->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8
			});
			this->table_Result->Location = System::Drawing::Point(13, 127);
			this->table_Result->Name = L"table_Result";
			this->table_Result->ReadOnly = true;
			this->table_Result->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToDisplayedHeaders;
			this->table_Result->Size = System::Drawing::Size(859, 283);
			this->table_Result->TabIndex = 6;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"ID";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Column2";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Column3";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Column4";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Column5";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Column6";
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Column7";
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Column8";
			this->Column8->Name = L"Column8";
			this->Column8->ReadOnly = true;
			// 
			// formSearch
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::AliceBlue;
			this->ClientSize = System::Drawing::Size(884, 422);
			this->Controls->Add(this->table_Result);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->lb_Title);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"formSearch";
			this->Text = L"Search";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table_Result))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	// Search by Invoice
	private: System::Void rbInvoice_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		table_Result->Rows->Clear();
		this->cbDetail2->Visible = false;
		this->lb_Detail2->Visible = false;
		this->lb_Detail3->Visible = false;
		this->cbDetail3->Visible = false;

		handling->addItemInCb(cbDetail1, 0, "invoice.txt");

		Column6->Visible = true;
		Column7->Visible = true;
		Column8->Visible = true;
		Column2->HeaderText = L"Date";
		Column3->HeaderText = L"Type";
		Column4->HeaderText = L"Customer";
		Column5->HeaderText = L"Product ID";
		Column6->HeaderText = L"Product Name";
		Column7->HeaderText = L"Quantity";
		Column8->HeaderText = L"Cost";

		rbPhone->Text = "Date";
		rbEmail->Visible = false;
		rbAddress->Visible = false;

	}

	// Search by Customer
	private: System::Void rbCustomer_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		table_Result->Rows->Clear();
		this->cbDetail2->Visible = true;
		this->lb_Detail2->Visible = true;
		this->cbDetail3->Visible = true;
		this->lb_Detail3->Visible = true;

		handling->addItemInCb(cbDetail1, 0, "customers.txt");
		handling->addItemInCb(cbDetail2, 1, "customers.txt");

		Column6->Visible = true;
		Column7->Visible = true;
		Column8->Visible = false;
		Column2->HeaderText = L"First Name";
		Column3->HeaderText = L"Last Name";
		Column4->HeaderText = L"Sex";
		Column5->HeaderText = L"Phone Number";
		Column6->HeaderText = L"Email";
		Column7->HeaderText = L"Address";

		rbPhone->Text = "Phone";
		rbEmail->Visible = true;
		rbAddress->Visible = true;

	}

	// Search by Supplier
	private: System::Void rbSupplier_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		table_Result->Rows->Clear();
		this->cbDetail2->Visible = true;
		this->lb_Detail2->Visible = true;
		this->cbDetail3->Visible = false;
		this->lb_Detail3->Visible = false;

		handling->addItemInCb(cbDetail1, 0, "suppliers.txt");
		handling->addItemInCb(cbDetail2, 1, "suppliers.txt");

		Column2->HeaderText = L"Name";
		Column3->HeaderText = L"Phone Number";
		Column4->HeaderText = L"Email";
		Column5->HeaderText = L"Address";
		Column6->Visible = false;
		Column7->Visible = false;
		Column8->Visible = false;

		rbPhone->Text = "Phone";
		rbEmail->Visible = true;
		rbAddress->Visible = true;
	}

	// Search by Product
	private: System::Void rbProduct_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		table_Result->Rows->Clear();
		this->cbDetail2->Visible = true;
		this->lb_Detail2->Visible = true;
		this->cbDetail3->Visible = false;
		this->lb_Detail3->Visible = false;

		handling->addItemInCb(cbDetail1, 0, "products.txt");
		handling->addItemInCb(cbDetail2, 1, "products.txt");

		Column2->HeaderText = L"Name";
		Column3->HeaderText = L"Supplier ID";
		Column4->HeaderText = L"Unit";
		Column5->HeaderText = L"Note";
		Column6->Visible = false;
		Column7->Visible = false;
		Column8->Visible = false;

		rbPhone->Text = "Supplier ID";
		rbEmail->Visible = false;
		rbAddress->Visible = false;

	}

	private: System::Void cbDetail1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		table_Result->Rows->Clear();
		if (rbInvoice->Checked)
			handling->getInfoFromCbToDG(cbDetail1, table_Result, 0, "invoice_detail.txt");
		else if (rbCustomer->Checked)
			handling->getInfoFromCbToDG(cbDetail1, table_Result, 0, "customers.txt");
		else if (rbSupplier->Checked)
			handling->getInfoFromCbToDG(cbDetail1, table_Result, 0, "suppliers.txt");
		else if (rbProduct->Checked)
			handling->getInfoFromCbToDG(cbDetail1, table_Result, 0, "products.txt");
	}

	private: System::Void cbDetail3_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		table_Result->Rows->Clear();
		handling->getInfoFromCbToDG(cbDetail3, table_Result, 3, "customers.txt");
	}

	private: System::Void cbDetail2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		table_Result->Rows->Clear();
		if (rbCustomer->Checked)
			handling->getInfoFromCbToDG(cbDetail2, table_Result, 1, "customers.txt");
		else if (rbSupplier->Checked)
			handling->getInfoFromCbToDG(cbDetail2, table_Result, 1, "suppliers.txt");
		else if (rbProduct->Checked)
			handling->getInfoFromCbToDG(cbDetail2, table_Result, 1, "products.txt");
	}

	private: System::Void txtBoxSearch_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		table_Result->Rows->Clear();
		if (rbCustomer->Checked)
		{
			if (rbName->Checked)
			{
				handling->getInfoFromTboxToDG(txtBoxSearch, table_Result, 1, "customers.txt");
				//handling->getInfoFromTboxToDG(txtBoxSearch, table_Result, 2, "customers.txt");
			}
			else if (rbPhone->Checked)
				handling->getInfoFromTboxToDG(txtBoxSearch, table_Result, 4, "customers.txt");
			else if (rbEmail->Checked)
				handling->getInfoFromTboxToDG(txtBoxSearch, table_Result, 5, "customers.txt");
			else if (rbAddress->Checked)
				handling->getInfoFromTboxToDG(txtBoxSearch, table_Result, 6, "customers.txt");
		}
		else if (rbSupplier->Checked)
		{
			if (rbName->Checked)
				handling->getInfoFromTboxToDG(txtBoxSearch, table_Result, 1, "suppliers.txt");
			else if (rbPhone->Checked)
				handling->getInfoFromTboxToDG(txtBoxSearch, table_Result, 2, "suppliers.txt");
			else if (rbEmail->Checked)
				handling->getInfoFromTboxToDG(txtBoxSearch, table_Result, 3, "suppliers.txt");
			else if (rbAddress->Checked)
				handling->getInfoFromTboxToDG(txtBoxSearch, table_Result, 4, "suppliers.txt");
		}
		else if (rbProduct->Checked)
		{
			if (rbName->Checked)
				handling->getInfoFromTboxToDG(txtBoxSearch, table_Result, 1, "products.txt");
			else if (rbPhone->Checked)
				handling->getInfoFromTboxToDG(txtBoxSearch, table_Result, 2, "products.txt");
		}
		else
		{
			if (rbName->Checked)
				handling->getInfoFromTboxToDG(txtBoxSearch, table_Result, 3, "invoice_detail.txt");
			else if (rbPhone->Checked)
				handling->getInfoFromTboxToDG(txtBoxSearch, table_Result, 1, "invoice_detail.txt");
		}
	}

};
}
