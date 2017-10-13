#pragma once
#include "GlobalFunction.h"
namespace SMSProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for formStatistical
	/// </summary>
	public ref class formStatistical : public System::Windows::Forms::Form
	{
		GlobalFunction *handling = new GlobalFunction();
	public:
		formStatistical(void)
		{
			InitializeComponent();
			StartPosition = FormStartPosition::CenterScreen;

			this->table_Invoice->RowsDefaultCellStyle->BackColor = Color::LightBlue;
			this->table_Invoice->AlternatingRowsDefaultCellStyle->BackColor = Color::AliceBlue;
			this->table_Invoice->SelectionMode = DataGridViewSelectionMode::FullRowSelect;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~formStatistical()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lb_Title;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::DataGridView^  table_Invoice;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column7;
	private: System::Windows::Forms::RadioButton^  radioButton;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button1;


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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->lb_Title = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->table_Invoice = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table_Invoice))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// lb_Title
			// 
			this->lb_Title->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold));
			this->lb_Title->Location = System::Drawing::Point(3, 1);
			this->lb_Title->Name = L"lb_Title";
			this->lb_Title->Size = System::Drawing::Size(882, 41);
			this->lb_Title->TabIndex = 3;
			this->lb_Title->Text = L"Invoice Statistical";
			this->lb_Title->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Location = System::Drawing::Point(12, 339);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(119, 71);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Type of Invoice";
			// 
			// radioButton
			// 
			this->radioButton->AutoSize = true;
			this->radioButton->Location = System::Drawing::Point(6, 19);
			this->radioButton->Name = L"radioButton";
			this->radioButton->Size = System::Drawing::Size(36, 17);
			this->radioButton->TabIndex = 0;
			this->radioButton->TabStop = true;
			this->radioButton->Text = L"All";
			this->radioButton->UseVisualStyleBackColor = true;
			this->radioButton->CheckedChanged += gcnew System::EventHandler(this, &formStatistical::radioButton_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(57, 42);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(42, 17);
			this->radioButton2->TabIndex = 2;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Sell";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &formStatistical::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(57, 19);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(43, 17);
			this->radioButton1->TabIndex = 1;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Buy";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &formStatistical::radioButton1_CheckedChanged);
			// 
			// table_Invoice
			// 
			this->table_Invoice->AllowUserToAddRows = false;
			this->table_Invoice->AllowUserToDeleteRows = false;
			this->table_Invoice->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->table_Invoice->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->table_Invoice->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Column1,
					this->Column2, this->Column4, this->Column3, this->Column5, this->Column8, this->Column6, this->Column7
			});
			this->table_Invoice->Location = System::Drawing::Point(12, 45);
			this->table_Invoice->Name = L"table_Invoice";
			this->table_Invoice->ReadOnly = true;
			this->table_Invoice->RowHeadersVisible = false;
			this->table_Invoice->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToFirstHeader;
			this->table_Invoice->RowTemplate->DefaultCellStyle->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->table_Invoice->Size = System::Drawing::Size(860, 288);
			this->table_Invoice->TabIndex = 5;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"ID";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Date";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Type";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Customer";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Product ID";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Product Name";
			this->Column8->Name = L"Column8";
			this->Column8->ReadOnly = true;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Quantity";
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Cost";
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Location = System::Drawing::Point(687, 340);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(185, 70);
			this->groupBox2->TabIndex = 6;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Money";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(66, 42);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 3;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(66, 17);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 45);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Spending:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(34, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Profit:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(285, 353);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(294, 45);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Export To Text File";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &formStatistical::button1_Click);
			// 
			// formStatistical
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::AliceBlue;
			this->ClientSize = System::Drawing::Size(884, 422);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->table_Invoice);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->lb_Title);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"formStatistical";
			this->Text = L"Statistical";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table_Invoice))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	// Event for Radiobuttons: Buy. Display All Buy Invoices
	private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		table_Invoice->Rows->Clear();
		handling->showToDataGridView(table_Invoice, "invoice_detail.txt");
		for (int i = table_Invoice->RowCount - 1; i >= 0; i--)
		{
			String^ a = table_Invoice[2, i]->Value->ToString()->ToLower()->Trim();
			if (a != radioButton1->Text->ToLower()->Trim())
			{
				table_Invoice->Rows->RemoveAt(i);
			}
		}
	}

	// Event for Radiobutton: Sell. Display All Sell Invoices
	private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		table_Invoice->Rows->Clear();
		handling->showToDataGridView(table_Invoice, "invoice_detail.txt");
		for (int i = table_Invoice->RowCount - 1; i >= 0; i--)
		{
			String^ a = table_Invoice[2, i]->Value->ToString()->ToLower()->Trim();
			if (a != radioButton2->Text->ToLower()->Trim())
			{
				table_Invoice->Rows->RemoveAt(i);
			}
		}
	}

	// Event for Radiobutton: All. Display All Invoices
	private: System::Void radioButton_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		int n,m;
		table_Invoice->Rows->Clear();
		handling->showToDataGridView(table_Invoice, "invoice_detail.txt");
		for (int i = table_Invoice->RowCount - 1; i >= 0; i--)
		{
			String^ a = table_Invoice[2, i]->Value->ToString()->ToLower()->Trim();
			if (a == "buy")
			{
				// Computing Total Money of Buy Invoice
				String^ quantity = table_Invoice[6, i]->Value->ToString()->ToLower()->Trim();
				String^ cost = table_Invoice[7, i]->Value->ToString()->ToLower()->Trim();
				n += Int32::Parse(quantity) * Int32::Parse(cost);
			}
			else
			{
				// Computing Total Money of Sell Invoice
				String^ quantity = table_Invoice[6, i]->Value->ToString()->ToLower()->Trim();
				String^ cost = table_Invoice[7, i]->Value->ToString()->ToLower()->Trim();
				m += Int32::Parse(quantity) * Int32::Parse(cost);
			}
		}
		textBox1->Text = n.ToString(); // Set text to textbox Profit
		textBox2->Text = m.ToString(); // Set text to textbox Spending
	}

	// Export Sale Report to Disk
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		handling->WriteDataGridViewToFile(table_Invoice, "D:\\sale-report.txt");
		MessageBox::Show("Export Successful to D:\\sale-report.txt", "Export Successful!!!", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
};
}
