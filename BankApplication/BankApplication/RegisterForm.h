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

	protected:





	private: System::Windows::Forms::TextBox^ tbName;
	private: System::Windows::Forms::TextBox^ tbSurname;
	private: System::Windows::Forms::TextBox^ tbLogin;
	private: System::Windows::Forms::TextBox^ tbPassword;

	private: System::Windows::Forms::TextBox^ tbCPassword;
	private: System::Windows::Forms::TextBox^ tbPESEL;
	private: System::Windows::Forms::Button^ btConfirm;
	private: System::Windows::Forms::Button^ btLog_in_2;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;




	private: System::ComponentModel::IContainer^ components;







	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RegisterForm::typeid));
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->tbSurname = (gcnew System::Windows::Forms::TextBox());
			this->tbLogin = (gcnew System::Windows::Forms::TextBox());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->tbCPassword = (gcnew System::Windows::Forms::TextBox());
			this->tbPESEL = (gcnew System::Windows::Forms::TextBox());
			this->btConfirm = (gcnew System::Windows::Forms::Button());
			this->btLog_in_2 = (gcnew System::Windows::Forms::Button());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->SuspendLayout();
			// 
			// tbName
			// 
			this->tbName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->tbName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tbName->ForeColor = System::Drawing::Color::White;
			this->tbName->Location = System::Drawing::Point(1627, 389);
			this->tbName->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tbName->MaxLength = 20;
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(380, 54);
			this->tbName->TabIndex = 0;
			// 
			// tbSurname
			// 
			this->tbSurname->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->tbSurname->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbSurname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tbSurname->ForeColor = System::Drawing::Color::White;
			this->tbSurname->Location = System::Drawing::Point(1627, 475);
			this->tbSurname->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tbSurname->MaxLength = 20;
			this->tbSurname->Name = L"tbSurname";
			this->tbSurname->Size = System::Drawing::Size(380, 54);
			this->tbSurname->TabIndex = 1;
			// 
			// tbLogin
			// 
			this->tbLogin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->tbLogin->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tbLogin->ForeColor = System::Drawing::Color::White;
			this->tbLogin->Location = System::Drawing::Point(1627, 651);
			this->tbLogin->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tbLogin->MaxLength = 20;
			this->tbLogin->Name = L"tbLogin";
			this->tbLogin->Size = System::Drawing::Size(380, 54);
			this->tbLogin->TabIndex = 3;
			// 
			// tbPassword
			// 
			this->tbPassword->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->tbPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tbPassword->ForeColor = System::Drawing::Color::White;
			this->tbPassword->Location = System::Drawing::Point(1627, 738);
			this->tbPassword->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tbPassword->MaxLength = 20;
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->PasswordChar = '*';
			this->tbPassword->Size = System::Drawing::Size(380, 54);
			this->tbPassword->TabIndex = 4;
			// 
			// tbCPassword
			// 
			this->tbCPassword->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->tbCPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbCPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tbCPassword->ForeColor = System::Drawing::Color::White;
			this->tbCPassword->Location = System::Drawing::Point(1627, 825);
			this->tbCPassword->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tbCPassword->MaxLength = 20;
			this->tbCPassword->Name = L"tbCPassword";
			this->tbCPassword->PasswordChar = '*';
			this->tbCPassword->Size = System::Drawing::Size(380, 54);
			this->tbCPassword->TabIndex = 5;
			// 
			// tbPESEL
			// 
			this->tbPESEL->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->tbPESEL->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbPESEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tbPESEL->ForeColor = System::Drawing::Color::White;
			this->tbPESEL->Location = System::Drawing::Point(1627, 564);
			this->tbPESEL->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tbPESEL->MaxLength = 11;
			this->tbPESEL->Name = L"tbPESEL";
			this->tbPESEL->Size = System::Drawing::Size(380, 54);
			this->tbPESEL->TabIndex = 2;
			// 
			// btConfirm
			// 
			this->btConfirm->BackColor = System::Drawing::Color::Transparent;
			this->btConfirm->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btConfirm.BackgroundImage")));
			this->btConfirm->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btConfirm->Location = System::Drawing::Point(1537, 940);
			this->btConfirm->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btConfirm->Name = L"btConfirm";
			this->btConfirm->Size = System::Drawing::Size(211, 57);
			this->btConfirm->TabIndex = 6;
			this->btConfirm->Text = L"PotwierdŸ";
			this->btConfirm->UseVisualStyleBackColor = false;
			this->btConfirm->Click += gcnew System::EventHandler(this, &RegisterForm::btConfirm_Click);
			// 
			// btLog_in_2
			// 
			this->btLog_in_2->BackColor = System::Drawing::Color::Transparent;
			this->btLog_in_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btLog_in_2.BackgroundImage")));
			this->btLog_in_2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btLog_in_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btLog_in_2->Location = System::Drawing::Point(749, 871);
			this->btLog_in_2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btLog_in_2->Name = L"btLog_in_2";
			this->btLog_in_2->Size = System::Drawing::Size(93, 85);
			this->btLog_in_2->TabIndex = 7;
			this->btLog_in_2->UseVisualStyleBackColor = false;
			this->btLog_in_2->Click += gcnew System::EventHandler(this, &RegisterForm::btLog_in_2_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1924, 1055);
			this->Controls->Add(this->btLog_in_2);
			this->Controls->Add(this->btConfirm);
			this->Controls->Add(this->tbPESEL);
			this->Controls->Add(this->tbCPassword);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->tbLogin);
			this->Controls->Add(this->tbSurname);
			this->Controls->Add(this->tbName);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"RegisterForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Us³ugi bankowe AGH - rejestracja";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
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
				"Jedno lub wiêcej pól pozosta³y niewype³nione", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			
			return;
		}

		//Warunek - identyczne has³a
		if (String::Compare(password, CPassword) != 0) {
			MessageBox::Show("Wprowadzono b³êdne has³a!",
				"B³¹d zgodnoœci", MessageBoxButtons::OK, MessageBoxIcon::Warning);

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
				"B³¹d po³¹czenia", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
};
}
