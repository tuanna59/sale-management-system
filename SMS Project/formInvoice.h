#pragma once
#include "formSearch.h"
#include "stdafx.h"
namespace SMSProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for formInvoice
	/// </summary>
	public ref class formInvoice : public System::Windows::Forms::Form
	{
	public:
		GlobalFunction *handling = new GlobalFunction();
		formInvoice(void)
		{
			InitializeComponent();
			handling->showToDataGridView(table_Invoice, "invoice.txt");
			handling->showToDataGridView(table_InvoiceDetail, "invoice_detail.txt");
	
			this->datePicker1->Format = DateTimePickerFormat::Short;
			StartPosition = FormStartPosition::CenterScreen;
			this->AcceptButton = bt_Add;

			this->table_Invoice->RowsDefaultCellStyle->BackColor = Color::LightBlue;
			this->table_Invoice->AlternatingRowsDefaultCellStyle->BackColor = Color::AliceBlue;
			this->table_Invoice->SelectionMode = DataGridViewSelectionMode::FullRowSelect;

			this->table_InvoiceDetail->RowsDefaultCellStyle->BackColor = Color::LightBlue;
			this->table_InvoiceDetail->AlternatingRowsDefaultCellStyle->BackColor = Color::AliceBlue;
			this->table_InvoiceDetail->SelectionMode = DataGridViewSelectionMode::FullRowSelect;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~formInvoice()
		{
			if (components)
			{
				delete components;
			}
		}
	
	protected:
	// Create Objects
	private: System::Windows::Forms::GroupBox^  groupBox1;

	private: System::Windows::Forms::TextBox^  txtBoxID;
	private: System::Windows::Forms::Label^  lb_Date;
	private: System::Windows::Forms::Label^  lb_ID;
	private: System::Windows::Forms::Label^  lb_Type;
	private: System::Windows::Forms::ComboBox^  cbBoxType;
	private: System::Windows::Forms::Label^  lb_Dynamic;
	private: System::Windows::Forms::DataGridView^  table_Invoice;
	private: System::Windows::Forms::Label^  lb_Title;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::TextBox^  txtBoxSearch;
	private: System::Windows::Forms::Button^  bt_AdvancedSearch;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Button^  bt_Reset;
	private: System::Windows::Forms::Button^  bt_Add;
	private: System::Windows::Forms::Button^  bt_Cancel;
	private: System::Windows::Forms::Button^  bt_Edit;
	private: System::Windows::Forms::Label^  lb_Cost;
	private: System::Windows::Forms::TextBox^  txtBoxCost;
	private: System::Windows::Forms::NumericUpDown^  numBoxQuantity;
	private: System::Windows::Forms::Label^  lb_Product;
	private: System::Windows::Forms::Label^  lb_Dynamic2;
	private: System::Windows::Forms::TextBox^  txtBoxDynamic;
	private: System::Windows::Forms::ComboBox^  cbBoxProductID;
	private: System::Windows::Forms::ComboBox^  cbBoxDynamic;
	private: System::Windows::Forms::TextBox^  txtBoxProductName;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  lb_Quantity;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::DateTimePicker^  datePicker1;
	private: System::Windows::Forms::DataGridView^  table_InvoiceDetail;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewButtonColumn^  Column9;
	private: System::Windows::Forms::DataGridViewButtonColumn^  Column10;

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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(formInvoice::typeid));
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->table_Invoice = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->lb_Title = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->datePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->cbBoxDynamic = (gcnew System::Windows::Forms::ComboBox());
			this->txtBoxDynamic = (gcnew System::Windows::Forms::TextBox());
			this->lb_Dynamic2 = (gcnew System::Windows::Forms::Label());
			this->lb_Dynamic = (gcnew System::Windows::Forms::Label());
			this->cbBoxType = (gcnew System::Windows::Forms::ComboBox());
			this->lb_ID = (gcnew System::Windows::Forms::Label());
			this->lb_Type = (gcnew System::Windows::Forms::Label());
			this->lb_Date = (gcnew System::Windows::Forms::Label());
			this->txtBoxID = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->bt_AdvancedSearch = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtBoxSearch = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->lb_Quantity = (gcnew System::Windows::Forms::Label());
			this->txtBoxProductName = (gcnew System::Windows::Forms::TextBox());
			this->bt_Cancel = (gcnew System::Windows::Forms::Button());
			this->bt_Reset = (gcnew System::Windows::Forms::Button());
			this->cbBoxProductID = (gcnew System::Windows::Forms::ComboBox());
			this->bt_Edit = (gcnew System::Windows::Forms::Button());
			this->bt_Add = (gcnew System::Windows::Forms::Button());
			this->lb_Cost = (gcnew System::Windows::Forms::Label());
			this->txtBoxCost = (gcnew System::Windows::Forms::TextBox());
			this->numBoxQuantity = (gcnew System::Windows::Forms::NumericUpDown());
			this->lb_Product = (gcnew System::Windows::Forms::Label());
			this->table_InvoiceDetail = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table_Invoice))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numBoxQuantity))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table_InvoiceDetail))->BeginInit();
			this->SuspendLayout();
			// 
			// table_Invoice
			// 
			this->table_Invoice->AllowUserToAddRows = false;
			this->table_Invoice->AllowUserToDeleteRows = false;
			this->table_Invoice->AllowUserToResizeColumns = false;
			this->table_Invoice->AllowUserToResizeRows = false;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->table_Invoice->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->table_Invoice->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column9, this->Column10
			});
			this->table_Invoice->Location = System::Drawing::Point(16, 42);
			this->table_Invoice->Name = L"table_Invoice";
			this->table_Invoice->ReadOnly = true;
			this->table_Invoice->RowHeadersWidth = 24;
			this->table_Invoice->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->table_Invoice->RowTemplate->DefaultCellStyle->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->table_Invoice->Size = System::Drawing::Size(460, 162);
			this->table_Invoice->TabIndex = 4;
			this->table_Invoice->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &formInvoice::table_Invoice_CellClick);
			this->table_Invoice->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &formInvoice::table_Invoice_CellContentClick);
			this->table_Invoice->CellFormatting += gcnew System::Windows::Forms::DataGridViewCellFormattingEventHandler(this, &formInvoice::table_Invoice_CellFormatting);
			this->table_Invoice->CurrentCellChanged += gcnew System::EventHandler(this, &formInvoice::table_Invoice_CurrentCellChanged);
			this->table_Invoice->RowHeaderMouseClick += gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &formInvoice::table_Invoice_RowHeaderMouseClick);
			// 
			// Column1
			// 
			this->Column1->FillWeight = 68.33714F;
			this->Column1->HeaderText = L"ID";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 60;
			// 
			// Column2
			// 
			this->Column2->FillWeight = 103.853F;
			this->Column2->HeaderText = L"Date";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 70;
			// 
			// Column3
			// 
			this->Column3->FillWeight = 75.97922F;
			this->Column3->HeaderText = L"Type";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 50;
			// 
			// Column4
			// 
			this->Column4->FillWeight = 226.6668F;
			this->Column4->HeaderText = L"Customer/Supplier ID";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			this->Column4->Width = 138;
			// 
			// Column9
			// 
			this->Column9->FillWeight = 41.25781F;
			this->Column9->HeaderText = L"Edit";
			this->Column9->Name = L"Column9";
			this->Column9->ReadOnly = true;
			this->Column9->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->Column9->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			this->Column9->Width = 41;
			// 
			// Column10
			// 
			this->Column10->FillWeight = 83.90607F;
			this->Column10->HeaderText = L"Remove";
			this->Column10->Name = L"Column10";
			this->Column10->ReadOnly = true;
			this->Column10->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->Column10->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			this->Column10->Width = 58;
			// 
			// lb_Title
			// 
			this->lb_Title->BackColor = System::Drawing::Color::Transparent;
			this->lb_Title->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold));
			this->lb_Title->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lb_Title->Location = System::Drawing::Point(0, 1);
			this->lb_Title->Name = L"lb_Title";
			this->lb_Title->Size = System::Drawing::Size(882, 40);
			this->lb_Title->TabIndex = 1;
			this->lb_Title->Text = L"Invoice Management";
			this->lb_Title->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->datePicker1);
			this->groupBox1->Controls->Add(this->cbBoxDynamic);
			this->groupBox1->Controls->Add(this->txtBoxDynamic);
			this->groupBox1->Controls->Add(this->lb_Dynamic2);
			this->groupBox1->Controls->Add(this->lb_Dynamic);
			this->groupBox1->Controls->Add(this->cbBoxType);
			this->groupBox1->Controls->Add(this->lb_ID);
			this->groupBox1->Controls->Add(this->lb_Type);
			this->groupBox1->Controls->Add(this->lb_Date);
			this->groupBox1->Controls->Add(this->txtBoxID);
			this->groupBox1->Location = System::Drawing::Point(482, 122);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(390, 83);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Add Invoice";
			// 
			// datePicker1
			// 
			this->datePicker1->Location = System::Drawing::Point(277, 18);
			this->datePicker1->Name = L"datePicker1";
			this->datePicker1->Size = System::Drawing::Size(103, 20);
			this->datePicker1->TabIndex = 2;
			// 
			// cbBoxDynamic
			// 
			this->cbBoxDynamic->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbBoxDynamic->FormattingEnabled = true;
			this->cbBoxDynamic->Location = System::Drawing::Point(71, 53);
			this->cbBoxDynamic->Name = L"cbBoxDynamic";
			this->cbBoxDynamic->Size = System::Drawing::Size(59, 21);
			this->cbBoxDynamic->TabIndex = 3;
			this->cbBoxDynamic->SelectedIndexChanged += gcnew System::EventHandler(this, &formInvoice::cbBoxCustomer_SelectedIndexChanged);
			// 
			// txtBoxDynamic
			// 
			this->txtBoxDynamic->Location = System::Drawing::Point(242, 54);
			this->txtBoxDynamic->Name = L"txtBoxDynamic";
			this->txtBoxDynamic->ReadOnly = true;
			this->txtBoxDynamic->Size = System::Drawing::Size(138, 20);
			this->txtBoxDynamic->TabIndex = 13;
			this->txtBoxDynamic->TabStop = false;
			// 
			// lb_Dynamic2
			// 
			this->lb_Dynamic2->AutoSize = true;
			this->lb_Dynamic2->Location = System::Drawing::Point(141, 57);
			this->lb_Dynamic2->Name = L"lb_Dynamic2";
			this->lb_Dynamic2->Size = System::Drawing::Size(85, 13);
			this->lb_Dynamic2->TabIndex = 12;
			this->lb_Dynamic2->Text = L"Customer Name:";
			// 
			// lb_Dynamic
			// 
			this->lb_Dynamic->AutoSize = true;
			this->lb_Dynamic->Location = System::Drawing::Point(3, 57);
			this->lb_Dynamic->Name = L"lb_Dynamic";
			this->lb_Dynamic->Size = System::Drawing::Size(68, 13);
			this->lb_Dynamic->TabIndex = 10;
			this->lb_Dynamic->Text = L"Customer ID:";
			// 
			// cbBoxType
			// 
			this->cbBoxType->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbBoxType->FormattingEnabled = true;
			this->cbBoxType->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Buy", L"Sell" });
			this->cbBoxType->Location = System::Drawing::Point(176, 17);
			this->cbBoxType->Name = L"cbBoxType";
			this->cbBoxType->Size = System::Drawing::Size(58, 21);
			this->cbBoxType->TabIndex = 1;
			this->cbBoxType->SelectedIndexChanged += gcnew System::EventHandler(this, &formInvoice::cbBoxType_SelectedIndexChanged);
			// 
			// lb_ID
			// 
			this->lb_ID->AutoSize = true;
			this->lb_ID->Location = System::Drawing::Point(5, 22);
			this->lb_ID->Name = L"lb_ID";
			this->lb_ID->Size = System::Drawing::Size(59, 13);
			this->lb_ID->TabIndex = 7;
			this->lb_ID->Text = L"Invoice ID:";
			// 
			// lb_Type
			// 
			this->lb_Type->AutoSize = true;
			this->lb_Type->Location = System::Drawing::Point(141, 22);
			this->lb_Type->Name = L"lb_Type";
			this->lb_Type->Size = System::Drawing::Size(34, 13);
			this->lb_Type->TabIndex = 6;
			this->lb_Type->Text = L"Type:";
			// 
			// lb_Date
			// 
			this->lb_Date->AutoSize = true;
			this->lb_Date->Location = System::Drawing::Point(240, 22);
			this->lb_Date->Name = L"lb_Date";
			this->lb_Date->Size = System::Drawing::Size(33, 13);
			this->lb_Date->TabIndex = 3;
			this->lb_Date->Text = L"Date:";
			// 
			// txtBoxID
			// 
			this->txtBoxID->Location = System::Drawing::Point(71, 18);
			this->txtBoxID->Name = L"txtBoxID";
			this->txtBoxID->Size = System::Drawing::Size(59, 20);
			this->txtBoxID->TabIndex = 0;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->bt_AdvancedSearch);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->txtBoxSearch);
			this->groupBox2->Location = System::Drawing::Point(482, 43);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(390, 70);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Quick Search";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(69, 17);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(215, 13);
			this->label2->TabIndex = 26;
			this->label2->Text = L"Customer/Supplier Name OR Product Name";
			// 
			// bt_AdvancedSearch
			// 
			this->bt_AdvancedSearch->Location = System::Drawing::Point(242, 35);
			this->bt_AdvancedSearch->Name = L"bt_AdvancedSearch";
			this->bt_AdvancedSearch->Size = System::Drawing::Size(138, 23);
			this->bt_AdvancedSearch->TabIndex = 3;
			this->bt_AdvancedSearch->Text = L"Advanced Search";
			this->bt_AdvancedSearch->UseVisualStyleBackColor = true;
			this->bt_AdvancedSearch->Click += gcnew System::EventHandler(this, &formInvoice::bt_AdvancedSearch_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(6, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 13);
			this->label1->TabIndex = 25;
			this->label1->Text = L"Keyword:";
			// 
			// txtBoxSearch
			// 
			this->txtBoxSearch->Location = System::Drawing::Point(5, 37);
			this->txtBoxSearch->Name = L"txtBoxSearch";
			this->txtBoxSearch->Size = System::Drawing::Size(229, 20);
			this->txtBoxSearch->TabIndex = 1;
			this->txtBoxSearch->TextChanged += gcnew System::EventHandler(this, &formInvoice::txtBoxSearch_TextChanged);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->lb_Quantity);
			this->groupBox3->Controls->Add(this->txtBoxProductName);
			this->groupBox3->Controls->Add(this->bt_Cancel);
			this->groupBox3->Controls->Add(this->bt_Reset);
			this->groupBox3->Controls->Add(this->cbBoxProductID);
			this->groupBox3->Controls->Add(this->bt_Edit);
			this->groupBox3->Controls->Add(this->bt_Add);
			this->groupBox3->Controls->Add(this->lb_Cost);
			this->groupBox3->Controls->Add(this->txtBoxCost);
			this->groupBox3->Controls->Add(this->numBoxQuantity);
			this->groupBox3->Controls->Add(this->lb_Product);
			this->groupBox3->Location = System::Drawing::Point(668, 221);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(204, 178);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Detail";
			// 
			// lb_Quantity
			// 
			this->lb_Quantity->AutoSize = true;
			this->lb_Quantity->Location = System::Drawing::Point(6, 79);
			this->lb_Quantity->Name = L"lb_Quantity";
			this->lb_Quantity->Size = System::Drawing::Size(49, 13);
			this->lb_Quantity->TabIndex = 26;
			this->lb_Quantity->Text = L"Quantity:";
			// 
			// txtBoxProductName
			// 
			this->txtBoxProductName->Location = System::Drawing::Point(58, 45);
			this->txtBoxProductName->Name = L"txtBoxProductName";
			this->txtBoxProductName->ReadOnly = true;
			this->txtBoxProductName->Size = System::Drawing::Size(136, 20);
			this->txtBoxProductName->TabIndex = 25;
			this->txtBoxProductName->TabStop = false;
			// 
			// bt_Cancel
			// 
			this->bt_Cancel->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bt_Cancel.Image")));
			this->bt_Cancel->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bt_Cancel->Location = System::Drawing::Point(115, 145);
			this->bt_Cancel->Name = L"bt_Cancel";
			this->bt_Cancel->Size = System::Drawing::Size(60, 23);
			this->bt_Cancel->TabIndex = 5;
			this->bt_Cancel->Text = L"Cancel";
			this->bt_Cancel->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->bt_Cancel->UseVisualStyleBackColor = true;
			this->bt_Cancel->Visible = false;
			this->bt_Cancel->Click += gcnew System::EventHandler(this, &formInvoice::bt_Cancel_Click);
			// 
			// bt_Reset
			// 
			this->bt_Reset->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bt_Reset.Image")));
			this->bt_Reset->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bt_Reset->Location = System::Drawing::Point(115, 145);
			this->bt_Reset->Name = L"bt_Reset";
			this->bt_Reset->Size = System::Drawing::Size(60, 23);
			this->bt_Reset->TabIndex = 5;
			this->bt_Reset->Text = L"Reset";
			this->bt_Reset->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->bt_Reset->UseVisualStyleBackColor = true;
			this->bt_Reset->Click += gcnew System::EventHandler(this, &formInvoice::bt_Reset_Click);
			// 
			// cbBoxProductID
			// 
			this->cbBoxProductID->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbBoxProductID->FormattingEnabled = true;
			this->cbBoxProductID->Location = System::Drawing::Point(58, 20);
			this->cbBoxProductID->Name = L"cbBoxProductID";
			this->cbBoxProductID->Size = System::Drawing::Size(64, 21);
			this->cbBoxProductID->TabIndex = 1;
			this->cbBoxProductID->SelectedIndexChanged += gcnew System::EventHandler(this, &formInvoice::cbBoxProduct_SelectedIndexChanged);
			// 
			// bt_Edit
			// 
			this->bt_Edit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bt_Edit.Image")));
			this->bt_Edit->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bt_Edit->Location = System::Drawing::Point(29, 145);
			this->bt_Edit->Name = L"bt_Edit";
			this->bt_Edit->Size = System::Drawing::Size(58, 23);
			this->bt_Edit->TabIndex = 4;
			this->bt_Edit->Text = L"Edit";
			this->bt_Edit->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->bt_Edit->UseVisualStyleBackColor = true;
			this->bt_Edit->Visible = false;
			this->bt_Edit->Click += gcnew System::EventHandler(this, &formInvoice::bt_Edit_Click);
			// 
			// bt_Add
			// 
			this->bt_Add->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bt_Add.Image")));
			this->bt_Add->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bt_Add->Location = System::Drawing::Point(29, 145);
			this->bt_Add->Name = L"bt_Add";
			this->bt_Add->Size = System::Drawing::Size(58, 23);
			this->bt_Add->TabIndex = 4;
			this->bt_Add->Text = L"Add";
			this->bt_Add->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->bt_Add->UseVisualStyleBackColor = true;
			this->bt_Add->Click += gcnew System::EventHandler(this, &formInvoice::bt_Add_Click);
			// 
			// lb_Cost
			// 
			this->lb_Cost->AutoSize = true;
			this->lb_Cost->Location = System::Drawing::Point(6, 111);
			this->lb_Cost->Name = L"lb_Cost";
			this->lb_Cost->Size = System::Drawing::Size(31, 13);
			this->lb_Cost->TabIndex = 21;
			this->lb_Cost->Text = L"Cost:";
			// 
			// txtBoxCost
			// 
			this->txtBoxCost->Location = System::Drawing::Point(59, 108);
			this->txtBoxCost->Name = L"txtBoxCost";
			this->txtBoxCost->Size = System::Drawing::Size(71, 20);
			this->txtBoxCost->TabIndex = 3;
			// 
			// numBoxQuantity
			// 
			this->numBoxQuantity->Location = System::Drawing::Point(59, 77);
			this->numBoxQuantity->Name = L"numBoxQuantity";
			this->numBoxQuantity->Size = System::Drawing::Size(51, 20);
			this->numBoxQuantity->TabIndex = 2;
			// 
			// lb_Product
			// 
			this->lb_Product->AutoSize = true;
			this->lb_Product->Location = System::Drawing::Point(6, 23);
			this->lb_Product->Name = L"lb_Product";
			this->lb_Product->Size = System::Drawing::Size(47, 13);
			this->lb_Product->TabIndex = 18;
			this->lb_Product->Text = L"Product:";
			// 
			// table_InvoiceDetail
			// 
			this->table_InvoiceDetail->AllowUserToAddRows = false;
			this->table_InvoiceDetail->AllowUserToDeleteRows = false;
			this->table_InvoiceDetail->AllowUserToResizeColumns = false;
			this->table_InvoiceDetail->AllowUserToResizeRows = false;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->table_InvoiceDetail->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->table_InvoiceDetail->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5,
					this->Column5, this->dataGridViewTextBoxColumn6, this->dataGridViewTextBoxColumn7
			});
			this->table_InvoiceDetail->Location = System::Drawing::Point(16, 211);
			this->table_InvoiceDetail->Name = L"table_InvoiceDetail";
			this->table_InvoiceDetail->ReadOnly = true;
			this->table_InvoiceDetail->RowHeadersWidth = 24;
			this->table_InvoiceDetail->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->table_InvoiceDetail->RowTemplate->DefaultCellStyle->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->table_InvoiceDetail->Size = System::Drawing::Size(641, 200);
			this->table_InvoiceDetail->TabIndex = 5;
			this->table_InvoiceDetail->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &formInvoice::table_InvoiceDetail_CellContentClick);
			this->table_InvoiceDetail->RowHeaderMouseClick += gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &formInvoice::table_InvoiceDetail_RowHeaderMouseClick);
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"ID";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			this->dataGridViewTextBoxColumn1->Width = 60;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Date";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			this->dataGridViewTextBoxColumn2->Width = 70;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"Type";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			this->dataGridViewTextBoxColumn3->Width = 50;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"Customer/Supplier Name";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->ReadOnly = true;
			this->dataGridViewTextBoxColumn4->Width = 140;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"Product ID";
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->ReadOnly = true;
			this->dataGridViewTextBoxColumn5->Width = 72;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Product Name";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			this->Column5->Width = 105;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"Quantity";
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->ReadOnly = true;
			this->dataGridViewTextBoxColumn6->Width = 50;
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->HeaderText = L"Cost";
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			this->dataGridViewTextBoxColumn7->ReadOnly = true;
			this->dataGridViewTextBoxColumn7->Width = 51;
			// 
			// formInvoice
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::AliceBlue;
			this->ClientSize = System::Drawing::Size(884, 422);
			this->Controls->Add(this->table_InvoiceDetail);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->lb_Title);
			this->Controls->Add(this->table_Invoice);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"formInvoice";
			this->Text = L"Invoice";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table_Invoice))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numBoxQuantity))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table_InvoiceDetail))->EndInit();
			this->ResumeLayout(false);

		}



