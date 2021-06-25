#include "MyForm.h"
#include <array>

using namespace std;
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(cli::array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Calculator::MyForm form;
	Application::Run(% form);
}