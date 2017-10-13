#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;

void Main(cli::array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	SMSProject::MainForm form;
	Application::Run(%form);
}