#pragma endregion	// Create event for Objects
	// Get value from textbox, then convert to cstring
	private: string getStringFromAllTextBox1() {
		String ^tmp;
		tmp = txtBoxID->Text + "|" + datePicker1->Text + "|" + cbBoxType->Text + "|" + cbBoxDynamic->Text;
		return handling->MarshalString(tmp);
	}
	private: string getStringFromAllTextBox2() {
		String ^tmp;
		tmp = txtBoxID->Text + "|" + datePicker1->Text + "|" + cbBoxType->Text + "|" + txtBoxDynamic->Text + "|"
			+ cbBoxProductID->Text + "|" + txtBoxProductName->Text + "|" + numBoxQuantity->Text + "|" + txtBoxCost->Text;
		return handling->MarshalString(tmp);
	}

	// Check Input
	private: bool checkInput(string str, int i) {
		if (txtBoxID->Text == "" || cbBoxType->Text == "" || cbBoxDynamic->Text == "" || cbBoxProductID->Text == "" || numBoxQuantity->Text == "" || txtBoxCost->Text == "")
		{
			MessageBox::Show("Please Fill All TextBox", "Input is INVALID!!!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return false;
		}
		if (i == 1)
		{
			if (!handling->checkID(table_Invoice, GlobalFunction::split(str, 0)))
				return false;
		}
		if (!handling->checkNumber(GlobalFunction::split(str, 7)))
		{
			MessageBox::Show("Cost is a number. Please mofify...", "Input is INVALID!!!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return false;
		}
		return true;
	}

	// Add button's Event
	private: System::Void bt_Add_Click(System::Object^  sender, System::EventArgs^  e) {
		string str1 = getStringFromAllTextBox1();
		string str2 = getStringFromAllTextBox2();

		if(checkInput(str2,1))
		{
			Template<Invoice> *arr1 = new Template<Invoice>();
			Template<DetailedInvoice> *arr2 = new Template<DetailedInvoice>();
			
			arr1->addAndWrite("invoice.txt", str1);
			arr2->addAndWrite("invoice_detail.txt", str2);

			table_Invoice->Rows->Add(txtBoxID->Text, datePicker1->Text, cbBoxType->Text, cbBoxDynamic->Text);
			table_InvoiceDetail->Rows->Add(txtBoxID->Text, datePicker1->Text, cbBoxType->Text, txtBoxDynamic->Text, cbBoxProductID->Text, txtBoxProductName->Text, numBoxQuantity->Text, txtBoxCost->Text);
			bt_Reset_Click(sender, e);
		}
	}

	//Reset Button's Event
	private: System::Void bt_Reset_Click(System::Object^  sender, System::EventArgs^  e) {
		this->txtBoxID->Clear();	this->cbBoxType->ResetText();	this->cbBoxDynamic->ResetText();
		this->cbBoxProductID->ResetText();	this->txtBoxCost->Clear();	this->numBoxQuantity->ResetText();
	}

	//Edit button's Event
	private: System::Void bt_Edit_Click(System::Object^  sender, System::EventArgs^  e) {
		string str1 = getStringFromAllTextBox1(); // Get All Info
		string str2 = getStringFromAllTextBox2(); // Get All Info

		if (checkInput(str2,0)) // Check Info
		{
			Template<Invoice> *arr1 = new Template<Invoice>();
			Template<DetailedInvoice> *arr2 = new Template<DetailedInvoice>();
			arr1->edit(table_Invoice->CurrentRow->Index, str1, "invoice.txt");
			arr2->edit(table_Invoice->CurrentRow->Index, str2, "invoice_detail.txt");

			table_Invoice->CurrentRow->SetValues(txtBoxID->Text, datePicker1->Text, cbBoxType->Text, cbBoxDynamic->Text);
			table_InvoiceDetail->CurrentRow->SetValues(txtBoxID->Text, datePicker1->Text, cbBoxType->Text, txtBoxDynamic->Text,
				cbBoxProductID->Text, txtBoxProductName->Text, numBoxQuantity->Text, txtBoxCost->Text);

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

	// Combobox Type's Event
	private: System::Void cbBoxType_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		if (cbBoxType->Text == "Buy")
		{
			lb_Dynamic->Text = "Supplier ID: ";
			lb_Dynamic2->Text = "Supplier Name: ";
			handling->addItemInCb(cbBoxDynamic, 0, "suppliers.txt");
		} else {
			lb_Dynamic->Text = "Customer ID: ";
			lb_Dynamic2->Text = "Customer Name: ";
			handling->addItemInCb(cbBoxDynamic, 0, "customers.txt");
			handling->addItemInCb(cbBoxProductID, 0, "products.txt");
		}
	}

	// Add Item to combobox Customer/Supplier ID
	private: System::Void cbBoxCustomer_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		if (lb_Dynamic->Text == "Supplier ID: ")
		{
			handling->getInfoFromKey(cbBoxDynamic, txtBoxDynamic, 0, 1, "suppliers.txt");
			handling->addItemInCb(cbBoxProductID, cbBoxDynamic, 2, 0, "products.txt");
		}
		else
			handling->getInfoFromKey(cbBoxDynamic, txtBoxDynamic, 0, 1, "customers.txt");
	}

	// Add Item to combobox Product
	private: System::Void cbBoxProduct_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		handling->getInfoFromKey(cbBoxProductID, txtBoxProductName, 0, 1, "products.txt");
	}

	// Create Edit and Remove button (table)
	private: System::Void table_Invoice_CellFormatting(System::Object^  sender, System::Windows::Forms::DataGridViewCellFormattingEventArgs^  e) {
		table_Invoice->Rows[e->RowIndex]->Cells[4]->Value = "Edit";
		table_Invoice->Rows[e->RowIndex]->Cells[5]->Value = "Remove";
	}

	// Edit and Remove (table) 's Event
	private: System::Void table_Invoice_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		if (e->ColumnIndex == 4) // The index of Edit button is 4
		{
			txtBoxID->Text = table_Invoice->Rows[e->RowIndex]->Cells[0]->Value->ToString();
			cbBoxType->Text = table_Invoice->Rows[e->RowIndex]->Cells[2]->Value->ToString();
			cbBoxDynamic->Text = table_Invoice->Rows[e->RowIndex]->Cells[3]->Value->ToString();
			cbBoxProductID->Text = table_InvoiceDetail->Rows[e->RowIndex]->Cells[4]->Value->ToString();
			numBoxQuantity->Text = table_InvoiceDetail->Rows[e->RowIndex]->Cells[6]->Value->ToString();
			txtBoxCost->Text = table_InvoiceDetail->Rows[e->RowIndex]->Cells[7]->Value->ToString();
			txtBoxID->ReadOnly = true;
			bt_Add->Visible = false;
			bt_Reset->Visible = false;
			this->bt_Cancel->Visible = true;
			this->bt_Edit->Visible = true;
		} else if (e->ColumnIndex == 5) // The index of Edit button is 5
		{
			if (bt_Edit->Visible == false) {
				if (MessageBox::Show("Do you want to delete this ? ", "Warning!!!", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) 
				{
					handling->removeFromDataGridView(table_Invoice);
					handling->removeFromDataGridView(table_InvoiceDetail);
					Template<Invoice> *arr1 = new Template<Invoice>();
					Template<DetailedInvoice> *arr2 = new Template<DetailedInvoice>();	
					arr1->removeAndWrite(e->RowIndex, "invoice.txt");
					arr2->removeAndWrite(e->RowIndex, "invoice_detail.txt");
				}
			} else
				MessageBox::Show("Remove is not available when Edit is Enabling", "Function Not Available", MessageBoxButtons::OK, MessageBoxIcon::Hand);
		}
	}
	
	private: System::Void table_Invoice_CurrentCellChanged(System::Object^  sender, System::EventArgs^  e) {
		bt_Cancel_Click(sender, e);
	}

	// Linking 2 table
	private: System::Void table_Invoice_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		handling->table_connected(table_InvoiceDetail, table_Invoice);
	}
	// Linking 2 table
	private: System::Void table_Invoice_RowHeaderMouseClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellMouseEventArgs^  e) {
		handling->table_connected(table_InvoiceDetail, table_Invoice);
	}
	// Linking 2 table
	private: System::Void table_InvoiceDetail_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		handling->table_connected(table_Invoice, table_InvoiceDetail);
	}
	// Linking 2 table
	private: System::Void table_InvoiceDetail_RowHeaderMouseClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellMouseEventArgs^  e) {
		handling->table_connected(table_Invoice, table_InvoiceDetail);
	}

	// TextBox Search's Event
	private: System::Void txtBoxSearch_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		handling->searchFromTextbox(table_InvoiceDetail, 3, 5, txtBoxSearch);
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
