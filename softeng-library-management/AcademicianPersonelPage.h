#pragma once
#include "Academician.h"
namespace softenglibrarymanagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for AcademicianPersonelPage
	/// </summary>
	public ref class AcademicianPersonelPage : public System::Windows::Forms::Form
	{
	public:
		Academician^ academician;
		AcademicianPersonelPage(Academician^ acad)
		{
			InitializeComponent();
			academician = acad;
			textBoxName->Text = academician->name;
			textBoxSurname->Text = academician->surname;
			textBoxNumber->Text = academician->number;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AcademicianPersonelPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBoxNumber;
	protected:
	private: System::Windows::Forms::TextBox^ textBoxSurname;
	private: System::Windows::Forms::TextBox^ textBoxName;
	private: System::Windows::Forms::Label^ userType;
	private: System::Windows::Forms::Label^ password;
	private: System::Windows::Forms::Label^ userID;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;

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
			this->textBoxNumber = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSurname = (gcnew System::Windows::Forms::TextBox());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->userType = (gcnew System::Windows::Forms::Label());
			this->password = (gcnew System::Windows::Forms::Label());
			this->userID = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBoxNumber
			// 
			this->textBoxNumber->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxNumber->Location = System::Drawing::Point(113, 91);
			this->textBoxNumber->Name = L"textBoxNumber";
			this->textBoxNumber->ReadOnly = true;
			this->textBoxNumber->Size = System::Drawing::Size(129, 20);
			this->textBoxNumber->TabIndex = 18;
			// 
			// textBoxSurname
			// 
			this->textBoxSurname->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxSurname->Location = System::Drawing::Point(113, 55);
			this->textBoxSurname->Name = L"textBoxSurname";
			this->textBoxSurname->ReadOnly = true;
			this->textBoxSurname->Size = System::Drawing::Size(129, 20);
			this->textBoxSurname->TabIndex = 17;
			// 
			// textBoxName
			// 
			this->textBoxName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxName->Location = System::Drawing::Point(113, 20);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->ReadOnly = true;
			this->textBoxName->Size = System::Drawing::Size(129, 20);
			this->textBoxName->TabIndex = 16;
			// 
			// userType
			// 
			this->userType->AutoSize = true;
			this->userType->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->userType->Location = System::Drawing::Point(12, 91);
			this->userType->Name = L"userType";
			this->userType->Size = System::Drawing::Size(83, 24);
			this->userType->TabIndex = 15;
			this->userType->Text = L"Numara";
			// 
			// password
			// 
			this->password->AutoSize = true;
			this->password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->password->Location = System::Drawing::Point(13, 55);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(82, 24);
			this->password->TabIndex = 14;
			this->password->Text = L"Soyisim";
			// 
			// userID
			// 
			this->userID->AutoSize = true;
			this->userID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->userID->Location = System::Drawing::Point(26, 20);
			this->userID->Name = L"userID";
			this->userID->Size = System::Drawing::Size(47, 24);
			this->userID->TabIndex = 13;
			this->userID->Text = L"Ýsim";
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Location = System::Drawing::Point(114, 126);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(129, 20);
			this->textBox1->TabIndex = 20;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &AcademicianPersonelPage::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label1->Location = System::Drawing::Point(13, 126);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(69, 24);
			this->label1->TabIndex = 19;
			this->label1->Text = L"Bölüm";
			// 
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Location = System::Drawing::Point(114, 161);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(129, 20);
			this->textBox2->TabIndex = 22;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &AcademicianPersonelPage::textBox2_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label2->Location = System::Drawing::Point(13, 161);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(40, 24);
			this->label2->TabIndex = 21;
			this->label2->Text = L"Dal";
			// 
			// AcademicianPersonelPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(808, 379);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBoxNumber);
			this->Controls->Add(this->textBoxSurname);
			this->Controls->Add(this->textBoxName);
			this->Controls->Add(this->userType);
			this->Controls->Add(this->password);
			this->Controls->Add(this->userID);
			this->Name = L"AcademicianPersonelPage";
			this->Text = L"AcademicianPersonelPage";
			this->Load += gcnew System::EventHandler(this, &AcademicianPersonelPage::AcademicianPersonelPage_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void AcademicianPersonelPage_Load(System::Object^ sender, System::EventArgs^ e) {
		String^ connString = "Data Source=localhost;Initial Catalog=library;Integrated Security=True";
		SqlConnection connection(connString);
		SqlDataReader^ reader;

		try
		{
			connection.Open();
			String^ queryGetDepartmentID = "SELECT departman FROM departmans WHERE id = '" + academician->departmentID + "' ";
			SqlCommand^ commandGetDepartmentID = gcnew SqlCommand(queryGetDepartmentID, % connection);
			reader = commandGetDepartmentID->ExecuteReader();
			if (reader->Read()) {
				textBox1->Text = reader->GetString(0);
			}
			reader->Close();

			List<String^> branches;
			String^ queryGetBranches = "SELECT branch FROM branches AS b JOIN academicianBranch AS ab ON b.id = ab.branchID WHERE ab.branchID IN (SELECT branchID FROM academicianBranch WHERE academicianID = '"+academician->ID+"')";
			SqlCommand^ commandGetBranches = gcnew SqlCommand(queryGetBranches, % connection);
			reader = commandGetBranches->ExecuteReader();

			while (reader->Read()) {
				branches.Add(reader->GetString(0));
			}
			array<String^>^ branchesArray = branches.ToArray();

			String^ allBranches = String::Join(", ", branchesArray);
			textBox2->Text = allBranches;
		}
		catch (Exception^ &e)
		{
			MessageBox::Show(e->Message, "Ýþlem Baþarýsýz", MessageBoxButtons::OK);
		}
		finally {

		}
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
