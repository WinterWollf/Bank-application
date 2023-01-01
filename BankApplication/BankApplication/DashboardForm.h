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
			lbUserInfo->Text = "ID: " + user->id + "Imiê: " + user->name + "Nazwisko:" 
				+ user->surname + "Money: " + user->money;
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
	private: System::Windows::Forms::Label^ Witaj;
	private: System::Windows::Forms::Label^ lbUserInfo;
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
			this->Witaj = (gcnew System::Windows::Forms::Label());
			this->lbUserInfo = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Witaj
			// 
			this->Witaj->AutoSize = true;
			this->Witaj->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Witaj->Location = System::Drawing::Point(412, 30);
			this->Witaj->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Witaj->Name = L"Witaj";
			this->Witaj->Size = System::Drawing::Size(82, 36);
			this->Witaj->TabIndex = 0;
			this->Witaj->Text = L"Witaj";
			this->Witaj->Click += gcnew System::EventHandler(this, &DashboardForm::Witaj_Click);
			// 
			// lbUserInfo
			// 
			this->lbUserInfo->AutoSize = true;
			this->lbUserInfo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lbUserInfo->Location = System::Drawing::Point(130, 85);
			this->lbUserInfo->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbUserInfo->Name = L"lbUserInfo";
			this->lbUserInfo->Size = System::Drawing::Size(169, 31);
			this->lbUserInfo->TabIndex = 1;
			this->lbUserInfo->Text = L"U¿ytkownik: ";
			this->lbUserInfo->Click += gcnew System::EventHandler(this, &DashboardForm::lbUserInfo_Click);
			// 
			// DashboardForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(985, 433);
			this->Controls->Add(this->lbUserInfo);
			this->Controls->Add(this->Witaj);
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
	private: System::Void lbUserInfo_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Witaj_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
