#pragma once
#include "LoginForm.h"
#include "RegisterForm.h"
namespace softenglibrarymanagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for WelcomeForm
	/// </summary>
	public ref class WelcomeForm : public System::Windows::Forms::Form
	{
	public:
		WelcomeForm(void)
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
		~WelcomeForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ title;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ bookName;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ bookCategory;
	private: System::Windows::Forms::Label^ publishDate;
	private: System::Windows::Forms::Label^ bookLang;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;



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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->bookName = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->bookCategory = (gcnew System::Windows::Forms::Label());
			this->publishDate = (gcnew System::Windows::Forms::Label());
			this->bookLang = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// title
			// 
			this->title->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->title->Location = System::Drawing::Point(242, 9);
			this->title->Name = L"title";
			this->title->Size = System::Drawing::Size(639, 75);
			this->title->TabIndex = 1;
			this->title->Text = L"Kütüphane Yönetim Sistemi";
			this->title->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->title->Click += gcnew System::EventHandler(this, &WelcomeForm::title_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(468, 152);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(626, 315);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &WelcomeForm::dataGridView1_CellContentClick);
			// 
			// bookName
			// 
			this->bookName->AutoSize = true;
			this->bookName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->bookName->Location = System::Drawing::Point(12, 153);
			this->bookName->Name = L"bookName";
			this->bookName->Size = System::Drawing::Size(93, 24);
			this->bookName->TabIndex = 7;
			this->bookName->Text = L"Kitap Adý";
			this->bookName->Click += gcnew System::EventHandler(this, &WelcomeForm::userID_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(111, 157);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(262, 20);
			this->textBox1->TabIndex = 8;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &WelcomeForm::textBox1_TextChanged);
			// 
			// bookCategory
			// 
			this->bookCategory->AutoSize = true;
			this->bookCategory->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->bookCategory->Location = System::Drawing::Point(12, 201);
			this->bookCategory->Name = L"bookCategory";
			this->bookCategory->Size = System::Drawing::Size(87, 24);
			this->bookCategory->TabIndex = 9;
			this->bookCategory->Text = L"Kategori";
			// 
			// publishDate
			// 
			this->publishDate->AutoSize = true;
			this->publishDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->publishDate->Location = System::Drawing::Point(12, 245);
			this->publishDate->Name = L"publishDate";
			this->publishDate->Size = System::Drawing::Size(95, 24);
			this->publishDate->TabIndex = 10;
			this->publishDate->Text = L"Yayýn Yýlý";
			this->publishDate->Click += gcnew System::EventHandler(this, &WelcomeForm::label1_Click);
			// 
			// bookLang
			// 
			this->bookLang->AutoSize = true;
			this->bookLang->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->bookLang->Location = System::Drawing::Point(12, 285);
			this->bookLang->Name = L"bookLang";
			this->bookLang->Size = System::Drawing::Size(95, 24);
			this->bookLang->TabIndex = 11;
			this->bookLang->Text = L"Ýçerik Dili";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label1->Location = System::Drawing::Point(12, 326);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(62, 24);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Yazar";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(111, 245);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(262, 20);
			this->textBox2->TabIndex = 13;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &WelcomeForm::textBox2_TextChanged);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(111, 201);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(262, 21);
			this->comboBox1->TabIndex = 14;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &WelcomeForm::comboBox1_SelectedIndexChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(111, 285);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(262, 20);
			this->textBox3->TabIndex = 15;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &WelcomeForm::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(111, 326);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(262, 20);
			this->textBox4->TabIndex = 16;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &WelcomeForm::textBox4_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label2->Location = System::Drawing::Point(1001, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 24);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Giriþ Yap";
			this->label2->Click += gcnew System::EventHandler(this, &WelcomeForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label3->Location = System::Drawing::Point(1001, 48);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(81, 24);
			this->label3->TabIndex = 18;
			this->label3->Text = L"Kayýt Ol";
			this->label3->Click += gcnew System::EventHandler(this, &WelcomeForm::label3_Click);
			// 
			// WelcomeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1144, 492);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->bookLang);
			this->Controls->Add(this->publishDate);
			this->Controls->Add(this->bookCategory);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->bookName);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->title);
			this->Name = L"WelcomeForm";
			this->Text = L"WelcomeForm";
			this->Load += gcnew System::EventHandler(this, &WelcomeForm::WelcomeForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void title_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void WelcomeForm_Load(System::Object^ sender, System::EventArgs^ e) {
		LoadCategories();
		String^ connString = "Data Source=localhost;Initial Catalog=library;Integrated Security=True";
		SqlConnection connection(connString);
		try
		{
			connection.Open();
			DataTable^ books = gcnew DataTable();
			String^ querryGetBooks = "SELECT books.name,books.publishDate,books.language,books.author,categories.category FROM books JOIN categories ON books.categoryID = categories.id";
			SqlCommand commandGetBooks(querryGetBooks, % connection);
			SqlDataReader^ reader = commandGetBooks.ExecuteReader();
			if (reader->Read()) {
				books->Load(reader);
			}
			dataGridView1->DataSource = books;
			dataGridView1->Columns[0]->HeaderText = "Kitap Adý";
			dataGridView1->Columns[1]->HeaderText = "Yayýn Yýlý";
			dataGridView1->Columns[2]->HeaderText = "Ýçerik Dili";
			dataGridView1->Columns[3]->HeaderText = "Yazar";
			dataGridView1->Columns[4]->HeaderText = "Kategori";
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

	private: System::Void userID_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
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

	SqlCommand^ command = gcnew SqlCommand(query, %connection);

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
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	LoginForm^ loginPage = gcnew LoginForm();
	//this->Hide();
	loginPage->ShowDialog();
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	RegisterForm^ registerPage = gcnew RegisterForm();
	//this->Hide();
	registerPage->ShowDialog();
}
};
}
