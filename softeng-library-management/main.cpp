#include "LoginForm.h"
#include "WelcomeForm.h"

using namespace System;
using namespace System::Windows::Forms;

void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	softenglibrarymanagement::WelcomeForm form;
	Application::Run(% form);
}