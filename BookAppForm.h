#pragma once

namespace HealthCareUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for BookAppForm
	/// </summary>
	public ref class BookAppForm : public System::Windows::Forms::Form
	{
	public:
		BookAppForm(void)
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
		~BookAppForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::LinkLabel^ llDashboard;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnBook;
	private: System::Windows::Forms::Label^ label2;
	protected:

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
			this->llDashboard = (gcnew System::Windows::Forms::LinkLabel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnBook = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// llDashboard
			// 
			this->llDashboard->AutoSize = true;
			this->llDashboard->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->llDashboard->Location = System::Drawing::Point(608, 408);
			this->llDashboard->Name = L"llDashboard";
			this->llDashboard->Size = System::Drawing::Size(176, 24);
			this->llDashboard->TabIndex = 0;
			this->llDashboard->TabStop = true;
			this->llDashboard->Text = L"Back To Dashboard";
			this->llDashboard->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &BookAppForm::llDashboard_LinkClicked);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(242, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(262, 38);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Booking System";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// btnBook
			// 
			this->btnBook->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBook->Location = System::Drawing::Point(229, 177);
			this->btnBook->Name = L"btnBook";
			this->btnBook->Size = System::Drawing::Size(275, 75);
			this->btnBook->TabIndex = 2;
			this->btnBook->Text = L"Press to Launch";
			this->btnBook->UseVisualStyleBackColor = true;
			this->btnBook->Click += gcnew System::EventHandler(this, &BookAppForm::btnBook_Click);
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(235, 141);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(279, 33);
			this->label2->TabIndex = 3;
			this->label2->Text = L"To Schduele an Appointment";
			// 
			// BookAppForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Highlight;
			this->ClientSize = System::Drawing::Size(808, 459);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnBook);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->llDashboard);
			this->Name = L"BookAppForm";
			this->Text = L"BookAppForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: bool switchToDash= false;
	private: System::Void llDashboard_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->switchToDash = true;
		this->Close();
	}
	public: bool runExe = false;
	private: System::Void btnBook_Click(System::Object^ sender, System::EventArgs^ e) {
		this->runExe = true;
		this->switchToDash = true;
		this->Close();
		
	}
};
}
