#pragma once

namespace softenglibrarymanagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for RegisterForm
	/// </summary>
	public ref class RegisterForm : public System::Windows::Forms::Form
	{
	public:
		RegisterForm(void)
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
		~RegisterForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ title;
	private: System::Windows::Forms::Button^ buttonLogin;
	private: System::Windows::Forms::ComboBox^ comboBoxUserType;
	private: System::Windows::Forms::Label^ userType;
	private: System::Windows::Forms::TextBox^ textBoxPassword;
	private: System::Windows::Forms::TextBox^ textBoxNumber;

	private: System::Windows::Forms::Label^ userPassword;

	private: System::Windows::Forms::Label^ userID;
	private: System::Windows::Forms::TextBox^ textBoxSurname;

	private: System::Windows::Forms::TextBox^ textBoxName;

	private: System::Windows::Forms::Label^ userSurname;
	private: System::Windows::Forms::Label^ userName;
	private: System::Windows::Forms::TextBox^ textBoxEmail;

	private: System::Windows::Forms::Label^ userEmail;
	private: System::Windows::Forms::TextBox^ textBoxPhone;

	private: System::Windows::Forms::Label^ userPhone;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox3;
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
			this->buttonLogin = (gcnew System::Windows::Forms::Button());
			this->comboBoxUserType = (gcnew System::Windows::Forms::ComboBox());
			this->userType = (gcnew System::Windows::Forms::Label());
			this->textBoxPassword = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNumber = (gcnew System::Windows::Forms::TextBox());
			this->userPassword = (gcnew System::Windows::Forms::Label());
			this->userID = (gcnew System::Windows::Forms::Label());
			this->textBoxSurname = (gcnew System::Windows::Forms::TextBox());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->userSurname = (gcnew System::Windows::Forms::Label());
			this->userName = (gcnew System::Windows::Forms::Label());
			this->textBoxEmail = (gcnew System::Windows::Forms::TextBox());
			this->userEmail = (gcnew System::Windows::Forms::Label());
			this->textBoxPhone = (gcnew System::Windows::Forms::TextBox());
			this->userPhone = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// title
			// 
			this->title->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->title->Location = System::Drawing::Point(328, 9);
			this->title->Name = L"title";
			this->title->Size = System::Drawing::Size(475, 75);
			this->title->TabIndex = 1;
			this->title->Text = L"Kayýt Ol";
			this->title->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->title->Click += gcnew System::EventHandler(this, &RegisterForm::title_Click);
			// 
			// buttonLogin
			// 
			this->buttonLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->buttonLogin->Location = System::Drawing::Point(867, 478);
			this->buttonLogin->Name = L"buttonLogin";
			this->buttonLogin->Size = System::Drawing::Size(192, 54);
			this->buttonLogin->TabIndex = 14;
			this->buttonLogin->Text = L"Kayýt Ol";
			this->buttonLogin->UseVisualStyleBackColor = true;
			this->buttonLogin->Click += gcnew System::EventHandler(this, &RegisterForm::buttonLogin_Click);
			// 
			// comboBoxUserType
			// 
			this->comboBoxUserType->FormattingEnabled = true;
			this->comboBoxUserType->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Öðrenci", L"Akademisyen" });
			this->comboBoxUserType->Location = System::Drawing::Point(160, 62);
			this->comboBoxUserType->Name = L"comboBoxUserType";
			this->comboBoxUserType->Size = System::Drawing::Size(121, 21);
			this->comboBoxUserType->TabIndex = 13;
			this->comboBoxUserType->SelectedIndexChanged += gcnew System::EventHandler(this, &RegisterForm::comboBoxUserType_SelectedIndexChanged);
			// 
			// userType
			// 
			this->userType->AutoSize = true;
			this->userType->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->userType->Location = System::Drawing::Point(12, 60);
			this->userType->Name = L"userType";
			this->userType->Size = System::Drawing::Size(130, 24);
			this->userType->TabIndex = 12;
			this->userType->Text = L"Kullanýcý Tipi";
			// 
			// textBoxPassword
			// 
			this->textBoxPassword->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBoxPassword->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxPassword->Location = System::Drawing::Point(866, 344);
			this->textBoxPassword->Name = L"textBoxPassword";
			this->textBoxPassword->Size = System::Drawing::Size(192, 20);
			this->textBoxPassword->TabIndex = 11;
			this->textBoxPassword->TextChanged += gcnew System::EventHandler(this, &RegisterForm::textBoxPassword_TextChanged);
			// 
			// textBoxNumber
			// 
			this->textBoxNumber->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBoxNumber->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxNumber->Location = System::Drawing::Point(866, 258);
			this->textBoxNumber->Name = L"textBoxNumber";
			this->textBoxNumber->Size = System::Drawing::Size(192, 20);
			this->textBoxNumber->TabIndex = 10;
			this->textBoxNumber->TextChanged += gcnew System::EventHandler(this, &RegisterForm::textBoxUserID_TextChanged);
			// 
			// userPassword
			// 
			this->userPassword->AutoSize = true;
			this->userPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->userPassword->Location = System::Drawing::Point(641, 340);
			this->userPassword->Name = L"userPassword";
			this->userPassword->Size = System::Drawing::Size(52, 24);
			this->userPassword->TabIndex = 9;
			this->userPassword->Text = L"Þifre";
			// 
			// userID
			// 
			this->userID->AutoSize = true;
			this->userID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->userID->Location = System::Drawing::Point(641, 255);
			this->userID->Name = L"userID";
			this->userID->Size = System::Drawing::Size(179, 24);
			this->userID->TabIndex = 8;
			this->userID->Text = L"Öðrenci Numarasý";
			// 
			// textBoxSurname
			// 
			this->textBoxSurname->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBoxSurname->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxSurname->Location = System::Drawing::Point(866, 220);
			this->textBoxSurname->Name = L"textBoxSurname";
			this->textBoxSurname->Size = System::Drawing::Size(192, 20);
			this->textBoxSurname->TabIndex = 18;
			// 
			// textBoxName
			// 
			this->textBoxName->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBoxName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxName->Location = System::Drawing::Point(866, 175);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(192, 20);
			this->textBoxName->TabIndex = 17;
			// 
			// userSurname
			// 
			this->userSurname->AutoSize = true;
			this->userSurname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->userSurname->Location = System::Drawing::Point(641, 216);
			this->userSurname->Name = L"userSurname";
			this->userSurname->Size = System::Drawing::Size(82, 24);
			this->userSurname->TabIndex = 16;
			this->userSurname->Text = L"Soyisim";
			// 
			// userName
			// 
			this->userName->AutoSize = true;
			this->userName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->userName->Location = System::Drawing::Point(641, 172);
			this->userName->Name = L"userName";
			this->userName->Size = System::Drawing::Size(47, 24);
			this->userName->TabIndex = 15;
			this->userName->Text = L"Ýsim";
			// 
			// textBoxEmail
			// 
			this->textBoxEmail->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBoxEmail->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxEmail->Location = System::Drawing::Point(866, 305);
			this->textBoxEmail->Name = L"textBoxEmail";
			this->textBoxEmail->Size = System::Drawing::Size(192, 20);
			this->textBoxEmail->TabIndex = 20;
			// 
			// userEmail
			// 
			this->userEmail->AutoSize = true;
			this->userEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->userEmail->Location = System::Drawing::Point(641, 301);
			this->userEmail->Name = L"userEmail";
			this->userEmail->Size = System::Drawing::Size(62, 24);
			this->userEmail->TabIndex = 19;
			this->userEmail->Text = L"Email";
			// 
			// textBoxPhone
			// 
			this->textBoxPhone->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBoxPhone->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxPhone->Location = System::Drawing::Point(867, 389);
			this->textBoxPhone->Name = L"textBoxPhone";
			this->textBoxPhone->Size = System::Drawing::Size(192, 20);
			this->textBoxPhone->TabIndex = 22;
			// 
			// userPhone
			// 
			this->userPhone->AutoSize = true;
			this->userPhone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->userPhone->Location = System::Drawing::Point(642, 385);
			this->userPhone->Name = L"userPhone";
			this->userPhone->Size = System::Drawing::Size(81, 24);
			this->userPhone->TabIndex = 21;
			this->userPhone->Text = L"Telefon";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Location = System::Drawing::Point(261, 181);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(192, 20);
			this->textBox1->TabIndex = 26;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &RegisterForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Location = System::Drawing::Point(261, 223);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(192, 20);
			this->textBox2->TabIndex = 25;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label1->Location = System::Drawing::Point(26, 219);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(82, 24);
			this->label1->TabIndex = 24;
			this->label1->Text = L"Soyisim";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label2->Location = System::Drawing::Point(26, 175);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 24);
			this->label2->TabIndex = 23;
			this->label2->Text = L"Ýsim";
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox3->Location = System::Drawing::Point(261, 262);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(192, 20);
			this->textBox3->TabIndex = 28;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label3->Location = System::Drawing::Point(26, 258);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 24);
			this->label3->TabIndex = 27;
			this->label3->Text = L"Email";
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox4->Location = System::Drawing::Point(261, 308);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(192, 20);
			this->textBox4->TabIndex = 30;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label4->Location = System::Drawing::Point(26, 305);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(229, 24);
			this->label4->TabIndex = 29;
			this->label4->Text = L"Akademisyen Numarasý";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label5->Location = System::Drawing::Point(26, 344);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(111, 24);
			this->label5->TabIndex = 31;
			this->label5->Text = L"Departman";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label6->Location = System::Drawing::Point(26, 385);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(58, 24);
			this->label6->TabIndex = 33;
			this->label6->Text = L"Dal-1";
			this->label6->Click += gcnew System::EventHandler(this, &RegisterForm::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label7->Location = System::Drawing::Point(26, 424);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(58, 24);
			this->label7->TabIndex = 35;
			this->label7->Text = L"Dal-2";
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox8->Location = System::Drawing::Point(261, 464);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(192, 20);
			this->textBox8->TabIndex = 38;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label8->Location = System::Drawing::Point(26, 460);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(52, 24);
			this->label8->TabIndex = 37;
			this->label8->Text = L"Þifre";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(261, 347);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(192, 21);
			this->comboBox1->TabIndex = 39;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &RegisterForm::comboBox1_SelectedIndexChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(261, 385);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(192, 21);
			this->comboBox2->TabIndex = 40;
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(261, 427);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(192, 21);
			this->comboBox3->TabIndex = 41;
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1116, 569);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBoxPhone);
			this->Controls->Add(this->userPhone);
			this->Controls->Add(this->textBoxEmail);
			this->Controls->Add(this->userEmail);
			this->Controls->Add(this->textBoxSurname);
			this->Controls->Add(this->textBoxName);
			this->Controls->Add(this->userSurname);
			this->Controls->Add(this->userName);
			this->Controls->Add(this->buttonLogin);
			this->Controls->Add(this->comboBoxUserType);
			this->Controls->Add(this->userType);
			this->Controls->Add(this->textBoxPassword);
			this->Controls->Add(this->textBoxNumber);
			this->Controls->Add(this->userPassword);
			this->Controls->Add(this->userID);
			this->Controls->Add(this->title);
			this->Name = L"RegisterForm";
			this->Text = L"RegisterForm";
			this->Load += gcnew System::EventHandler(this, &RegisterForm::RegisterForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void title_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void buttonLogin_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ userType = comboBoxUserType->Text;
		String^ table;

		if (userType == "Akademisyen") {
			String^ name = textBox1->Text;
			String^ surname = textBox2->Text;
			String^ email = textBox3->Text;
			String^ number = textBox4->Text;
			String^ password = textBox8->Text;
			String^ department = comboBox1->Text;
			String^ branch1 = comboBox2->Text;
			String^ branch2 = comboBox3->Text;

			String^ connString = "Data Source=localhost;Initial Catalog=library;Integrated Security=True";
			SqlConnection connection(connString);
			SqlDataReader^ reader;
			int^ departmentID;
			int^ branchID;
			int^ branchID2;
			int^ academicianID;
			try
			{
				connection.Open();
				String^ queryGetDepartmentID = "SELECT id FROM departmans WHERE departman = '" + department + "' ";
				SqlCommand^ commandGetDepartmentID = gcnew SqlCommand(queryGetDepartmentID, % connection);
				reader = commandGetDepartmentID->ExecuteReader();

				if (reader->Read()) {
					departmentID = reader->GetInt32(0);
				}

				reader->Close();

				String^ queryGetBranchID = "SELECT id FROM branches where branch = '" + branch1 + "'";
				SqlCommand^ commandGetBranchID = gcnew SqlCommand(queryGetBranchID, % connection);
				reader = commandGetBranchID->ExecuteReader();
				if (reader->Read()) {
					branchID = reader->GetInt32(0);
				}

				reader->Close();

				String^ queryGetBranchID2 = "SELECT id FROM branches where branch = '" + branch2 + "'";
				SqlCommand^ commandGetBranchID2 = gcnew SqlCommand(queryGetBranchID2, % connection);
				reader = commandGetBranchID2->ExecuteReader();
				if (reader->Read()) {
					branchID2 = reader->GetInt32(0);
				}

				reader->Close();

				String^ query = "INSERT INTO academicians (name,surname,email,number,password,departmantID)"
					"VALUES ('"+name+"','"+surname+"','" + email + "','" + number + "','" + password + "','" + departmentID + "')";
				SqlCommand^ command = gcnew SqlCommand(query, %connection);
				command->ExecuteNonQuery();

				String^ queryGetAcademicianID = "SELECT id FROM academicians WHERE number = '" + number + "'";
				SqlCommand^ commandGetAcademicianID = gcnew SqlCommand(queryGetAcademicianID, % connection);
				reader = commandGetAcademicianID->ExecuteReader();

				if (reader->Read()) {
					academicianID = reader->GetInt32(0);
				}
				reader->Close();

				String^ queryInsertBranch = "INSERT INTO academicianBranch (academicianID,branchID)"
					"VALUES ('"+academicianID+"','" + branchID + "')";
				String^ queryInsertBranch2 = "INSERT INTO academicianBranch (academicianID,branchID)"
					"VALUES ('" + academicianID + "','" + branchID2 + "')";
				SqlCommand^ commandInsertBranch = gcnew SqlCommand(queryInsertBranch, % connection);
				SqlCommand^ commandInsertBranch2 = gcnew SqlCommand(queryInsertBranch2, % connection);
				commandInsertBranch->ExecuteNonQuery();
				commandInsertBranch2->ExecuteNonQuery();

				MessageBox::Show("Akademisyen Baþarýyla Veri Tabanýna Eklendi", "Ýþlem Baþarýlý", MessageBoxButtons::OK);
			}
			catch (Exception^ e)
			{
				MessageBox::Show(e->Message, "Ýþlem Baþarýsýz", MessageBoxButtons::OK);
			}
			finally {
				connection.Close();
			}
		}
		else if (userType == "Öðrenci") {
			String^ name = textBoxName->Text;
			String^ surname = textBoxSurname->Text;
			String^ number = textBoxNumber->Text;
			String^ email = textBoxEmail->Text;
			String^ password = textBoxPassword->Text;
			String^ phone = textBoxPhone->Text;

			String^ connString = "Data Source=localhost;Initial Catalog=library;Integrated Security=True";
			SqlConnection connection(connString);
			try
			{
				connection.Open();
				String^ query = "INSERT INTO students (name,surname,number,email,password,phone)"
					"VALUES ('" + name + "','" + surname + "','" + number + "','" + email + "','" + password + "','" + phone + "')";
				SqlCommand^ command = gcnew SqlCommand(query, % connection);
				command->ExecuteNonQuery();
				MessageBox::Show("Öðrenci Baþarýyla Veri Tabanýna Eklendi", "Ýþlem Baþarýlý", MessageBoxButtons::OK);
			}
			catch (Exception^ e)
			{
				MessageBox::Show(e->Message, "Ýþlem Baþarýsýz", MessageBoxButtons::OK);
			}
			finally {
				connection.Close();
			}
		}
	}
