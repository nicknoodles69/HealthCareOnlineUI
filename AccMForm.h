#pragma once
#include "User.h"


namespace HealthCareUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for AccMForm
	/// </summary>
	public ref class AccMForm : public System::Windows::Forms::Form
	{
	public:
		AccMForm(User^ user)
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
		~AccMForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::LinkLabel^ llDashboard;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ tbName;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ tbPhone;
	private: System::Windows::Forms::TextBox^ tbEmail;
	private: System::Windows::Forms::TextBox^ tbAddress;
	private: System::Windows::Forms::TextBox^ tbGender;
	private: System::Windows::Forms::TextBox^ tbBirthDate;
	private: System::Windows::Forms::TextBox^ tbInsurance;
	private: System::Windows::Forms::TextBox^ tbPassword;
	private: System::Windows::Forms::TextBox^ tbConfirmPassword;

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
			this->llDashboard = (gcnew System::Windows::Forms::LinkLabel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->tbPhone = (gcnew System::Windows::Forms::TextBox());
			this->tbEmail = (gcnew System::Windows::Forms::TextBox());
			this->tbAddress = (gcnew System::Windows::Forms::TextBox());
			this->tbGender = (gcnew System::Windows::Forms::TextBox());
			this->tbBirthDate = (gcnew System::Windows::Forms::TextBox());
			this->tbInsurance = (gcnew System::Windows::Forms::TextBox());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->tbConfirmPassword = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(219, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(270, 36);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Account Managment";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// llDashboard
			// 
			this->llDashboard->AutoSize = true;
			this->llDashboard->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->llDashboard->Location = System::Drawing::Point(568, 394);
			this->llDashboard->Name = L"llDashboard";
			this->llDashboard->Size = System::Drawing::Size(150, 20);
			this->llDashboard->TabIndex = 1;
			this->llDashboard->TabStop = true;
			this->llDashboard->Text = L"Back To Dashboard";
			this->llDashboard->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &AccMForm::llDashboard_LinkClicked);
			// 
			// button1
			// 
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(299, 384);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(113, 43);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Save Changes";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AccMForm::button1_Click);
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 97);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(68, 30);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Name";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 163);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(68, 30);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Phone";
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(12, 133);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(68, 30);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Email";
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(12, 283);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(97, 30);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Insurance";
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(12, 223);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(97, 30);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Gender";
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(12, 253);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(97, 30);
			this->label7->TabIndex = 8;
			this->label7->Text = L"Birth Date";
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(12, 313);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(97, 30);
			this->label8->TabIndex = 9;
			this->label8->Text = L"Password";
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(12, 193);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(97, 30);
			this->label9->TabIndex = 10;
			this->label9->Text = L"Address";
			// 
			// label10
			// 
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(12, 343);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(165, 30);
			this->label10->TabIndex = 11;
			this->label10->Text = L"Confirm Password";
			// 
			// tbName
			// 
			this->tbName->Location = System::Drawing::Point(225, 102);
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(273, 20);
			this->tbName->TabIndex = 12;
			// 
			// label11
			// 
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(242, 54);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(228, 30);
			this->label11->TabIndex = 13;
			this->label11->Text = L"Enter the fields to change";
			// 
			// tbPhone
			// 
			this->tbPhone->Location = System::Drawing::Point(225, 164);
			this->tbPhone->Name = L"tbPhone";
			this->tbPhone->Size = System::Drawing::Size(273, 20);
			this->tbPhone->TabIndex = 14;
			// 
			// tbEmail
			// 
			this->tbEmail->Location = System::Drawing::Point(225, 133);
			this->tbEmail->Name = L"tbEmail";
			this->tbEmail->Size = System::Drawing::Size(273, 20);
			this->tbEmail->TabIndex = 15;
			// 
			// tbAddress
			// 
			this->tbAddress->Location = System::Drawing::Point(225, 198);
			this->tbAddress->Name = L"tbAddress";
			this->tbAddress->Size = System::Drawing::Size(273, 20);
			this->tbAddress->TabIndex = 16;
			// 
			// tbGender
			// 
			this->tbGender->Location = System::Drawing::Point(225, 228);
			this->tbGender->Name = L"tbGender";
			this->tbGender->Size = System::Drawing::Size(273, 20);
			this->tbGender->TabIndex = 17;
			// 
			// tbBirthDate
			// 
			this->tbBirthDate->Location = System::Drawing::Point(225, 258);
			this->tbBirthDate->Name = L"tbBirthDate";
			this->tbBirthDate->Size = System::Drawing::Size(273, 20);
			this->tbBirthDate->TabIndex = 18;
			// 
			// tbInsurance
			// 
			this->tbInsurance->Location = System::Drawing::Point(225, 288);
			this->tbInsurance->Name = L"tbInsurance";
			this->tbInsurance->Size = System::Drawing::Size(273, 20);
			this->tbInsurance->TabIndex = 19;
			// 
			// tbPassword
			// 
			this->tbPassword->Location = System::Drawing::Point(225, 314);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->Size = System::Drawing::Size(273, 20);
			this->tbPassword->TabIndex = 20;
			// 
			// tbConfirmPassword
			// 
			this->tbConfirmPassword->Location = System::Drawing::Point(225, 343);
			this->tbConfirmPassword->Name = L"tbConfirmPassword";
			this->tbConfirmPassword->Size = System::Drawing::Size(273, 20);
			this->tbConfirmPassword->TabIndex = 21;
			// 
			// AccMForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->ClientSize = System::Drawing::Size(744, 443);
			this->Controls->Add(this->tbConfirmPassword);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->tbInsurance);
			this->Controls->Add(this->tbBirthDate);
			this->Controls->Add(this->tbGender);
			this->Controls->Add(this->tbAddress);
			this->Controls->Add(this->tbEmail);
			this->Controls->Add(this->tbPhone);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->tbName);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->llDashboard);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Name = L"AccMForm";
			this->Text = L"AccMForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: User^ user = nullptr;

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ name = tbName->Text;
		String^ email = tbEmail->Text;
		String^ phone = tbPhone->Text;
		String^ address = tbAddress->Text;
		String^ password = tbPassword->Text;
		String^ confirmPassword = tbConfirmPassword->Text;
		String^ birthdate = tbBirthDate->Text;
		String^ gender = tbGender->Text;
		String^ insurance = tbInsurance->Text;



		if (name->Length == 0 || email->Length == 0 || phone->Length == 0
			|| address->Length == 0 || password->Length == 0 || gender->Length == 0 ||
			birthdate->Length == 0 || insurance->Length == 0) {

			MessageBox::Show("Please enter all the fields",
				"One or more empty fields", MessageBoxButtons::OK);
			return;
		}

		if (String::Compare(password, confirmPassword) != 0) {
			MessageBox::Show("Password and Confirm Password do not match",
				"Password Error", MessageBoxButtons::OK);
			return;
		}

		try {
			String^ connString = "Data Source=DESKTOP-MU401A5\\SQLEXPRESS;Initial Catalog=HealthCareUI;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery = "INSERT INTO users " +
				"(name, email, phone, address, password, birthdate, gender, insurance) VALUES " +
				"(@name, @email, @phone, @address, @password, @birthdate, @gender, @insurance);";

			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->Clear();
			command.Parameters->AddWithValue("@name", name);
			command.Parameters->AddWithValue("@email", email);
			command.Parameters->AddWithValue("@phone", phone);
			command.Parameters->AddWithValue("@address", address);
			command.Parameters->AddWithValue("@password", password);
			command.Parameters->AddWithValue("@birthdate", birthdate);
			command.Parameters->AddWithValue("@gender", gender);
			command.Parameters->AddWithValue("@insurance", insurance);



			command.ExecuteNonQuery();
			user = gcnew User;
			user->name = name;
			user->email = email;
			user->phone = phone;
			user->address = address;
			user->password = password;
			user->birthdate = birthdate;
			user->gender = gender;
			user->insurance = insurance;


			this->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Failed to register new user",
				"Register Failure", MessageBoxButtons::OK);
		}
	}

	public: bool switchToDash = false;
private: System::Void llDashboard_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->switchToDash = true;
	this->Close();

}
};
}
