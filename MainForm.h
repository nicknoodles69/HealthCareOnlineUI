#pragma once
#include "User.h"
#include "PatientInfoForm.h"


namespace HealthCareUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(User^ user)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			lbUserInfo->Text = ""+ user->name;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ lbUserInfo;
	private: System::Windows::Forms::LinkLabel^ llPatientInfo;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::LinkLabel^ linkLabel4;
	private: System::Windows::Forms::LinkLabel^ linkLabel3;
	private: System::Windows::Forms::LinkLabel^ llProfile;

	private: System::Windows::Forms::LinkLabel^ linkLabel2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ btnLogout;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lbUserInfo = (gcnew System::Windows::Forms::Label());
			this->llPatientInfo = (gcnew System::Windows::Forms::LinkLabel());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->linkLabel4 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel3 = (gcnew System::Windows::Forms::LinkLabel());
			this->llProfile = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnLogout = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(57, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(666, 54);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Welcome to Patient Dashboard";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// lbUserInfo
			// 
			this->lbUserInfo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbUserInfo->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbUserInfo->Location = System::Drawing::Point(267, 63);
			this->lbUserInfo->Name = L"lbUserInfo";
			this->lbUserInfo->Size = System::Drawing::Size(227, 40);
			this->lbUserInfo->TabIndex = 1;
			this->lbUserInfo->Text = L"label2";
			this->lbUserInfo->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// llPatientInfo
			// 
			this->llPatientInfo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->llPatientInfo->LinkColor = System::Drawing::Color::White;
			this->llPatientInfo->Location = System::Drawing::Point(6, 19);
			this->llPatientInfo->Name = L"llPatientInfo";
			this->llPatientInfo->Size = System::Drawing::Size(228, 29);
			this->llPatientInfo->TabIndex = 2;
			this->llPatientInfo->TabStop = true;
			this->llPatientInfo->Text = L"Account Management";
			this->llPatientInfo->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MainForm::llPatientInfo_LinkClicked);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::HotTrack;
			this->groupBox1->Controls->Add(this->linkLabel4);
			this->groupBox1->Controls->Add(this->linkLabel3);
			this->groupBox1->Controls->Add(this->llProfile);
			this->groupBox1->Controls->Add(this->linkLabel2);
			this->groupBox1->Controls->Add(this->llPatientInfo);
			this->groupBox1->Location = System::Drawing::Point(12, 180);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(801, 65);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			// 
			// linkLabel4
			// 
			this->linkLabel4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel4->LinkColor = System::Drawing::Color::White;
			this->linkLabel4->Location = System::Drawing::Point(598, 19);
			this->linkLabel4->Name = L"linkLabel4";
			this->linkLabel4->Size = System::Drawing::Size(191, 29);
			this->linkLabel4->TabIndex = 5;
			this->linkLabel4->TabStop = true;
			this->linkLabel4->Text = L"Book Appointment";
			this->linkLabel4->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MainForm::linkLabel4_LinkClicked);
			// 
			// linkLabel3
			// 
			this->linkLabel3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel3->LinkColor = System::Drawing::Color::White;
			this->linkLabel3->Location = System::Drawing::Point(416, 19);
			this->linkLabel3->Name = L"linkLabel3";
			this->linkLabel3->Size = System::Drawing::Size(176, 29);
			this->linkLabel3->TabIndex = 5;
			this->linkLabel3->TabStop = true;
			this->linkLabel3->Text = L"Health Coverage";
			this->linkLabel3->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MainForm::linkLabel3_LinkClicked);
			// 
			// llProfile
			// 
			this->llProfile->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->llProfile->LinkColor = System::Drawing::Color::White;
			this->llProfile->Location = System::Drawing::Point(328, 19);
			this->llProfile->Name = L"llProfile";
			this->llProfile->Size = System::Drawing::Size(82, 29);
			this->llProfile->TabIndex = 4;
			this->llProfile->TabStop = true;
			this->llProfile->Text = L"Profile";
			this->llProfile->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MainForm::llProfile_LinkClicked);
			// 
			// linkLabel2
			// 
			this->linkLabel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel2->LinkColor = System::Drawing::Color::White;
			this->linkLabel2->Location = System::Drawing::Point(241, 19);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(81, 29);
			this->linkLabel2->TabIndex = 5;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"Inbox";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(57, 123);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(666, 54);
			this->label2->TabIndex = 4;
			this->label2->Text = L"How can we help you\?";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 262);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(778, 196);
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// btnLogout
			// 
			this->btnLogout->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLogout->Location = System::Drawing::Point(326, 476);
			this->btnLogout->Name = L"btnLogout";
			this->btnLogout->Size = System::Drawing::Size(148, 36);
			this->btnLogout->TabIndex = 6;
			this->btnLogout->Text = L"Logout";
			this->btnLogout->UseVisualStyleBackColor = true;
			this->btnLogout->Click += gcnew System::EventHandler(this, &MainForm::btnLogout_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->ClientSize = System::Drawing::Size(825, 536);
			this->Controls->Add(this->btnLogout);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->lbUserInfo);
			this->Controls->Add(this->label1);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	public: bool switchToProfile = false;
		  bool switchToLogout = false;
	private: System::Void llProfile_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->switchToProfile = true;
		this->Close();
	}
private: System::Void btnLogout_Click(System::Object^ sender, System::EventArgs^ e) {
	bool switchToLogout = true;
	this->Close();
}
	public: bool switchToAccM = false;
private: System::Void llPatientInfo_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->switchToAccM = true;
	this->Close();
}
	  public: bool switchToBook = false;
private: System::Void linkLabel4_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->switchToBook = true;
	this->Close();
}
	   public: bool switchToHealthC = false;
private: System::Void linkLabel3_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->switchToHealthC = true;
	this->Close();
}
};
}
