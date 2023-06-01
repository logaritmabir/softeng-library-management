#pragma once
#include "Student.h"
#include "StudentPersonelPage.h"

namespace softenglibrarymanagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
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
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ title;
	private: System::Windows::Forms::Label^ userID;
	private: System::Windows::Forms::Label^ password;
	private: System::Windows::Forms::TextBox^ textBoxUserID;

	private: System::Windows::Forms::TextBox^ textBoxPassword;

	private: System::Windows::Forms::Label^ userType;
	private: System::Windows::Forms::ComboBox^ comboBoxUserType;
	private: System::Windows::Forms::Button^ buttonLogin;

	protected:

	protected:

	protected:

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
			this->title = (gcnew System::Windows::Forms::Label());
			this->userID = (gcnew System::Windows::Forms::Label());
			this->password = (gcnew System::Windows::Forms::Label());
			this->textBoxUserID = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPassword = (gcnew System::Windows::Forms::TextBox());
			this->userType = (gcnew System::Windows::Forms::Label());
			this->comboBoxUserType = (gcnew System::Windows::Forms::ComboBox());
			this->buttonLogin = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// title
			// 
			this->title->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->title->Location = System::Drawing::Point(2, 44);
			this->title->Name = L"title";
			this->title->Size = System::Drawing::Size(639, 75);
			this->title->TabIndex = 0;
			this->title->Text = L"Kütüphane Yönetim Sistemi";
			this->title->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->title->Click += gcnew System::EventHandler(this, &LoginForm::label1_Click);
			// 
			// userID
			// 
			this->userID->AutoSize = true;
			this->userID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->userID->Location = System::Drawing::Point(73, 156);
			this->userID->Name = L"userID";
			this->userID->Size = System::Drawing::Size(183, 24);
			this->userID->TabIndex = 1;
			this->userID->Text = L"Kullanýcý Numarasý";
			this->userID->Click += gcnew System::EventHandler(this, &LoginForm::userID_Click);
			// 
			// password
			// 
			this->password->AutoSize = true;
			this->password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->password->Location = System::Drawing::Point(73, 200);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(52, 24);
			this->password->TabIndex = 2;
			this->password->Text = L"Þifre";
			// 
			// textBoxUserID
			// 
			this->textBoxUserID->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBoxUserID->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxUserID->Location = System::Drawing::Point(298, 159);
			this->textBoxUserID->Name = L"textBoxUserID";
			this->textBoxUserID->Size = System::Drawing::Size(192, 20);
			this->textBoxUserID->TabIndex = 3;
			this->textBoxUserID->TextChanged += gcnew System::EventHandler(this, &LoginForm::textBoxUserID_TextChanged);
			// 
			// textBoxPassword
			// 
			this->textBoxPassword->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBoxPassword->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxPassword->Location = System::Drawing::Point(298, 204);
			this->textBoxPassword->Name = L"textBoxPassword";
			this->textBoxPassword->Size = System::Drawing::Size(192, 20);
			this->textBoxPassword->TabIndex = 4;
			this->textBoxPassword->TextChanged += gcnew System::EventHandler(this, &LoginForm::textBoxPassword_TextChanged);
			// 
			// userType
			// 
			this->userType->AutoSize = true;
			this->userType->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->userType->Location = System::Drawing::Point(73, 247);
			this->userType->Name = L"userType";
			this->userType->Size = System::Drawing::Size(130, 24);
			this->userType->TabIndex = 5;
			this->userType->Text = L"Kullanýcý Tipi";
			this->userType->Click += gcnew System::EventHandler(this, &LoginForm::label1_Click_1);
			// 
			// comboBoxUserType
			// 
			this->comboBoxUserType->FormattingEnabled = true;
			this->comboBoxUserType->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Öðrenci", L"Akademisyen", L"Memur" });
			this->comboBoxUserType->Location = System::Drawing::Point(298, 249);
			this->comboBoxUserType->Name = L"comboBoxUserType";
			this->comboBoxUserType->Size = System::Drawing::Size(121, 21);
			this->comboBoxUserType->TabIndex = 6;
			this->comboBoxUserType->SelectedIndexChanged += gcnew System::EventHandler(this, &LoginForm::comboBoxUserType_SelectedIndexChanged);
			// 
			// buttonLogin
			// 
			this->buttonLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->buttonLogin->Location = System::Drawing::Point(298, 295);
			this->buttonLogin->Name = L"buttonLogin";
			this->buttonLogin->Size = System::Drawing::Size(192, 54);
			this->buttonLogin->TabIndex = 7;
			this->buttonLogin->Text = L"Giriþ Yap";
			this->buttonLogin->UseVisualStyleBackColor = true;
			this->buttonLogin->Click += gcnew System::EventHandler(this, &LoginForm::buttonLogin_Click);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(639, 406);
			this->Controls->Add(this->buttonLogin);
			this->Controls->Add(this->comboBoxUserType);
			this->Controls->Add(this->userType);
			this->Controls->Add(this->textBoxPassword);
			this->Controls->Add(this->textBoxUserID);
			this->Controls->Add(this->password);
			this->Controls->Add(this->userID);
			this->Controls->Add(this->title);
			this->Name = L"LoginForm";
			this->Text = L"LoginForm";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void buttonLogin_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ userID = this->textBoxUserID->Text;
	String^ password = this->textBoxPassword->Text;
	String^ userType = this->comboBoxUserType->Text;

	if (password->Length == 0 || userID->Length == 0 && userType != "") {
		MessageBox::Show("Oradan bakýnca müneccime mi benziyorum ? Doldursana kardeþim þu kutucuklarý.","Bilgi", MessageBoxButtons::OK);
		return;
	}
	try
	{
		String^ connString = "Data Source=localhost\\HEY;Initial Catalog=library;Integrated Security=True";
		SqlConnection connection(connString);
		connection.Open();

		String^ querryGetUserProperties = "SELECT * FROM students WHERE number = @userID AND password = @password";
		SqlCommand commandGetUserProperties(querryGetUserProperties, % connection);

		commandGetUserProperties.Parameters->AddWithValue("@userID", userID);
		commandGetUserProperties.Parameters->AddWithValue("@password", password);

		SqlDataReader^ reader = commandGetUserProperties.ExecuteReader();
		if (reader->Read()) {
			Student^ student = gcnew Student;
			student->name = reader->GetString(1);
			student->surname = reader->GetString(2);
			student->number = reader->GetString(3);
			student->penalty = reader->GetInt32(7);
			
			StudentPersonelPage^ studentPage = gcnew StudentPersonelPage(student);
			this->Hide();
			studentPage->ShowDialog();
		}
		else {
			MessageBox::Show("The person you have called can not answer the phone", "Kullanýcý Bulunamadý", MessageBoxButtons::OK);
		}

	}
	catch (Exception^ e)
	{
		MessageBox::Show(e->Message, "Baðlantý Hatasý", MessageBoxButtons::OK);
	}
}
private: System::Void comboBoxUserType_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void userID_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBoxUserID_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBoxPassword_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
