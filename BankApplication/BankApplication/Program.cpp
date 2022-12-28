#include "LoginForm.h"
#include "DashboardForm.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args) {
	//Inicjalizacji
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	BankApplication::LoginForm loginForm;

	loginForm.ShowDialog();
	User^ user = loginForm.user;

	if (user != nullptr) {
		BankApplication::DashboardForm dashBoard(user);
		Application::Run(% dashBoard);
	}
	else {
		MessageBox::Show("Odmowa autoryzacji",
			"Brak autoryzacji", MessageBoxButtons::OK);
	}

}