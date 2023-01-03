#include "LoginForm.h"
#include "DashboardForm.h"
#include "RegisterForm.h"
#include "LogoutForm.h"

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

		//Prze³¹czenie na rejestracjê
		if (loginForm.switchToRegister) {
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
		BankApplication::DashboardForm dashboardForm(user);
		Application::Run(% dashboardForm);

		if (dashboardForm.SwitchToLogout) {
			BankApplication::LogoutForm logoutForm;
			logoutForm.ShowDialog();
		}
	}
	else {
		MessageBox::Show("Odmowa autoryzacji",
			"Brak autoryzacji", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}