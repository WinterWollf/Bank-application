#pragma once
#include "User.h"

namespace BankApplication {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o DashboardForm
	/// </summary>
	public ref class DashboardForm : public System::Windows::Forms::Form
	{
	public:
		DashboardForm(User ^user)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//

			//Inicializacja
			lbName->Text = user->name;
			lbSurname->Text = user->surname;
			lbPESEL->Text = user->PESEL;
			lbMoney->Text = "" + user->money;

		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
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

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DashboardForm::typeid));
			this->lbName = (gcnew System::Windows::Forms::Label());
			this->lbSurname = (gcnew System::Windows::Forms::Label());
			this->lbPESEL = (gcnew System::Windows::Forms::Label());
			this->lbMoney = (gcnew System::Windows::Forms::Label());
			this->btLogout = (gcnew System::Windows::Forms::Button());
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
			this->btLogout->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btLogout->Name = L"btLogout";
			this->btLogout->Size = System::Drawing::Size(116, 51);
			this->btLogout->TabIndex = 6;
			this->btLogout->Text = L"Wyloguj";
			this->btLogout->UseVisualStyleBackColor = false;
			this->btLogout->Click += gcnew System::EventHandler(this, &DashboardForm::btLogout_Click);
			// 
			// DashboardForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1154, 634);
			this->Controls->Add(this->btLogout);
			this->Controls->Add(this->lbMoney);
			this->Controls->Add(this->lbPESEL);
			this->Controls->Add(this->lbSurname);
			this->Controls->Add(this->lbName);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"DashboardForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Us³ugi bankowe AGH - pulpit";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: bool SwitchToLogout = false;

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
