#pragma once

#include "User.h"

namespace BankApplication {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Podsumowanie informacji o RegisterForm
	/// </summary>
	public ref class RegisterForm : public System::Windows::Forms::Form
	{
	public:
		RegisterForm(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~RegisterForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbRegister;
	protected:
	private: System::Windows::Forms::Label^ lbName;
	private: System::Windows::Forms::Label^ lbSurname;
	private: System::Windows::Forms::Label^ lbLogin;
	private: System::Windows::Forms::Label^ lbPassword;
	private: System::Windows::Forms::Label^ lbPESEL;
	private: System::Windows::Forms::TextBox^ tbName;
	private: System::Windows::Forms::TextBox^ tbSurname;
	private: System::Windows::Forms::TextBox^ tbLogin;
	private: System::Windows::Forms::TextBox^ tbPassword;
	private: System::Windows::Forms::Label^ lbCPassword;
	private: System::Windows::Forms::TextBox^ tbCPassword;
	private: System::Windows::Forms::TextBox^ tbPESEL;
	private: System::Windows::Forms::Button^ btConfirm;
	private: System::Windows::Forms::Button^ btLog_in_2;







	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lbRegister = (gcnew System::Windows::Forms::Label());
			this->lbName = (gcnew System::Windows::Forms::Label());
			this->lbSurname = (gcnew System::Windows::Forms::Label());
			this->lbLogin = (gcnew System::Windows::Forms::Label());
			this->lbPassword = (gcnew System::Windows::Forms::Label());
			this->lbPESEL = (gcnew System::Windows::Forms::Label());
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->tbSurname = (gcnew System::Windows::Forms::TextBox());
			this->tbLogin = (gcnew System::Windows::Forms::TextBox());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->lbCPassword = (gcnew System::Windows::Forms::Label());
			this->tbCPassword = (gcnew System::Windows::Forms::TextBox());
			this->tbPESEL = (gcnew System::Windows::Forms::TextBox());
			this->btConfirm = (gcnew System::Windows::Forms::Button());
			this->btLog_in_2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lbRegister
			// 
			this->lbRegister->AutoSize = true;
			this->lbRegister->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lbRegister->Location = System::Drawing::Point(428, 18);
			this->lbRegister->Name = L"lbRegister";
			this->lbRegister->Size = System::Drawing::Size(193, 32);
			this->lbRegister->TabIndex = 0;
			this->lbRegister->Text = L"Zarejestruj siê";
			// 
			// lbName
			// 
			this->lbName->AutoSize = true;
			this->lbName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lbName->Location = System::Drawing::Point(56, 93);
			this->lbName->Name = L"lbName";
			this->lbName->Size = System::Drawing::Size(40, 20);
			this->lbName->TabIndex = 1;
			this->lbName->Text = L"Imiê";
			// 
			// lbSurname
			// 
			this->lbSurname->AutoSize = true;
			this->lbSurname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lbSurname->Location = System::Drawing::Point(46, 134);
			this->lbSurname->Name = L"lbSurname";
			this->lbSurname->Size = System::Drawing::Size(81, 20);
			this->lbSurname->TabIndex = 2;
			this->lbSurname->Text = L"Nazwisko";
			// 
			// lbLogin
			// 
			this->lbLogin->AutoSize = true;
			this->lbLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lbLogin->Location = System::Drawing::Point(46, 168);
			this->lbLogin->Name = L"lbLogin";
			this->lbLogin->Size = System::Drawing::Size(50, 20);
			this->lbLogin->TabIndex = 3;
			this->lbLogin->Text = L"Login";
			// 
			// lbPassword
			// 
			this->lbPassword->AutoSize = true;
			this->lbPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lbPassword->Location = System::Drawing::Point(54, 211);
			this->lbPassword->Name = L"lbPassword";
			this->lbPassword->Size = System::Drawing::Size(53, 20);
			this->lbPassword->TabIndex = 4;
			this->lbPassword->Text = L"Has³o";
			// 
			// lbPESEL
			// 
			this->lbPESEL->AutoSize = true;
			this->lbPESEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lbPESEL->Location = System::Drawing::Point(47, 278);
			this->lbPESEL->Name = L"lbPESEL";
			this->lbPESEL->Size = System::Drawing::Size(63, 20);
			this->lbPESEL->TabIndex = 5;
			this->lbPESEL->Text = L"PESEL";
			// 
			// tbName
			// 
			this->tbName->Location = System::Drawing::Point(143, 93);
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(100, 22);
			this->tbName->TabIndex = 0;
			// 
			// tbSurname
			// 
			this->tbSurname->Location = System::Drawing::Point(143, 134);
			this->tbSurname->Name = L"tbSurname";
			this->tbSurname->Size = System::Drawing::Size(100, 22);
			this->tbSurname->TabIndex = 6;
			// 
			// tbLogin
			// 
			this->tbLogin->Location = System::Drawing::Point(143, 168);
			this->tbLogin->Name = L"tbLogin";
			this->tbLogin->Size = System::Drawing::Size(100, 22);
			this->tbLogin->TabIndex = 7;
			// 
			// tbPassword
			// 
			this->tbPassword->Location = System::Drawing::Point(143, 208);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->PasswordChar = '*';
			this->tbPassword->Size = System::Drawing::Size(100, 22);
			this->tbPassword->TabIndex = 8;
			// 
			// lbCPassword
			// 
			this->lbCPassword->AutoSize = true;
			this->lbCPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lbCPassword->Location = System::Drawing::Point(36, 244);
			this->lbCPassword->Name = L"lbCPassword";
			this->lbCPassword->Size = System::Drawing::Size(115, 20);
			this->lbCPassword->TabIndex = 9;
			this->lbCPassword->Text = L"Powtórz has³o";
			// 
			// tbCPassword
			// 
			this->tbCPassword->Location = System::Drawing::Point(176, 244);
			this->tbCPassword->Name = L"tbCPassword";
			this->tbCPassword->PasswordChar = '*';
			this->tbCPassword->Size = System::Drawing::Size(100, 22);
			this->tbCPassword->TabIndex = 10;
			// 
			// tbPESEL
			// 
			this->tbPESEL->Location = System::Drawing::Point(143, 278);
			this->tbPESEL->MaxLength = 11;
			this->tbPESEL->Name = L"tbPESEL";
			this->tbPESEL->Size = System::Drawing::Size(100, 22);
			this->tbPESEL->TabIndex = 11;
			// 
			// btConfirm
			// 
			this->btConfirm->Location = System::Drawing::Point(249, 390);
			this->btConfirm->Name = L"btConfirm";
			this->btConfirm->Size = System::Drawing::Size(163, 66);
			this->btConfirm->TabIndex = 12;
			this->btConfirm->Text = L"PotwierdŸ";
			this->btConfirm->UseVisualStyleBackColor = true;
			this->btConfirm->Click += gcnew System::EventHandler(this, &RegisterForm::btConfirm_Click);
			// 
			// btLog_in_2
			// 
			this->btLog_in_2->Location = System::Drawing::Point(545, 408);
			this->btLog_in_2->Name = L"btLog_in_2";
			this->btLog_in_2->Size = System::Drawing::Size(138, 48);
			this->btLog_in_2->TabIndex = 13;
			this->btLog_in_2->Text = L"Logowanie";
			this->btLog_in_2->UseVisualStyleBackColor = true;
			this->btLog_in_2->Click += gcnew System::EventHandler(this, &RegisterForm::btLog_in_2_Click);
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1091, 518);
			this->Controls->Add(this->btLog_in_2);
			this->Controls->Add(this->btConfirm);
			this->Controls->Add(this->tbPESEL);
			this->Controls->Add(this->tbCPassword);
			this->Controls->Add(this->lbCPassword);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->tbLogin);
			this->Controls->Add(this->tbSurname);
			this->Controls->Add(this->tbName);
			this->Controls->Add(this->lbPESEL);
			this->Controls->Add(this->lbPassword);
			this->Controls->Add(this->lbLogin);
			this->Controls->Add(this->lbSurname);
			this->Controls->Add(this->lbName);
			this->Controls->Add(this->lbRegister);
			this->Name = L"RegisterForm";
			this->Text = L"RegisterForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: bool switchToLogin = false;

