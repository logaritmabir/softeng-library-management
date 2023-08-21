#pragma once
#include "Student.h"

namespace softenglibrarymanagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
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
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ bookLang;
	private: System::Windows::Forms::Label^ publishDate;
	private: System::Windows::Forms::Label^ bookCategory;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ bookName;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ buttonBorrow;
	private: System::Windows::Forms::DataGridView^ dataGridView2;





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
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->bookLang = (gcnew System::Windows::Forms::Label());
			this->publishDate = (gcnew System::Windows::Forms::Label());
			this->bookCategory = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->bookName = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->buttonBorrow = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
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
			this->textBoxSurname->TextChanged += gcnew System::EventHandler(this, &StudentPersonelPage::textBoxSurname_TextChanged);
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
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(111, 341);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(262, 20);
			this->textBox4->TabIndex = 27;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &StudentPersonelPage::textBox4_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(111, 300);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(262, 20);
			this->textBox3->TabIndex = 26;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &StudentPersonelPage::textBox3_TextChanged);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(111, 216);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(262, 21);
			this->comboBox1->TabIndex = 25;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &StudentPersonelPage::comboBox1_SelectedIndexChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(111, 260);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(262, 20);
			this->textBox2->TabIndex = 24;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &StudentPersonelPage::textBox2_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label2->Location = System::Drawing::Point(12, 341);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 24);
			this->label2->TabIndex = 23;
			this->label2->Text = L"Yazar";
			// 
			// bookLang
			// 
			this->bookLang->AutoSize = true;
			this->bookLang->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->bookLang->Location = System::Drawing::Point(12, 300);
			this->bookLang->Name = L"bookLang";
			this->bookLang->Size = System::Drawing::Size(95, 24);
			this->bookLang->TabIndex = 22;
			this->bookLang->Text = L"Ýçerik Dili";
			// 
			// publishDate
			// 
			this->publishDate->AutoSize = true;
			this->publishDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->publishDate->Location = System::Drawing::Point(12, 260);
			this->publishDate->Name = L"publishDate";
			this->publishDate->Size = System::Drawing::Size(95, 24);
			this->publishDate->TabIndex = 21;
			this->publishDate->Text = L"Yayýn Yýlý";
			// 
			// bookCategory
			// 
			this->bookCategory->AutoSize = true;
			this->bookCategory->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->bookCategory->Location = System::Drawing::Point(12, 216);
			this->bookCategory->Name = L"bookCategory";
			this->bookCategory->Size = System::Drawing::Size(87, 24);
			this->bookCategory->TabIndex = 20;
			this->bookCategory->Text = L"Kategori";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(111, 172);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(262, 20);
			this->textBox1->TabIndex = 19;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &StudentPersonelPage::textBox1_TextChanged);
			// 
			// bookName
			// 
			this->bookName->AutoSize = true;
			this->bookName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->bookName->Location = System::Drawing::Point(12, 168);
			this->bookName->Name = L"bookName";
			this->bookName->Size = System::Drawing::Size(93, 24);
			this->bookName->TabIndex = 18;
			this->bookName->Text = L"Kitap Adý";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(471, 205);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(626, 315);
			this->dataGridView1->TabIndex = 17;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &StudentPersonelPage::dataGridView1_CellContentClick);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(111, 384);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(262, 20);
			this->textBox5->TabIndex = 28;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &StudentPersonelPage::textBox5_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label3->Location = System::Drawing::Point(12, 384);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(80, 24);
			this->label3->TabIndex = 29;
			this->label3->Text = L"Seçilen";
			// 
			// buttonBorrow
			// 
			this->buttonBorrow->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->buttonBorrow->Location = System::Drawing::Point(188, 423);
			this->buttonBorrow->Name = L"buttonBorrow";
			this->buttonBorrow->Size = System::Drawing::Size(185, 36);
			this->buttonBorrow->TabIndex = 30;
			this->buttonBorrow->Text = L"Ödünç Al";
			this->buttonBorrow->UseVisualStyleBackColor = true;
			this->buttonBorrow->Click += gcnew System::EventHandler(this, &StudentPersonelPage::buttonBorrow_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(471, 31);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView2->Size = System::Drawing::Size(626, 137);
			this->dataGridView2->TabIndex = 31;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &StudentPersonelPage::dataGridView2_CellContentClick_1);
			// 
			// StudentPersonelPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1137, 568);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->buttonBorrow);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->bookLang);
			this->Controls->Add(this->publishDate);
			this->Controls->Add(this->bookCategory);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->bookName);
			this->Controls->Add(this->dataGridView1);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void password_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void userType_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void StudentPersonelPage_Load(System::Object^ sender, System::EventArgs^ e) {
		LoadCategories();
		String^ connString = "Data Source=localhost;Initial Catalog=library;Integrated Security=True";
		SqlConnection connection(connString);
		SqlDataReader^ reader;
		try
		{
			connection.Open();
			DataTable^ books = gcnew DataTable();
			String^ querryGetBooks = "SELECT books.name,books.publishDate,books.language,books.author,categories.category FROM books JOIN categories ON books.categoryID = categories.id";
			SqlCommand commandGetBooks(querryGetBooks, % connection);
			reader = commandGetBooks.ExecuteReader();
			if (reader->Read()) {
				books->Load(reader);
			}
			reader->Close();
			dataGridView1->DataSource = books;
			dataGridView1->Columns[0]->HeaderText = "Kitap Adý";
			dataGridView1->Columns[1]->HeaderText = "Yayýn Yýlý";
			dataGridView1->Columns[2]->HeaderText = "Ýçerik Dili";
			dataGridView1->Columns[3]->HeaderText = "Yazar";
			dataGridView1->Columns[4]->HeaderText = "Kategori";

			DataTable^ borrows = gcnew DataTable();
			String^ queryGetBorrows = "SELECT b.name, s.name FROM borrows AS br "
				"JOIN books AS b ON br.bookID = b.id "
				"JOIN students AS s ON br.studentID = s.id "
				"WHERE br.studentID = '" + student->ID + "'";
			SqlCommand commandGetBorrows(queryGetBorrows, % connection);
			reader = commandGetBorrows.ExecuteReader();
			borrows->Load(reader);
			dataGridView2->DataSource = borrows;
			reader->Close();
		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->Message, "Baðlantý Hatasý", MessageBoxButtons::OK);
		}
		finally {
			if (connection.State == ConnectionState::Open) {
				connection.Close();
			}
		}
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ bookName = textBox1->Text;
	SearchBooks(bookName);
}
void SearchBooks(String^ bookName) {
	String^ query = "SELECT name, categoryID, publishDate, language, author FROM books WHERE name LIKE '%" + bookName + "%'";

	String^ connString = "Data Source=localhost;Initial Catalog=library;Integrated Security=True";
	SqlConnection connection(connString);
	connection.Open();

	SqlCommand^ command = gcnew SqlCommand(query, % connection);

	SqlDataReader^ reader = command->ExecuteReader();

	DataTable^ dataTable = gcnew DataTable();

	dataTable->Load(reader);

	connection.Close();
	reader->Close();

	dataGridView1->DataSource = dataTable;
}
void LoadCategories() {
	String^ query = "SELECT category FROM categories";

	String^ connString = "Data Source=localhost;Initial Catalog=library;Integrated Security=True";
	SqlConnection^ connection = gcnew SqlConnection(connString);

	try {
		connection->Open();

		SqlCommand^ command = gcnew SqlCommand(query, connection);
		SqlDataReader^ reader = command->ExecuteReader();

		while (reader->Read()) {
			comboBox1->Items->Add(reader->GetString(0));
		}
		comboBox1->Items->Add("Tüm Kategoriler");
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
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ selectedCategory = comboBox1->SelectedItem->ToString();

	String^ query = "SELECT books.name, categories.category, books.publishDate, books.language, books.author "
		"FROM books "
		"JOIN categories ON books.categoryID = categories.id "
		"WHERE categories.category = '" + selectedCategory + "'";

	if (selectedCategory == "Tüm Kategoriler") {
		query = "SELECT books.name, categories.category, books.publishDate, books.language, books.author "
			"FROM books "
			"JOIN categories ON books.categoryID = categories.id";
	}

	SqlConnection^ connection = gcnew SqlConnection("Data Source=localhost;Initial Catalog=library;Integrated Security=True");
	connection->Open();

	SqlCommand^ command = gcnew SqlCommand(query, connection);

	SqlDataReader^ reader = command->ExecuteReader();

	DataTable^ dataTable = gcnew DataTable();

	dataTable->Load(reader);

	connection->Close();

	dataGridView1->DataSource = dataTable;
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ selectedLang = textBox3->Text;

	String^ query = "SELECT books.name, categories.category, books.publishDate, books.language, books.author "
		"FROM books "
		"JOIN categories ON books.categoryID = categories.id "
		"WHERE books.language  LIKE  '%" + selectedLang + "%'";
	SqlConnection^ connection = gcnew SqlConnection("Data Source=localhost;Initial Catalog=library;Integrated Security=True");
	connection->Open();

	SqlCommand^ command = gcnew SqlCommand(query, connection);
	SqlDataReader^ reader = command->ExecuteReader();
	DataTable^ dataTable = gcnew DataTable();
	dataTable->Load(reader);
	connection->Close();
	dataGridView1->DataSource = dataTable;
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ selectedAuthor = textBox4->Text;

	String^ query = "SELECT books.name, categories.category, books.publishDate, books.language, books.author "
		"FROM books "
		"JOIN categories ON books.categoryID = categories.id "
		"WHERE books.author LIKE '%" + selectedAuthor + "%'";
	SqlConnection^ connection = gcnew SqlConnection("Data Source=localhost;Initial Catalog=library;Integrated Security=True");
	connection->Open();

	SqlCommand^ command = gcnew SqlCommand(query, connection);
	SqlDataReader^ reader = command->ExecuteReader();
	DataTable^ dataTable = gcnew DataTable();
	dataTable->Load(reader);
	connection->Close();
	dataGridView1->DataSource = dataTable;
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ selectedYear = textBox2->Text;

	String^ query = "SELECT books.name, categories.category, books.publishDate, books.language, books.author "
		"FROM books "
		"JOIN categories ON books.categoryID = categories.id "
		"WHERE books.publishDate = '" + selectedYear + "'";
	SqlConnection^ connection = gcnew SqlConnection("Data Source=localhost;Initial Catalog=library;Integrated Security=True");
	connection->Open();

	SqlCommand^ command = gcnew SqlCommand(query, connection);
	SqlDataReader^ reader = command->ExecuteReader();
	DataTable^ dataTable = gcnew DataTable();
	dataTable->Load(reader);
	connection->Close();
	dataGridView1->DataSource = dataTable;
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	DataGridViewRow^ selectedRow = dataGridView1->CurrentRow;
	if (selectedRow != nullptr) {
		String^ firstCellValue = selectedRow->Cells[0]->Value->ToString();
		textBox5->Text = firstCellValue;
	}
}

private: System::Void textBoxNumber_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBoxSurname_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void buttonBorrow_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ connString = "Data Source=localhost;Initial Catalog=library;Integrated Security=True";
	SqlConnection^ connection = gcnew SqlConnection(connString);
	SqlDataReader^ reader;
	int^ booksTID;
	int^ studentTID;
	try
	{
		connection->Open();
		String^ query = "SELECT id FROM books where name = '"+textBox5->Text+"' ";
		SqlCommand^ command = gcnew SqlCommand(query,connection);
		reader = command->ExecuteReader();
		if (reader->Read()) {
			booksTID = reader->GetInt32(0);
		}
		reader->Close();

		String^ queryGetStudentID = "SELECT id FROM students where number = '" + textBoxNumber->Text + "' ";
		SqlCommand^ commandGetStudentID = gcnew SqlCommand(queryGetStudentID, connection);
		reader = commandGetStudentID->ExecuteReader();
		if (reader->Read()) {
			studentTID = reader->GetInt32(0);
		}
		reader->Close();

		String^ queryInsertBorrow = "INSERT INTO borrows (bookID,studentID)"
			"VALUES ('" + booksTID + "','" + studentTID + "')";
		"VALUES ('" + booksTID + "','" + studentTID + "')";
		"VALUES ('" + booksTID + "','" + studentTID + "')";
		"VALUES ('" + booksTID + "','" + studentTID + "')";
		"VALUES ('"+booksTID+"','" + studentTID + "')";
		SqlCommand^ commandInsertBorrow = gcnew SqlCommand(queryInsertBorrow, connection);
		commandInsertBorrow->ExecuteNonQuery();

		MessageBox::Show("Oldu sanýrým", "Bilgi Mesajý", MessageBoxButtons::OK);
	}
	catch (Exception^ &e)
	{
		MessageBox::Show(e->Message, "Hata var gýdýsýný yediðim", MessageBoxButtons::OK);
	}
	finally {

	}
}
private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void dataGridView2_CellContentClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
