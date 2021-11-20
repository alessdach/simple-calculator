#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;
void main(array<String^>^arg) {
	Application::EnableVisualStyles();
	Application::Run(gcnew Calculadora::MyForm());
}
