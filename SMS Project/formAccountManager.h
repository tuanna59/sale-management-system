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
	/// Summary for formAccountManager
	/// </summary>
	public ref class formAccountManager : public System::Windows::Forms::Form
	{
		GlobalFunction *manu = new GlobalFunction();
	public:
		formAccountManager(void)
		{
			InitializeComponent();
			manu->showToDataGridView(dgInfo, "profile.txt");
			manu->addItemInCb(cbBoxPassword, 1, "profile.txt");
			StartPosition = FormStartPosition::CenterScreen;
			this->AcceptButton = btCreate;

			this->dgInfo->RowsDefaultCellStyle->BackColor = Color::LightBlue;
			this->dgInfo->AlternatingRowsDefaultCellStyle->BackColor = Color::AliceBlue;
			this->dgInfo->SelectionMode = DataGridViewSelectionMode::FullRowSelect;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~formAccountManager()
		{
			if (components)
			{
				delete components;
			}
		}
	
	protected:
	private: System::Windows::Forms::DataGridView^  dgInfo;
	private: System::Windows::Forms::Label^  lb_Title;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::ComboBox^  cbBoxPassword;
	private: System::Windows::Forms::ComboBox^  cbBoxPermission;
	private: System::Windows::Forms::Button^  btCreate;
	private: System::Windows::Forms::Button^  btEdit;
	private: System::Windows::Forms::Button^  btDelete;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::TextBox^  textBox3;

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
			this->dgInfo = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->lb_Title = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->btCreate = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->cbBoxPassword = (gcnew System::Windows::Forms::ComboBox());
			this->cbBoxPermission = (gcnew System::Windows::Forms::ComboBox());
			this->btEdit = (gcnew System::Windows::Forms::Button());
			this->btDelete = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgInfo))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// dgInfo
			// 
			this->dgInfo->AllowUserToAddRows = false;
			this->dgInfo->AllowUserToDeleteRows = false;
			this->dgInfo->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgInfo->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgInfo->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1, this->Column2,
					this->Column3
			});
			this->dgInfo->Location = System::Drawing::Point(257, 64);
			this->dgInfo->Name = L"dgInfo";
			this->dgInfo->ReadOnly = true;
			this->dgInfo->Size = System::Drawing::Size(359, 176);
			this->dgInfo->TabIndex = 0;
			this->dgInfo->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &formAccountManager::dgInfo_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Username";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Password";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Permission";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// lb_Title
			// 
			this->lb_Title->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold));
			this->lb_Title->Location = System::Drawing::Point(1, 2);
			this->lb_Title->Name = L"lb_Title";
			this->lb_Title->Size = System::Drawing::Size(627, 41);
			this->lb_Title->TabIndex = 4;
			this->lb_Title->Text = L"Account Manager";
			this->lb_Title->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->btCreate);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Location = System::Drawing::Point(10, 73);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(241, 167);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Add Account";
			// 
			// btCreate
			// 
			this->btCreate->Location = System::Drawing::Point(75, 123);
			this->btCreate->Name = L"btCreate";
			this->btCreate->Size = System::Drawing::Size(75, 23);
			this->btCreate->TabIndex = 6;
			this->btCreate->Text = L"Create";
			this->btCreate->UseVisualStyleBackColor = true;
			this->btCreate->Click += gcnew System::EventHandler(this, &formAccountManager::btCreate_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(21, 80);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Password:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(21, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Username:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(119, 77);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(106, 20);
			this->textBox2->TabIndex = 1;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(119, 37);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(106, 20);
			this->textBox1->TabIndex = 0;
			// 
			// cbBoxPassword
			// 
			this->cbBoxPassword->FormattingEnabled = true;
			this->cbBoxPassword->Location = System::Drawing::Point(161, 37);
			this->cbBoxPassword->Name = L"cbBoxPassword";
			this->cbBoxPassword->Size = System::Drawing::Size(98, 21);
			this->cbBoxPassword->TabIndex = 7;
			// 
			// cbBoxPermission
			// 
			this->cbBoxPermission->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbBoxPermission->FormattingEnabled = true;
			this->cbBoxPermission->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"0", L"1" });
			this->cbBoxPermission->Location = System::Drawing::Point(298, 37);
			this->cbBoxPermission->Name = L"cbBoxPermission";
			this->cbBoxPermission->Size = System::Drawing::Size(98, 21);
			this->cbBoxPermission->TabIndex = 8;
			// 
			// btEdit
			// 
			this->btEdit->Location = System::Drawing::Point(436, 246);
			this->btEdit->Name = L"btEdit";
			this->btEdit->Size = System::Drawing::Size(75, 23);
			this->btEdit->TabIndex = 7;
			this->btEdit->Text = L"Edit";
			this->btEdit->UseVisualStyleBackColor = true;
			this->btEdit->Click += gcnew System::EventHandler(this, &formAccountManager::btEdit_Click);
			// 
			// btDelete
			// 
			this->btDelete->Location = System::Drawing::Point(436, 284);
			this->btDelete->Name = L"btDelete";
			this->btDelete->Size = System::Drawing::Size(75, 23);
			this->btDelete->TabIndex = 9;
			this->btDelete->Text = L"Delete";
			this->btDelete->UseVisualStyleBackColor = true;
			this->btDelete->Click += gcnew System::EventHandler(this, &formAccountManager::btDelete_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->cbBoxPermission);
			this->groupBox2->Controls->Add(this->cbBoxPassword);
			this->groupBox2->Location = System::Drawing::Point(10, 240);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(420, 67);
			this->groupBox2->TabIndex = 10;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Edit";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(19, 37);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(106, 20);
			this->textBox3->TabIndex = 7;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(295, 16);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(57, 13);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Permission";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(158, 16);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(56, 13);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Password:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(16, 16);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(58, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Username:";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(518, 247);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(100, 60);
			this->richTextBox1->TabIndex = 11;
			this->richTextBox1->Text = L"Note: Permission\n1 is Administrator\n0 is Employee";
			// 
			// formAccountManager
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::AliceBlue;
			this->ClientSize = System::Drawing::Size(628, 313);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->btEdit);
			this->Controls->Add(this->btDelete);
			this->Controls->Add(this->lb_Title);
			this->Controls->Add(this->dgInfo);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"formAccountManager";
			this->Text = L"AccountManager";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgInfo))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	// Create Account 
	private: System::Void btCreate_Click(System::Object^  sender, System::EventArgs^  e) {
		if (textBox1->Text != "" && textBox2->Text !="")
		{
			dgInfo->Rows->Add(textBox1->Text, textBox2->Text, "0");
			manu->WriteDataGridViewToFile(dgInfo, "profile.txt");
		}
		else
			MessageBox::Show("Please fill all text box.");
	}

	// Delete Account 
	private: System::Void btDelete_Click(System::Object^  sender, System::EventArgs^  e) {
		int d = 0;
		for (int i = 0; i < dgInfo->RowCount; i++)
			if (dgInfo[2, i]->Value->ToString()->StartsWith("1"))
				d++;
		if (d == 1 && dgInfo[2,dgInfo->CurrentCell->RowIndex]->Value->ToString() == "1")
			MessageBox::Show("You have only 1 account is Administrator. You can not delete it.");
		else
		{
			manu->removeFromDataGridView(dgInfo);
			manu->WriteDataGridViewToFile(dgInfo, "profile.txt");
		}
	}

	// Edit Account 
	private: System::Void btEdit_Click(System::Object^  sender, System::EventArgs^  e) {
		if (textBox3->Text != "" && cbBoxPassword->Text != "" && cbBoxPermission->Text != "")
		{
			dgInfo->CurrentRow->SetValues(textBox3->Text, cbBoxPassword->Text, cbBoxPermission->Text);
			manu->WriteDataGridViewToFile(dgInfo, "profile.txt");
		}
		else
			MessageBox::Show("Please fill all text box.");
	}

	// Set info of TextBox to textbox when choose a row in DataGridView
	private: System::Void dgInfo_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		textBox3->Text = dgInfo->Rows[e->RowIndex]->Cells[0]->Value->ToString();
		cbBoxPassword->Text = dgInfo->Rows[e->RowIndex]->Cells[1]->Value->ToString();
		cbBoxPermission->Text = dgInfo->Rows[e->RowIndex]->Cells[2]->Value->ToString();
	}
};
}