private: System::Void comboBoxUserType_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ selectedType = comboBoxUserType->SelectedItem->ToString();

	if (selectedType == "Akademisyen") {
		userName->Visible = false;
		userEmail->Visible = false;
		userSurname->Visible = false;
		userPassword->Visible = false;
		userPhone->Visible = false;
		userID->Visible = false;

		textBoxEmail->Visible = false;
		textBoxName->Visible = false;
		textBoxNumber->Visible = false;
		textBoxPassword->Visible = false;
		textBoxPhone->Visible = false;
		textBoxSurname->Visible = false;

		label1->Visible = true;
		label2->Visible = true;
		label3->Visible = true;
		label4->Visible = true;
		label5->Visible = true;
		label6->Visible = true;
		label7->Visible = true;
		label8->Visible = true;

		textBox1->Visible = true;
		textBox2->Visible = true;
		textBox3->Visible = true;
		textBox4->Visible = true;
		comboBox1->Visible = true;
		comboBox2->Visible = true;
		comboBox3->Visible = true;
		textBox8->Visible = true;
	}
	if (selectedType == "Öðrenci") {
		label1->Visible = false;
		label2->Visible = false;
		label3->Visible = false;
		label4->Visible = false;
		label5->Visible = false;
		label6->Visible = false;
		label7->Visible = false;
		label8->Visible = false;

		textBox1->Visible = false;
		textBox2->Visible = false;
		textBox3->Visible = false;
		textBox4->Visible = false;
		comboBox1->Visible = false;
		comboBox2->Visible = false;
		comboBox3->Visible = false;
		textBox8->Visible = false;

		userName->Visible = true;
		userEmail->Visible = true;
		userSurname->Visible = true;
		userPassword->Visible = true;
		userPhone->Visible = true;
		userID->Visible = true;

		textBoxEmail->Visible = true;
		textBoxName->Visible = true;
		textBoxNumber->Visible = true;
		textBoxPassword->Visible = true;
		textBoxPhone->Visible = true;
		textBoxSurname->Visible = true;
	}
}
private: System::Void textBoxUserID_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void RegisterForm_Load(System::Object^ sender, System::EventArgs^ e) {
	label1->Visible = false;
	label2->Visible = false;
	label3->Visible = false;
	label4->Visible = false;
	label5->Visible = false;
	label6->Visible = false;
	label7->Visible = false;
	label8->Visible = false;

	textBox1->Visible = false;
	textBox2->Visible = false;
	textBox3->Visible = false;
	textBox4->Visible = false;
	comboBox1->Visible = false;
	comboBox2->Visible = false;
	comboBox3->Visible = false;
	textBox8->Visible = false;

	userName->Visible = false;
	userEmail->Visible = false;
	userSurname->Visible = false;
	userPassword->Visible = false;
	userPhone->Visible = false;
	userID->Visible = false;

	textBoxEmail->Visible = false;
	textBoxName->Visible = false;
	textBoxNumber->Visible = false;
	textBoxPassword->Visible = false;
	textBoxPhone->Visible = false;
	textBoxSurname->Visible = false;

	LoadDepartments();
	LoadBranches();
}

