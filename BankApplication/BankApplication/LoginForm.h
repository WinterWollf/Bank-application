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
	/// Podsumowanie informacji o LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
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
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:


	protected:

	private: System::Windows::Forms::TextBox^ tbLogin;
	private: System::Windows::Forms::TextBox^ tbPassword;
	private: System::Windows::Forms::Button^ btLog_in;

	private: System::Windows::Forms::Button^ btRegister;



	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->tbLogin = (gcnew System::Windows::Forms::TextBox());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->btLog_in = (gcnew System::Windows::Forms::Button());
			this->btRegister = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// tbLogin
			// 
			this->tbLogin->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbLogin->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbLogin->Font = (gcnew System::Drawing::Font(L"Calibri", 37));
			this->tbLogin->Location = System::Drawing::Point(212, 287);
			this->tbLogin->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tbLogin->MaxLength = 20;
			this->tbLogin->Name = L"tbLogin";
			this->tbLogin->Size = System::Drawing::Size(420, 61);
			this->tbLogin->TabIndex = 2;
			// 
			// tbPassword
			// 
			this->tbPassword->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbPassword->Font = (gcnew System::Drawing::Font(L"Calibri", 37));
			this->tbPassword->Location = System::Drawing::Point(214, 394);
			this->tbPassword->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->tbPassword->MaxLength = 20;
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->PasswordChar = '*';
			this->tbPassword->Size = System::Drawing::Size(424, 61);
			this->tbPassword->TabIndex = 3;
			// 
			// btLog_in
			// 
			this->btLog_in->BackColor = System::Drawing::Color::Transparent;
			this->btLog_in->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btLog_in.BackgroundImage")));
			this->btLog_in->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btLog_in->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btLog_in->Location = System::Drawing::Point(663, 560);
			this->btLog_in->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btLog_in->Name = L"btLog_in";
			this->btLog_in->Size = System::Drawing::Size(217, 68);
			this->btLog_in->TabIndex = 4;
			this->btLog_in->UseVisualStyleBackColor = false;
			this->btLog_in->Click += gcnew System::EventHandler(this, &LoginForm::btLog_in_Click);
			// 
			// btRegister
			// 
			this->btRegister->Location = System::Drawing::Point(408, 570);
			this->btRegister->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btRegister->Name = L"btRegister";
			this->btRegister->Size = System::Drawing::Size(156, 45);
			this->btRegister->TabIndex = 5;
			this->btRegister->Text = L"Rejestracja";
			this->btRegister->UseVisualStyleBackColor = true;
			this->btRegister->Click += gcnew System::EventHandler(this, &LoginForm::btRegister_Click);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1443, 857);
			this->Controls->Add(this->btRegister);
			this->Controls->Add(this->btLog_in);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->tbLogin);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"LoginForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Us³ugi bankowe AGH";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//Zmienna globalna - user
	public: User^ user = nullptr;

	//Zmienna globalna - switchToRegister
	public: bool switchToRegister = false;

	private: System::Void btLog_in_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ login = this->tbLogin->Text;
		String^ password = this->tbPassword->Text;

		//B³¹d - brak danych
		if ((login->Length == 0) || (password->Length == 0)) {
			MessageBox::Show("Proszê wprowadziæ login i has³o!",
				"B³¹d logowania", MessageBoxButtons::OK);
			return;
		}
		
		//Obs³uga bazy danych
		try { 
			//Adres bazy danych
			String^ connectionString = "Data Source=LAPTOP;Initial Catalog=BankApplication;Integrated Security=True";
			
			//Ustanowienie po³¹czenia
			SqlConnection sqlConnection(connectionString);
			sqlConnection.Open();

			//Zapytanie SQL - login, has³o
			String^ sqlQuerry = "SELECT * FROM users WHERE login=@login AND password=@password;";
			SqlCommand command(sqlQuerry, % sqlConnection);
			command.Parameters->AddWithValue("@login", login);
			command.Parameters->AddWithValue("@password", password);

			//Wywo³anie zapytania
			SqlDataReader^ reader = command.ExecuteReader();
			if (reader->Read()) { //Znaleziono u¿ytkownika - dane poprawne
				//Inicjalizacja zmiennej user 
				user = gcnew User;
				user->id = reader->GetInt32(0);
				user->login = reader->GetString(1);
				user->password = reader->GetString(2);
				user->name = reader->GetString(3);
				user->surname = reader->GetString(4);
				user->money = reader->GetInt32(5);
				user->PESEL = reader->GetString(6);

				this->Close();
			}
			else { //Nie znaleziono u¿ytkownika - b³êdne dane
				MessageBox::Show("Nieprawid³owy login lub has³o!",
					"B³êdne dane", MessageBoxButtons::OK);	 
			}
		}
		catch (Exception^ e) { //B³¹d po³¹czenia z baz¹ danych
			MessageBox::Show("B³¹d po³¹czenia z baz¹ danych. Przepraszamy za utrudnienia",
				"B³¹d po³¹czenia", MessageBoxButtons::OK);
		}
	}
	private: System::Void btRegister_Click(System::Object^ sender, System::EventArgs^ e) {
		this->switchToRegister = true;
		this->Close();
	}
};
}
