#include "LoginForm.h"
#include "DashboardForm.h"
#include "RegisterForm.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args) {
	//Inicjalizacji
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	
	User^ user = nullptr;

	while (true) {
		BankApplication::LoginForm loginForm;
		loginForm.ShowDialog();

		if (loginForm.switchToRegister) {
			//Pokazanie okna rejestracji
			BankApplication::RegisterForm registerForm;
			registerForm.ShowDialog();

			if (registerForm.switchToLogin) {
				continue;
			}
			else {
				user = registerForm.user;
				break;
			}
		}
		else {
			user = loginForm.user;
			break;
		}
	}

	if (user != nullptr) {
		BankApplication::DashboardForm dashBoard(user);
		Application::Run(% dashBoard);
	}
	else {
		MessageBox::Show("Odmowa autoryzacji",
			"Brak autoryzacji", MessageBoxButtons::OK);
	}

}