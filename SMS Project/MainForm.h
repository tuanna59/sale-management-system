#pragma once
#include "formCustomer.h"
#include "formInvoice.h"
#include "formSearch.h"
#include "formSupplier.h"
#include "formProduct.h"
#include "formStatistical.h"
#include "formAbout.h"
#include "formAccountManager.h"
#include "formLogin.h"

namespace SMSProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
	
		MainForm(void)
		{
			InitializeComponent();
			StartPosition = FormStartPosition::CenterScreen;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	
	protected:
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::GroupBox^  groupBox2;

	// Create Button
	private: System::Windows::Forms::Button^  bt_Product;
	private: System::Windows::Forms::Button^  bt_Supplier;
	private: System::Windows::Forms::Button^  bt_Customer;
	private: System::Windows::Forms::Button^  bt_Invoice;
	private: System::Windows::Forms::Button^  bt_Exit;
	private: System::Windows::Forms::Button^  bt_Account;
	private: System::Windows::Forms::Button^  bt_Search;
	private: System::Windows::Forms::Button^  bt_Statistical;
	// Create statusbar
	private: System::Windows::Forms::Timer^  timer1;

	// Create menubar
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  systemMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  loginSMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  accountManagerSMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  logoutSMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitSMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  statisticalSMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  managerMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  statisticalMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  searchMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpMenuItem;

	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
	private: System::Windows::Forms::Label^  lb_Welcome;
	private: System::Windows::Forms::Label^  lb_NameSoft;

	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::ToolStripMenuItem^  invoiceSMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  customerSMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  supplierSMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  productSMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  searchSMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutSMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  howToUseSMenuItem;






	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->systemMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->loginSMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->accountManagerSMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->logoutSMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitSMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->managerMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->invoiceSMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->customerSMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->supplierSMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->productSMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->statisticalMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->statisticalSMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->searchMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->searchSMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutSMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->howToUseSMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lb_Welcome = (gcnew System::Windows::Forms::Label());
			this->lb_NameSoft = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->bt_Exit = (gcnew System::Windows::Forms::Button());
			this->bt_Account = (gcnew System::Windows::Forms::Button());
			this->bt_Search = (gcnew System::Windows::Forms::Button());
			this->bt_Statistical = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->bt_Product = (gcnew System::Windows::Forms::Button());
			this->bt_Supplier = (gcnew System::Windows::Forms::Button());
			this->bt_Customer = (gcnew System::Windows::Forms::Button());
			this->bt_Invoice = (gcnew System::Windows::Forms::Button());
			this->statusStrip1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripStatusLabel1 });
			this->statusStrip1->Location = System::Drawing::Point(0, 421);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->statusStrip1->Size = System::Drawing::Size(814, 22);
			this->statusStrip1->TabIndex = 0;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(104, 17);
			this->toolStripStatusLabel1->Text = L"Nguyen Anh Tuan";
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &MainForm::timer1_Tick);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->systemMenuItem, this->managerMenuItem,
					this->statisticalMenuItem, this->searchMenuItem, this->helpMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(814, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// systemMenuItem
			// 
			this->systemMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->loginSMenuItem,
					this->accountManagerSMenuItem, this->logoutSMenuItem, this->exitSMenuItem
			});
			this->systemMenuItem->Name = L"systemMenuItem";
			this->systemMenuItem->Size = System::Drawing::Size(57, 20);
			this->systemMenuItem->Text = L"&System";
			// 
			// loginSMenuItem
			// 
			this->loginSMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"loginSMenuItem.Image")));
			this->loginSMenuItem->Name = L"loginSMenuItem";
			this->loginSMenuItem->Size = System::Drawing::Size(169, 22);
			this->loginSMenuItem->Text = L"Log&in";
			this->loginSMenuItem->Click += gcnew System::EventHandler(this, &MainForm::loginSMenuItem_Click);
			// 
			// accountManagerSMenuItem
			// 
			this->accountManagerSMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"accountManagerSMenuItem.Image")));
			this->accountManagerSMenuItem->Name = L"accountManagerSMenuItem";
			this->accountManagerSMenuItem->Size = System::Drawing::Size(169, 22);
			this->accountManagerSMenuItem->Text = L"&Account Manager";
			this->accountManagerSMenuItem->Click += gcnew System::EventHandler(this, &MainForm::accountManagerSMenuItem_Click);
			// 
			// logoutSMenuItem
			// 
			this->logoutSMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"logoutSMenuItem.Image")));
			this->logoutSMenuItem->Name = L"logoutSMenuItem";
			this->logoutSMenuItem->Size = System::Drawing::Size(169, 22);
			this->logoutSMenuItem->Text = L"Log&out";
			this->logoutSMenuItem->Click += gcnew System::EventHandler(this, &MainForm::logoutSMenuItem_Click);
			// 
			// exitSMenuItem
			// 
			this->exitSMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"exitSMenuItem.Image")));
			this->exitSMenuItem->Name = L"exitSMenuItem";
			this->exitSMenuItem->Size = System::Drawing::Size(169, 22);
			this->exitSMenuItem->Text = L"E&xit";
			this->exitSMenuItem->Click += gcnew System::EventHandler(this, &MainForm::exitToolStripMenuItem_Click);
			// 
			// managerMenuItem
			// 
			this->managerMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->invoiceSMenuItem,
					this->customerSMenuItem, this->supplierSMenuItem, this->productSMenuItem
			});
			this->managerMenuItem->Name = L"managerMenuItem";
			this->managerMenuItem->Size = System::Drawing::Size(66, 20);
			this->managerMenuItem->Text = L"&Manager";
			// 
			// invoiceSMenuItem
			// 
			this->invoiceSMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"invoiceSMenuItem.Image")));
			this->invoiceSMenuItem->Name = L"invoiceSMenuItem";
			this->invoiceSMenuItem->Size = System::Drawing::Size(126, 22);
			this->invoiceSMenuItem->Text = L"&Invoice";
			this->invoiceSMenuItem->Click += gcnew System::EventHandler(this, &MainForm::invoiceToolStripMenuItem_Click);
			// 
			// customerSMenuItem
			// 
			this->customerSMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"customerSMenuItem.Image")));
			this->customerSMenuItem->Name = L"customerSMenuItem";
			this->customerSMenuItem->Size = System::Drawing::Size(126, 22);
			this->customerSMenuItem->Text = L"&Customer";
			this->customerSMenuItem->Click += gcnew System::EventHandler(this, &MainForm::customerToolStripMenuItem_Click);
			// 
			// supplierSMenuItem
			// 
			this->supplierSMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"supplierSMenuItem.Image")));
			this->supplierSMenuItem->Name = L"supplierSMenuItem";
			this->supplierSMenuItem->Size = System::Drawing::Size(126, 22);
			this->supplierSMenuItem->Text = L"&Supplier";
			this->supplierSMenuItem->Click += gcnew System::EventHandler(this, &MainForm::supplierToolStripMenuItem_Click);
			// 
			// productSMenuItem
			// 
			this->productSMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"productSMenuItem.Image")));
			this->productSMenuItem->Name = L"productSMenuItem";
			this->productSMenuItem->Size = System::Drawing::Size(126, 22);
			this->productSMenuItem->Text = L"&Product";
			this->productSMenuItem->Click += gcnew System::EventHandler(this, &MainForm::productToolStripMenuItem_Click);
			// 
			// statisticalMenuItem
			// 
			this->statisticalMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->statisticalSMenuItem });
			this->statisticalMenuItem->Name = L"statisticalMenuItem";
			this->statisticalMenuItem->Size = System::Drawing::Size(69, 20);
			this->statisticalMenuItem->Text = L"Sta&tistical";
			// 
			// statisticalSMenuItem
			// 
			this->statisticalSMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"statisticalSMenuItem.Image")));
			this->statisticalSMenuItem->Name = L"statisticalSMenuItem";
			this->statisticalSMenuItem->Size = System::Drawing::Size(124, 22);
			this->statisticalSMenuItem->Text = L"Sta&tistical";
			this->statisticalSMenuItem->Click += gcnew System::EventHandler(this, &MainForm::statisticalSMenuItem_Click);
			// 
			// searchMenuItem
			// 
			this->searchMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->searchSMenuItem });
			this->searchMenuItem->Name = L"searchMenuItem";
			this->searchMenuItem->Size = System::Drawing::Size(54, 20);
			this->searchMenuItem->Text = L"Se&arch";
			// 
			// searchSMenuItem
			// 
			this->searchSMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"searchSMenuItem.Image")));
			this->searchSMenuItem->Name = L"searchSMenuItem";
			this->searchSMenuItem->Size = System::Drawing::Size(109, 22);
			this->searchSMenuItem->Text = L"Se&arch";
			this->searchSMenuItem->Click += gcnew System::EventHandler(this, &MainForm::searchSMenuItem_Click);
			// 
			// helpMenuItem
			// 
			this->helpMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->aboutSMenuItem,
					this->howToUseSMenuItem
			});
			this->helpMenuItem->Name = L"helpMenuItem";
			this->helpMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpMenuItem->Text = L"&Help";
			// 
			// aboutSMenuItem
			// 
			this->aboutSMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"aboutSMenuItem.Image")));
			this->aboutSMenuItem->Name = L"aboutSMenuItem";
			this->aboutSMenuItem->Size = System::Drawing::Size(135, 22);
			this->aboutSMenuItem->Text = L"&About";
			this->aboutSMenuItem->Click += gcnew System::EventHandler(this, &MainForm::aboutSMenuItem_Click);
			// 
			// howToUseSMenuItem
			// 
			this->howToUseSMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"howToUseSMenuItem.Image")));
			this->howToUseSMenuItem->Name = L"howToUseSMenuItem";
			this->howToUseSMenuItem->Size = System::Drawing::Size(135, 22);
			this->howToUseSMenuItem->Text = L"How to &Use";
			this->howToUseSMenuItem->Click += gcnew System::EventHandler(this, &MainForm::howToUseSMenuItem_Click);
			// 
			// lb_Welcome
			// 
			this->lb_Welcome->BackColor = System::Drawing::Color::Transparent;
			this->lb_Welcome->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lb_Welcome->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold));
			this->lb_Welcome->ForeColor = System::Drawing::Color::DarkCyan;
			this->lb_Welcome->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lb_Welcome.Image")));
			this->lb_Welcome->Location = System::Drawing::Point(8, 25);
			this->lb_Welcome->Name = L"lb_Welcome";
			this->lb_Welcome->Size = System::Drawing::Size(194, 60);
			this->lb_Welcome->TabIndex = 3;
			this->lb_Welcome->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lb_NameSoft
			// 
			this->lb_NameSoft->BackColor = System::Drawing::Color::Transparent;
			this->lb_NameSoft->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lb_NameSoft->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold));
			this->lb_NameSoft->ForeColor = System::Drawing::Color::DarkCyan;
			this->lb_NameSoft->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lb_NameSoft.Image")));
			this->lb_NameSoft->Location = System::Drawing::Point(451, 27);
			this->lb_NameSoft->Name = L"lb_NameSoft";
			this->lb_NameSoft->Size = System::Drawing::Size(363, 67);
			this->lb_NameSoft->TabIndex = 4;
			this->lb_NameSoft->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->bt_Exit);
			this->groupBox1->Controls->Add(this->bt_Account);
			this->groupBox1->Controls->Add(this->bt_Search);
			this->groupBox1->Controls->Add(this->bt_Statistical);
			this->groupBox1->Location = System::Drawing::Point(636, 102);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(154, 277);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Direct Navigation";
			// 
			// bt_Exit
			// 
			this->bt_Exit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bt_Exit.Image")));
			this->bt_Exit->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bt_Exit->Location = System::Drawing::Point(6, 213);
			this->bt_Exit->Name = L"bt_Exit";
			this->bt_Exit->Size = System::Drawing::Size(142, 60);
			this->bt_Exit->TabIndex = 7;
			this->bt_Exit->Text = L"     Exit";
			this->bt_Exit->UseVisualStyleBackColor = true;
			this->bt_Exit->Click += gcnew System::EventHandler(this, &MainForm::button5_Click);
			// 
			// bt_Account
			// 
			this->bt_Account->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bt_Account.Image")));
			this->bt_Account->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bt_Account->Location = System::Drawing::Point(6, 148);
			this->bt_Account->Name = L"bt_Account";
			this->bt_Account->Size = System::Drawing::Size(142, 60);
			this->bt_Account->TabIndex = 6;
			this->bt_Account->Text = L"         Account \r\n         Manager";
			this->bt_Account->UseVisualStyleBackColor = true;
			this->bt_Account->Click += gcnew System::EventHandler(this, &MainForm::bt_Account_Click);
			// 
			// bt_Search
			// 
			this->bt_Search->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bt_Search.Image")));
			this->bt_Search->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bt_Search->Location = System::Drawing::Point(6, 82);
			this->bt_Search->Name = L"bt_Search";
			this->bt_Search->Size = System::Drawing::Size(142, 60);
			this->bt_Search->TabIndex = 5;
			this->bt_Search->Text = L"     Search";
			this->bt_Search->UseVisualStyleBackColor = true;
			this->bt_Search->Click += gcnew System::EventHandler(this, &MainForm::bt_Search_Click);
			// 
			// bt_Statistical
			// 
			this->bt_Statistical->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bt_Statistical.Image")));
			this->bt_Statistical->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bt_Statistical->Location = System::Drawing::Point(6, 15);
			this->bt_Statistical->Name = L"bt_Statistical";
			this->bt_Statistical->Size = System::Drawing::Size(142, 60);
			this->bt_Statistical->TabIndex = 4;
			this->bt_Statistical->Text = L"          Statistical";
			this->bt_Statistical->UseVisualStyleBackColor = true;
			this->bt_Statistical->Click += gcnew System::EventHandler(this, &MainForm::bt_Statistical_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::Transparent;
			this->groupBox2->Controls->Add(this->bt_Product);
			this->groupBox2->Controls->Add(this->bt_Supplier);
			this->groupBox2->Controls->Add(this->bt_Customer);
			this->groupBox2->Controls->Add(this->bt_Invoice);
			this->groupBox2->Location = System::Drawing::Point(12, 102);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(155, 277);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Direct Navigation";
			// 
			// bt_Product
			// 
			this->bt_Product->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bt_Product.Image")));
			this->bt_Product->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bt_Product->Location = System::Drawing::Point(7, 213);
			this->bt_Product->Name = L"bt_Product";
			this->bt_Product->Size = System::Drawing::Size(142, 60);
			this->bt_Product->TabIndex = 3;
			this->bt_Product->Text = L"       Product";
			this->bt_Product->UseVisualStyleBackColor = true;
			this->bt_Product->Click += gcnew System::EventHandler(this, &MainForm::button4_Click);
			// 
			// bt_Supplier
			// 
			this->bt_Supplier->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bt_Supplier.Image")));
			this->bt_Supplier->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bt_Supplier->Location = System::Drawing::Point(7, 148);
			this->bt_Supplier->Name = L"bt_Supplier";
			this->bt_Supplier->Size = System::Drawing::Size(142, 60);
			this->bt_Supplier->TabIndex = 2;
			this->bt_Supplier->Text = L"       Supplier";
			this->bt_Supplier->UseVisualStyleBackColor = true;
			this->bt_Supplier->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			// 
			// bt_Customer
			// 
			this->bt_Customer->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bt_Customer.Image")));
			this->bt_Customer->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bt_Customer->Location = System::Drawing::Point(7, 82);
			this->bt_Customer->Name = L"bt_Customer";
			this->bt_Customer->Size = System::Drawing::Size(142, 60);
			this->bt_Customer->TabIndex = 1;
			this->bt_Customer->Text = L"         Customer";
			this->bt_Customer->UseVisualStyleBackColor = true;
			this->bt_Customer->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// bt_Invoice
			// 
			this->bt_Invoice->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bt_Invoice.Image")));
			this->bt_Invoice->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bt_Invoice->Location = System::Drawing::Point(7, 15);
			this->bt_Invoice->Name = L"bt_Invoice";
			this->bt_Invoice->Size = System::Drawing::Size(142, 60);
			this->bt_Invoice->TabIndex = 0;
			this->bt_Invoice->Text = L"      Invoice";
			this->bt_Invoice->UseVisualStyleBackColor = true;
			this->bt_Invoice->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(814, 443);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->lb_NameSoft);
			this->Controls->Add(this->lb_Welcome);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"MainForm";
			this->Opacity = 0.95;
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Text = L"Sale Management Software";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MainForm::MainForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
		private: System::Void MainForm_Load(System::Object^  sender, System::EventArgs^  e)
		{
			formLogin ^form = gcnew formLogin();
			form->ShowDialog();
			if (form->getPermission() == 1)
			{
				loginSMenuItem->Enabled = false;
				logoutSMenuItem->Enabled = true;
				accountManagerSMenuItem->Enabled = true;
				managerMenuItem->Enabled = true;
				statisticalMenuItem->Enabled = true;
				searchMenuItem->Enabled = true;

				bt_Account->Enabled = true;
				bt_Customer->Enabled = true;
				bt_Invoice->Enabled = true;
				bt_Product->Enabled = true;
				bt_Search->Enabled = true;
				bt_Statistical->Enabled = true;
				bt_Supplier->Enabled = true;
			}
			else if (form->getPermission() == 0)
			{
				loginSMenuItem->Enabled = false;
				logoutSMenuItem->Enabled = true;
				accountManagerSMenuItem->Enabled = false;
				managerMenuItem->Enabled = true;
				statisticalMenuItem->Enabled = false;
				searchMenuItem->Enabled = true;

				bt_Account->Enabled = false;
				bt_Customer->Enabled = true;
				bt_Invoice->Enabled = true;
				bt_Product->Enabled = true;
				bt_Search->Enabled = true;
				bt_Statistical->Enabled = false;
				bt_Supplier->Enabled = true;
			}
			else
				logoutSMenuItem_Click(sender, e);
		}


	// Warning when Exit Program
	private: System::Void MainForm_FormClosing(System::Object^  sender, FormClosingEventArgs^  e) {
		if (MessageBox::Show("Do you want to exit ? ", "Warning!!!", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
			e->Cancel = false;
		else e->Cancel = true;
	}

	// Exit (menubar) 's Event
	private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}

	//Time in Statusbar
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		DateTime datetime = DateTime::Now;
		this->toolStripStatusLabel1->Text = datetime.ToString();
	}

	//Invoice in menubar
	private: System::Void invoiceToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		button1_Click(sender, e);
	}

	//Customer in menubar
	private: System::Void customerToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		button2_Click(sender, e);
	}

	//Supplier in menubar
	private: System::Void supplierToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		button3_Click(sender, e);
	}

	//Product in menubar
	private: System::Void productToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		button4_Click(sender, e);
	}

	//Event of Invoice button
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		formInvoice^ form = gcnew formInvoice();
		form->ShowDialog();
		this->Show();
	}
			 
	//Event of Customer button
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		formCustomer^ form = gcnew formCustomer();
		form->ShowDialog();
		this->Show();
	}

	//Event of Supplier button
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		formSupplier^ form = gcnew formSupplier();
		form->ShowDialog();
		this->Show();
	}

	//Event of Product button
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		formProduct^ form = gcnew formProduct();
		form->ShowDialog();
		this->Show();
	}
	
	//Event of Exit button
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}

	// Event of HowToUse button 
	private: System::Void howToUseSMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		System::Diagnostics::Process::Start("help.pdf");
	}

	// Event of Search Button
	private: System::Void bt_Search_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		formSearch^ form = gcnew formSearch();
		form->ShowDialog();
		this->Show();
	}

	// Event of Statistical Button
	private: System::Void bt_Statistical_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		formStatistical^ form = gcnew formStatistical();
		form->ShowDialog();
		this->Show();
	}

	// Event of Statistical submenu
	private: System::Void statisticalSMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		formStatistical^ form = gcnew formStatistical();
		form->ShowDialog();
		this->Show();
	}

	// Event of search submenu
	private: System::Void searchSMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		formSearch^ form = gcnew formSearch();
		form->ShowDialog();
		this->Show();
	}

	// Event of About submenu
	private: System::Void aboutSMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		 //this->Hide();
		 formAbout^ form = gcnew formAbout();
		 form->ShowDialog();
		 //this->Show();
	}
	
	// Event of Account button
	private: System::Void bt_Account_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		formAccountManager^ form = gcnew formAccountManager();
		form->ShowDialog();
		this->Show();
	}
	
	// Event of AccountManager submenu
	private: System::Void accountManagerSMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		formAccountManager^ form = gcnew formAccountManager();
		form->ShowDialog();
		this->Show();
	}

	// Event of login submenu
	private: System::Void loginSMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		MainForm_Load(sender, e);
	}

	// Event of logout submenubar
	private: System::Void logoutSMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		loginSMenuItem->Enabled = true;
		logoutSMenuItem->Enabled = false;
		accountManagerSMenuItem->Enabled = false;

		managerMenuItem->Enabled = false;
		statisticalMenuItem->Enabled = false;
		searchMenuItem->Enabled = false;

		bt_Account->Enabled = false;
		bt_Customer->Enabled = false;
		bt_Invoice->Enabled = false;
		bt_Product->Enabled = false;
		bt_Search->Enabled = false;
		bt_Statistical->Enabled = false;
		bt_Supplier->Enabled = false;
	}
};
}
