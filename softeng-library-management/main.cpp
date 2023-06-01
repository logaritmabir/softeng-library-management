#include "LoginForm.h"

using namespace System;
using namespace System::Windows::Forms;

void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	softenglibrarymanagement::LoginForm form;
	Application::Run(% form);
}