void LoadDepartments() {
	String^ query = "SELECT departman FROM departmans";

	String^ connString = "Data Source=localhost;Initial Catalog=library;Integrated Security=True";
	SqlConnection^ connection = gcnew SqlConnection(connString);

	try {
		connection->Open();

		SqlCommand^ command = gcnew SqlCommand(query, connection);
		SqlDataReader^ reader = command->ExecuteReader();

		while (reader->Read()) {
			comboBox1->Items->Add(reader->GetString(0));
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message, "LoadCategories Hatasý", MessageBoxButtons::OK);
	}
	finally {
		if (connection->State == ConnectionState::Open) {
			connection->Close();
		}
	}
}
void LoadBranches() {
	String^ query = "SELECT branch FROM branches";

	String^ connString = "Data Source=localhost;Initial Catalog=library;Integrated Security=True";
	SqlConnection^ connection = gcnew SqlConnection(connString);

	try {
		connection->Open();

		SqlCommand^ command = gcnew SqlCommand(query, connection);
		SqlDataReader^ reader = command->ExecuteReader();

		while (reader->Read()) {
			comboBox2->Items->Add(reader->GetString(0));
			comboBox3->Items->Add(reader->GetString(0));
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message, "LoadCategories Hatasý", MessageBoxButtons::OK);
	}
	finally {
		if (connection->State == ConnectionState::Open) {
			connection->Close();
		}
	}

}
private: System::Void textBoxPassword_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
