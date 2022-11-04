#include "LoginForm.h"
#include "MainForm.h"
#include "RegisterForm.h"
#include "PatientInfoForm.h"
#include "AccMForm.h"
#include "BookAppForm.h"
#include "HealthCForm.h"
#include <iostream>




using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	User^ user = nullptr;
	while (true) {
		HealthCareUI::LoginForm loginForm;
		loginForm.ShowDialog();

		if (loginForm.switchToRegister) {
			//show the register form
			HealthCareUI::RegisterForm registerForm;
			registerForm.ShowDialog();

			if (registerForm.switchToLogin) {
				continue;
			}
			else {
				user = registerForm.user;
				break;
			}
		}
		else {
			user = loginForm.user;
			break;
		}

		

	}

	while (user != nullptr) { 
		HealthCareUI::MainForm MainForm(user);
		Application::Run(% MainForm);

		if (MainForm.switchToProfile == true) {
			HealthCareUI::PatientInfoForm PatientInfoForm(user);
			PatientInfoForm.ShowDialog();


			if (PatientInfoForm.SwitchToDash == true) {
				continue;
			}


		}

		if (MainForm.switchToAccM == true) {
			HealthCareUI::AccMForm AccMForm(user);
			AccMForm.ShowDialog();


			if (AccMForm.switchToDash == true) {
				continue;
			}


		}

		if (MainForm.switchToBook == true) {
			HealthCareUI::BookAppForm BookAppForm;
			BookAppForm.ShowDialog();

			if (BookAppForm.runExe == true) {

				system("start C:\\Users\\Nicholas\\source\\repos\\HealthCareUI\\BookingSystem.exe");
				
			}


			if (BookAppForm.switchToDash == true) {
				continue;
			}


		}

		if (MainForm.switchToHealthC == true) {
			HealthCareUI::HealthCForm HealthCForm(user);
			HealthCForm.ShowDialog();


			if (HealthCForm.switchToDash == true) {
				continue;
			}


		}

		else {
			MessageBox::Show("Authentication Canceled",
				"Program.cpp", MessageBoxButtons::OK);
			return;
		}

	}
}