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
	/// Summary for formLogin
	/// </summary>
	public ref class formLogin : public System::Windows::Forms::Form
	{
		GlobalFunction *handling = new GlobalFunction();
		static int n = -1;
	public:
		formLogin(void)
		{
			InitializeComponent();
			handling->showToDataGridView(dgInfo, "profile.txt");
			StartPosition = FormStartPosition::CenterScreen;
			this->AcceptButton = btLogin;
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~formLogin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  txtBoxUsername;
	private: System::Windows::Forms::TextBox^  txtBoxPassword;
	private: System::Windows::Forms::Button^  btLogin;
	private: System::Windows::Forms::Button^  btExit;
	private: System::Windows::Forms::DataGridView^  dgInfo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label6;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(formLogin::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtBoxUsername = (gcnew System::Windows::Forms::TextBox());
			this->txtBoxPassword = (gcnew System::Windows::Forms::TextBox());
			this->btLogin = (gcnew System::Windows::Forms::Button());
			this->btExit = (gcnew System::Windows::Forms::Button());
			this->dgInfo = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgInfo))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(11, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Username:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Location = System::Drawing::Point(13, 53);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Password:";
			// 
			// txtBoxUsername
			// 
			this->txtBoxUsername->BackColor = System::Drawing::Color::WhiteSmoke;
			this->txtBoxUsername->Location = System::Drawing::Point(85, 16);
			this->txtBoxUsername->Name = L"txtBoxUsername";
			this->txtBoxUsername->Size = System::Drawing::Size(100, 20);
			this->txtBoxUsername->TabIndex = 0;
			// 
			// txtBoxPassword
			// 
			this->txtBoxPassword->BackColor = System::Drawing::Color::WhiteSmoke;
			this->txtBoxPassword->Location = System::Drawing::Point(85, 53);
			this->txtBoxPassword->Name = L"txtBoxPassword";
			this->txtBoxPassword->Size = System::Drawing::Size(100, 20);
			this->txtBoxPassword->TabIndex = 1;
			this->txtBoxPassword->UseSystemPasswordChar = true;
			// 
			// btLogin
			// 
			this->btLogin->BackColor = System::Drawing::Color::Transparent;
			this->btLogin->Location = System::Drawing::Point(16, 92);
			this->btLogin->Name = L"btLogin";
			this->btLogin->Size = System::Drawing::Size(75, 23);
			this->btLogin->TabIndex = 2;
			this->btLogin->Text = L"&Login";
			this->btLogin->UseVisualStyleBackColor = false;
			this->btLogin->Click += gcnew System::EventHandler(this, &formLogin::btLogin_Click);
			// 
			// btExit
			// 
			this->btExit->BackColor = System::Drawing::Color::Transparent;
			this->btExit->Location = System::Drawing::Point(110, 92);
			this->btExit->Name = L"btExit";
			this->btExit->Size = System::Drawing::Size(75, 23);
			this->btExit->TabIndex = 5;
			this->btExit->Text = L"E&xit";
			this->btExit->UseVisualStyleBackColor = false;
			this->btExit->Click += gcnew System::EventHandler(this, &formLogin::btExit_Click);
			// 
			// dgInfo
			// 
			this->dgInfo->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgInfo->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1, this->Column2,
					this->Column3
			});
			this->dgInfo->Location = System::Drawing::Point(537, 38);
			this->dgInfo->Name = L"dgInfo";
			this->dgInfo->Size = System::Drawing::Size(240, 129);
			this->dgInfo->TabIndex = 6;
			this->dgInfo->Visible = false;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Column1";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Column2";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Column3";
			this->Column3->Name = L"Column3";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::DarkCyan;
			this->label3->Location = System::Drawing::Point(226, 194);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(138, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Sale Management Software";
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label4->Location = System::Drawing::Point(9, 26);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(60, 2);
			this->label4->TabIndex = 8;
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label5->Location = System::Drawing::Point(129, 26);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(60, 2);
			this->label5->TabIndex = 9;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->txtBoxPassword);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->txtBoxUsername);
			this->groupBox1->Controls->Add(this->btLogin);
			this->groupBox1->Controls->Add(this->btExit);
			this->groupBox1->Location = System::Drawing::Point(4, 57);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(200, 123);
			this->groupBox1->TabIndex = 10;
			this->groupBox1->TabStop = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe Script", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label6->Location = System::Drawing::Point(75, 15);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(65, 25);
			this->label6->TabIndex = 11;
			this->label6->Text = L"LOGIN";
			// 
			// formLogin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(364, 207);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dgInfo);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"formLogin";
			this->Opacity = 0.8;
			this->Text = L"Login";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgInfo))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	// Get Permission
	public: static int getPermission() {
		return n;
	}

	// Button Login
	private: System::Void btLogin_Click(System::Object^  sender, System::EventArgs^  e) {
		int dem = 0; int dem1 = 0;
		
		for (int i = 0; i < dgInfo->RowCount - 1; i++)
		{
			if (txtBoxUsername->Text->Trim() == dgInfo->Rows[i]->Cells[0]->Value->ToString()->Trim() && txtBoxPassword->Text->Trim() == dgInfo->Rows[i]->Cells[1]->Value->ToString()->Trim() && dgInfo->Rows[i]->Cells[2]->Value->ToString()->StartsWith("1"))
				dem = dem + 1;
			if (txtBoxUsername->Text->Trim() == dgInfo->Rows[i]->Cells[0]->Value->ToString()->Trim() && txtBoxPassword->Text->Trim() == dgInfo->Rows[i]->Cells[1]->Value->ToString()->Trim() && dgInfo->Rows[i]->Cells[2]->Value->ToString()->StartsWith("0"))
				dem1 = dem1 + 1;
		}

		if (txtBoxUsername->Text->Trim() != "" && txtBoxUsername->Text->Trim() != "")
		{
		
			if (dem > 0)
			{
				this->Hide();
				MessageBox::Show("Welcome Admin \"" + txtBoxUsername->Text + "\" come back.", "Hello!!!", MessageBoxButtons::OK, MessageBoxIcon::Information);
				n = 1;
			}
			
			else if (dem1 > 0)
			{
				this->Hide();
				MessageBox::Show("Welcome Employee \"" + txtBoxUsername->Text + "\" come back.", "Hello!!!", MessageBoxButtons::OK, MessageBoxIcon::Information);
				n = 0;
			}
			else if (dem1 == 0 && dem == 0)
				MessageBox::Show("Account Not Found", "Warning!!!", MessageBoxButtons::OK, MessageBoxIcon::Stop);
		}
		else
			MessageBox::Show("Please Fill All Textbox.", "Warning!!!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}

	private: System::Void btExit_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}

};
}