	public: User^ user = nullptr;

	//Powrót do ekranu logowania
	private: System::Void btLog_in_2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->switchToLogin = true;
		this->Close();
	}
	//Dodanie nowe u¿ytkownika
	private: System::Void btConfirm_Click(System::Object^ sender, System::EventArgs^ e) {
		//Pobranie wpisanych danych
		String^ name = tbName->Text;
		String^ surname = tbSurname->Text;
		String^ login = tbLogin->Text;
		String^ password = tbPassword->Text;
		String^ CPassword = tbCPassword->Text;
		String^ PESEL = tbPESEL->Text;

		//Warunek - wszystkie pola uzupe³nione
		if ((name->Length == 0) || (surname->Length == 0) || (login->Length == 0)
			|| (password->Length == 0) || (CPassword->Length == 0) || (PESEL->Length == 0)) {
			MessageBox::Show("Proszê wype³niæ wszystkie pola",
				"Jedno lub wiêcej pól pozosta³y niewype³nione", MessageBoxButtons::OK);
			
			return;
		}

		//Warunek - identyczne has³a
		if (String::Compare(password, CPassword) != 0) {
			MessageBox::Show("Wprowadzono b³êdne has³a",
				"B³¹d zgodnoœci", MessageBoxButtons::OK);

			return;
		}

		try {
			//Adres bazy danych
			String^ connectionString = "Data Source=LAPTOP;Initial Catalog=BankApplication;Integrated Security=True";

			//Ustanowienie po³¹czenia
			SqlConnection sqlConnection(connectionString);
			sqlConnection.Open();

			//Zapytanie SQL - wczytanie nowych danych do tabeli "users"
			String^ sqlQuerry = "INSERT INTO users " +
				"(name, surname, login, password, PESEL) VALUES" +
				"(@name, @surname, @login, @password, @PESEL);";

			SqlCommand command(sqlQuerry, % sqlConnection);
			command.Parameters->AddWithValue("@name", name);
			command.Parameters->AddWithValue("@surname", surname);
			command.Parameters->AddWithValue("@login", login);
			command.Parameters->AddWithValue("@password", password);
			command.Parameters->AddWithValue("@PESEL", PESEL);

			command.ExecuteNonQuery();

			//Inicjalizacja zmiennej user
			user = gcnew User;
			user->name = name;
			user->surname = surname;
			user->login = login;
			user->password = password;
			user->PESEL = PESEL;

			this->Close();
		}
		catch (Exception^ ex) { //B³¹d po³¹czenia z baz¹ danych
			MessageBox::Show("B³¹d po³¹czenia z baz¹ danych. Przepraszamy za utrudnienia",
				"B³¹d po³¹czenia", MessageBoxButtons::OK);
		}
	}
};
}
