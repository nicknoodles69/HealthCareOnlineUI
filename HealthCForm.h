#pragma once
#include "User.h"

namespace HealthCareUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for HealthCForm
	/// </summary>
	public ref class HealthCForm : public System::Windows::Forms::Form
	{
	public:
		HealthCForm(User^ user)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~HealthCForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ llCoverage;
	protected:

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::LinkLabel^ llDashboard;

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
			this->llCoverage = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->llDashboard = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(207, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(218, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Health Coverage";
			// 
			// llCoverage
			// 
			this->llCoverage->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->llCoverage->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->llCoverage->Location = System::Drawing::Point(261, 83);
			this->llCoverage->Name = L"llCoverage";
			this->llCoverage->Size = System::Drawing::Size(194, 29);
			this->llCoverage->TabIndex = 1;
			this->llCoverage->Text = L"label2";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(12, 83);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(181, 29);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Insurance Provider :";
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(12, 144);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(228, 29);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Monthly Premium Cost :";
			// 
			// llDashboard
			// 
			this->llDashboard->AutoSize = true;
			this->llDashboard->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->llDashboard->Location = System::Drawing::Point(455, 372);
			this->llDashboard->Name = L"llDashboard";
			this->llDashboard->Size = System::Drawing::Size(216, 29);
			this->llDashboard->TabIndex = 4;
			this->llDashboard->TabStop = true;
			this->llDashboard->Text = L"Back to Dashboard";
			this->llDashboard->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &HealthCForm::llDashboard_LinkClicked);
			// 
			// HealthCForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Highlight;
			this->ClientSize = System::Drawing::Size(683, 425);
			this->Controls->Add(this->llDashboard);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->llCoverage);
			this->Controls->Add(this->label1);
			this->Name = L"HealthCForm";
			this->Text = L"HealthCForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: bool switchToDash = false;
	private: System::Void llDashboard_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->switchToDash = true;
		this->Close();
	}
};
}
