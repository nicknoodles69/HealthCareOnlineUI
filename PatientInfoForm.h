#pragma once
#include "User.h"
#include "MainForm.h"

namespace HealthCareUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PatientInfoForm
	/// </summary>
	public ref class PatientInfoForm : public System::Windows::Forms::Form
	{
	public:
		
		PatientInfoForm(User^ user)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			lbUserInfo->Text = "Patient ID: " + user->id + "\nName: " + user->name +
				"\nEmail: " + user->email + "\nAddress: " + user->address +
				"\nBirth Date: " +user->birthdate + "\nGender: " + user->gender + 
				"\nInsurance Provider: " + user->insurance;

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~PatientInfoForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ lbUserInfo;
	private: System::Windows::Forms::LinkLabel^ llMainForm;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lbUserInfo = (gcnew System::Windows::Forms::Label());
			this->llMainForm = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(164, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(357, 57);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Patient Information";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// lbUserInfo
			// 
			this->lbUserInfo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbUserInfo->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->lbUserInfo->Location = System::Drawing::Point(12, 80);
			this->lbUserInfo->Name = L"lbUserInfo";
			this->lbUserInfo->Size = System::Drawing::Size(659, 243);
			this->lbUserInfo->TabIndex = 1;
			this->lbUserInfo->Text = L"label2";
			// 
			// llMainForm
			// 
			this->llMainForm->AutoSize = true;
			this->llMainForm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->llMainForm->Location = System::Drawing::Point(503, 431);
			this->llMainForm->Name = L"llMainForm";
			this->llMainForm->Size = System::Drawing::Size(168, 24);
			this->llMainForm->TabIndex = 2;
			this->llMainForm->TabStop = true;
			this->llMainForm->Text = L"Back to Dashboard";
			this->llMainForm->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &PatientInfoForm::llMainForm_LinkClicked);
			// 
			// PatientInfoForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Highlight;
			this->ClientSize = System::Drawing::Size(708, 490);
			this->Controls->Add(this->llMainForm);
			this->Controls->Add(this->lbUserInfo);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->Name = L"PatientInfoForm";
			this->Text = L"PatientInfoForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: bool SwitchToDash = false;
	private: System::Void llMainForm_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->SwitchToDash = true;
		this->Close();
	}
};
}
