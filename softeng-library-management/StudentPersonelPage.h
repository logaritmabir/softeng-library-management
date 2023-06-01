#pragma once
#include "Student.h"

namespace softenglibrarymanagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for StudentPersonelPage
	/// </summary>
	public ref class StudentPersonelPage : public System::Windows::Forms::Form
	{
		Student^ student;
	public:
		StudentPersonelPage(Student^ std)
		{
			InitializeComponent();
			student = std;
			textBoxName->Text = std->name;
			textBoxSurname->Text = std->surname;
			textBoxNumber->Text = std->number;
			textBoxPenalty->Text = std->penalty.ToString();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StudentPersonelPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ userType;
	protected:
	private: System::Windows::Forms::Label^ password;
	private: System::Windows::Forms::Label^ userID;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBoxName;
	private: System::Windows::Forms::TextBox^ textBoxSurname;
	private: System::Windows::Forms::TextBox^ textBoxNumber;
	private: System::Windows::Forms::TextBox^ textBoxPenalty;





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
			this->userType = (gcnew System::Windows::Forms::Label());
			this->password = (gcnew System::Windows::Forms::Label());
			this->userID = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSurname = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNumber = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPenalty = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// userType
			// 
			this->userType->AutoSize = true;
			this->userType->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->userType->Location = System::Drawing::Point(12, 83);
			this->userType->Name = L"userType";
			this->userType->Size = System::Drawing::Size(83, 24);
			this->userType->TabIndex = 8;
			this->userType->Text = L"Numara";
			this->userType->Click += gcnew System::EventHandler(this, &StudentPersonelPage::userType_Click);
			// 
			// password
			// 
			this->password->AutoSize = true;
			this->password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->password->Location = System::Drawing::Point(12, 44);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(82, 24);
			this->password->TabIndex = 7;
			this->password->Text = L"Soyisim";
			this->password->Click += gcnew System::EventHandler(this, &StudentPersonelPage::password_Click);
			// 
			// userID
			// 
			this->userID->AutoSize = true;
			this->userID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->userID->Location = System::Drawing::Point(12, 9);
			this->userID->Name = L"userID";
			this->userID->Size = System::Drawing::Size(47, 24);
			this->userID->TabIndex = 6;
			this->userID->Text = L"Ýsim";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label1->Location = System::Drawing::Point(12, 119);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(57, 24);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Ceza";
			// 
			// textBoxName
			// 
			this->textBoxName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxName->Location = System::Drawing::Point(113, 20);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->ReadOnly = true;
			this->textBoxName->Size = System::Drawing::Size(129, 20);
			this->textBoxName->TabIndex = 10;
			// 
			// textBoxSurname
			// 
			this->textBoxSurname->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxSurname->Location = System::Drawing::Point(113, 55);
			this->textBoxSurname->Name = L"textBoxSurname";
			this->textBoxSurname->ReadOnly = true;
			this->textBoxSurname->Size = System::Drawing::Size(129, 20);
			this->textBoxSurname->TabIndex = 11;
			// 
			// textBoxNumber
			// 
			this->textBoxNumber->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxNumber->Location = System::Drawing::Point(113, 91);
			this->textBoxNumber->Name = L"textBoxNumber";
			this->textBoxNumber->ReadOnly = true;
			this->textBoxNumber->Size = System::Drawing::Size(129, 20);
			this->textBoxNumber->TabIndex = 12;
			this->textBoxNumber->TextChanged += gcnew System::EventHandler(this, &StudentPersonelPage::textBoxNumber_TextChanged);
			// 
			// textBoxPenalty
			// 
			this->textBoxPenalty->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxPenalty->Location = System::Drawing::Point(113, 127);
			this->textBoxPenalty->Name = L"textBoxPenalty";
			this->textBoxPenalty->ReadOnly = true;
			this->textBoxPenalty->Size = System::Drawing::Size(129, 20);
			this->textBoxPenalty->TabIndex = 13;
			// 
			// StudentPersonelPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(857, 505);
			this->Controls->Add(this->textBoxPenalty);
			this->Controls->Add(this->textBoxNumber);
			this->Controls->Add(this->textBoxSurname);
			this->Controls->Add(this->textBoxName);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->userType);
			this->Controls->Add(this->password);
			this->Controls->Add(this->userID);
			this->Name = L"StudentPersonelPage";
			this->Text = L"StudentPersonelPage";
			this->Load += gcnew System::EventHandler(this, &StudentPersonelPage::StudentPersonelPage_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void password_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void userType_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void StudentPersonelPage_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBoxNumber_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
