#include "FormLogin.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
int _stdcall WinMain(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project1::FormLogin form;
	Application::Run(% form);
}