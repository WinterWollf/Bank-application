#pragma once
#include "User.h"
#include "Receivers.h"

namespace BankApplication {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;


	public ref class DashboardForm : public System::Windows::Forms::Form
	{
	public:
		DashboardForm(User ^user)
		{
			InitializeComponent();
			//Inicializacja
			lbName->Text = user->name;
			lbSurname->Text = user->surname;
			lbPESEL->Text = user->PESEL;
			lbMoney->Text = "" + user->money;
		}

	protected:
		~DashboardForm()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::Label^ lbName;
	private: System::Windows::Forms::Label^ lbSurname;
	private: System::Windows::Forms::Label^ lbPESEL;
	private: System::Windows::Forms::Label^ lbMoney;
	private: System::Windows::Forms::Button^ btLogout;
	private: System::Windows::Forms::TextBox^ tbReceiver;
	private: System::Windows::Forms::TextBox^ tbTitle;
	private: System::Windows::Forms::TextBox^ tbAmount;
	private: System::Windows::Forms::Button^ btSend;



	protected:

	protected:

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DashboardForm::typeid));
			this->lbName = (gcnew System::Windows::Forms::Label());
			this->lbSurname = (gcnew System::Windows::Forms::Label());
			this->lbPESEL = (gcnew System::Windows::Forms::Label());
			this->lbMoney = (gcnew System::Windows::Forms::Label());
			this->btLogout = (gcnew System::Windows::Forms::Button());
			this->tbReceiver = (gcnew System::Windows::Forms::TextBox());
			this->tbTitle = (gcnew System::Windows::Forms::TextBox());
			this->tbAmount = (gcnew System::Windows::Forms::TextBox());
			this->btSend = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lbName
			// 
			this->lbName->AutoSize = true;
			this->lbName->BackColor = System::Drawing::Color::Transparent;
			this->lbName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 25.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lbName->ForeColor = System::Drawing::Color::White;
			this->lbName->Location = System::Drawing::Point(455, 610);
			this->lbName->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbName->Name = L"lbName";
			this->lbName->Size = System::Drawing::Size(84, 46);
			this->lbName->TabIndex = 2;
			this->lbName->Text = L"Imiê";
			// 
			// lbSurname
			// 
			this->lbSurname->AutoSize = true;
			this->lbSurname->BackColor = System::Drawing::Color::Transparent;
			this->lbSurname->Font = (gcnew System::Drawing::Font(L"Segoe UI", 25.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lbSurname->ForeColor = System::Drawing::Color::White;
			this->lbSurname->Location = System::Drawing::Point(449, 692);
			this->lbSurname->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbSurname->Name = L"lbSurname";
			this->lbSurname->Size = System::Drawing::Size(160, 46);
			this->lbSurname->TabIndex = 3;
			this->lbSurname->Text = L"Nazwisko";
			// 
			// lbPESEL
			// 
			this->lbPESEL->AutoSize = true;
			this->lbPESEL->BackColor = System::Drawing::Color::Transparent;
			this->lbPESEL->Font = (gcnew System::Drawing::Font(L"Segoe UI", 25.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lbPESEL->ForeColor = System::Drawing::Color::White;
			this->lbPESEL->Location = System::Drawing::Point(441, 771);
			this->lbPESEL->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbPESEL->Name = L"lbPESEL";
			this->lbPESEL->Size = System::Drawing::Size(107, 46);
			this->lbPESEL->TabIndex = 4;
			this->lbPESEL->Text = L"PESEL";
			// 
			// lbMoney
			// 
			this->lbMoney->AutoSize = true;
			this->lbMoney->BackColor = System::Drawing::Color::Transparent;
			this->lbMoney->Font = (gcnew System::Drawing::Font(L"Segoe UI", 39.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->lbMoney->ForeColor = System::Drawing::Color::White;
			this->lbMoney->Location = System::Drawing::Point(1328, 246);
			this->lbMoney->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbMoney->Name = L"lbMoney";
			this->lbMoney->Size = System::Drawing::Size(195, 71);
			this->lbMoney->TabIndex = 5;
			this->lbMoney->Text = L"Money";
			this->lbMoney->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// btLogout
			// 
			this->btLogout->BackColor = System::Drawing::Color::Transparent;
			this->btLogout->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btLogout.BackgroundImage")));
			this->btLogout->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btLogout->Font = (gcnew System::Drawing::Font(L"Calibri", 18));
			this->btLogout->Location = System::Drawing::Point(146, 96);
			this->btLogout->Margin = System::Windows::Forms::Padding(2);
			this->btLogout->Name = L"btLogout";
			this->btLogout->Size = System::Drawing::Size(116, 51);
			this->btLogout->TabIndex = 6;
			this->btLogout->Text = L"Wyloguj";
			this->btLogout->UseVisualStyleBackColor = false;
			this->btLogout->Click += gcnew System::EventHandler(this, &DashboardForm::btLogout_Click);
			// 
			// tbReceiver
			// 
			this->tbReceiver->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->tbReceiver->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbReceiver->Font = (gcnew System::Drawing::Font(L"Calibri", 28.2F));
			this->tbReceiver->ForeColor = System::Drawing::Color::White;
			this->tbReceiver->Location = System::Drawing::Point(1127, 549);
			this->tbReceiver->MaxLength = 50;
			this->tbReceiver->Name = L"tbReceiver";
			this->tbReceiver->Size = System::Drawing::Size(513, 46);
			this->tbReceiver->TabIndex = 7;
			// 
			// tbTitle
			// 
			this->tbTitle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->tbTitle->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbTitle->Font = (gcnew System::Drawing::Font(L"Calibri", 28.2F));
			this->tbTitle->ForeColor = System::Drawing::Color::White;
			this->tbTitle->Location = System::Drawing::Point(1127, 667);
			this->tbTitle->MaxLength = 80;
			this->tbTitle->Name = L"tbTitle";
			this->tbTitle->Size = System::Drawing::Size(513, 46);
			this->tbTitle->TabIndex = 8;
			// 
			// tbAmount
			// 
			this->tbAmount->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->tbAmount->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbAmount->Font = (gcnew System::Drawing::Font(L"Calibri", 28.2F));
			this->tbAmount->ForeColor = System::Drawing::Color::White;
			this->tbAmount->Location = System::Drawing::Point(1127, 781);
			this->tbAmount->MaxLength = 20;
			this->tbAmount->Name = L"tbAmount";
			this->tbAmount->Size = System::Drawing::Size(286, 46);
			this->tbAmount->TabIndex = 9;
			// 
			// btSend
			// 
			this->btSend->BackColor = System::Drawing::Color::Transparent;
			this->btSend->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btSend.BackgroundImage")));
			this->btSend->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btSend->Location = System::Drawing::Point(1357, 870);
			this->btSend->Name = L"btSend";
			this->btSend->Size = System::Drawing::Size(151, 60);
			this->btSend->TabIndex = 10;
			this->btSend->Text = L"Wykonaj";
			this->btSend->UseVisualStyleBackColor = false;
			this->btSend->Click += gcnew System::EventHandler(this, &DashboardForm::btSend_Click);
			// 
			// DashboardForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1652, 1022);
			this->Controls->Add(this->btSend);
			this->Controls->Add(this->tbAmount);
			this->Controls->Add(this->tbTitle);
			this->Controls->Add(this->tbReceiver);
			this->Controls->Add(this->btLogout);
			this->Controls->Add(this->lbMoney);
			this->Controls->Add(this->lbPESEL);
			this->Controls->Add(this->lbSurname);
			this->Controls->Add(this->lbName);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"DashboardForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Us³ugi bankowe AGH - pulpit";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: bool SwitchToLogout = false;
	
	public: User^ user = nullptr;

	//Zmienna globalna - odbiorca
	public: Receivers^ receivers = nullptr;

	//Dodanie nowego rekordu - przelew
	private: System::Void btSend_Click(System::Object^ sender, System::EventArgs^ e) {
		//Pobranie wpisanych danych
		String^ receiver = tbReceiver->Text;
		String^ title = tbTitle->Text;
		String^ amount = tbAmount->Text;

		//Warunek - wszystkie pola uzupe³nione
		if ((receiver->Length == 0) || (title->Length == 0) || (amount->Length == 0)) {
			MessageBox::Show("Proszê wype³niæ wszystkie pola",
				"Jedno lub wiêcej pól pozosta³y niewype³nione", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);

			return;
		}

		try {
			//Adres bazy danych
			String^ connectionString = "Data Source=LAPTOP;Initial Catalog=BankApplication;Integrated Security=True";

			//Ustanowienie po³¹czenia
			SqlConnection sqlConnection(connectionString);
			sqlConnection.Open();

			//Zapytanie SQL - wczytanie nowych danych do tabeli "users"
			String^ sqlQuerry = "INSERT INTO transactions " +
				"(receiver, title, amount) VALUES" +
				"(@receiver, @title, @amount);";

			SqlCommand command(sqlQuerry, % sqlConnection);
			command.Parameters->AddWithValue("@receiver", receiver);
			command.Parameters->AddWithValue("@title", title);
			command.Parameters->AddWithValue("@amount", amount);

			command.ExecuteNonQuery();

			//Inicjalizacja zmiennej - odbiorca
			receivers = gcnew Receivers;
			receivers->receiver = receiver;
			receivers->title = title;
			receivers->amount = amount;

			MessageBox::Show("Przelew zosta³ wys³any",
				"Potwierdzenie wys³ania przelewu", MessageBoxButtons::OK, MessageBoxIcon::Information);

			//Wyczyszczenie pól tekstowych
			tbReceiver->Clear();
			tbTitle->Clear();
			tbAmount->Clear();
		}
		catch (Exception^ ex) { //B³¹d po³¹czenia z baz¹ danych
			MessageBox::Show("B³¹d po³¹czenia z baz¹ danych. Przepraszamy za utrudnienia",
				"B³¹d po³¹czenia", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	//Wylogowanie
	private: System::Void btLogout_Click(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("Czy na pewno chcesz siê wylogowaæ?",
			"Wyloguj", MessageBoxButtons::YesNo, MessageBoxIcon::Question) 
			== System::Windows::Forms::DialogResult::Yes) {
			this->SwitchToLogout = true;
			this->Close();
		}
		else {

		}
	}
};
}
