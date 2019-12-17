#pragma once
#include "MyForm.h"
#include "MyForm3.h"
namespace playxando {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm5
	/// </summary>
	public ref class MyForm5 : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		int form;
		MyForm5(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		MyForm5(Form^ obj1,int fom)
		{
			form = fom;
			obj = obj1;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm5()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  text2;

	private: System::Windows::Forms::TextBox^  text1;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm5::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->text2 = (gcnew System::Windows::Forms::TextBox());
			this->text1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Indigo;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Location = System::Drawing::Point(477, 445);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(96, 48);
			this->button1->TabIndex = 0;
			this->button1->Text = L"start";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm5::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(107, 287);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(97, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"player X";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(107, 363);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(99, 25);
			this->label2->TabIndex = 2;
			this->label2->Text = L"player O";
			// 
			// text2
			// 
			this->text2->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->text2->Location = System::Drawing::Point(216, 360);
			this->text2->Multiline = true;
			this->text2->Name = L"text2";
			this->text2->Size = System::Drawing::Size(231, 35);
			this->text2->TabIndex = 3;
			this->text2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->text2->TextChanged += gcnew System::EventHandler(this, &MyForm5::text2_TextChanged);
			// 
			// text1
			// 
			this->text1->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->text1->Location = System::Drawing::Point(216, 276);
			this->text1->Multiline = true;
			this->text1->Name = L"text1";
			this->text1->Size = System::Drawing::Size(231, 36);
			this->text1->TabIndex = 4;
			this->text1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->text1->TextChanged += gcnew System::EventHandler(this, &MyForm5::text1_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label3->Font = (gcnew System::Drawing::Font(L"Tahoma", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Location = System::Drawing::Point(96, 195);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(383, 39);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Enter names of players";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(227, 27);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(130, 130);
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Desktop;
			this->ClientSize = System::Drawing::Size(600, 535);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->text1);
			this->Controls->Add(this->text2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm5";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Play X O";
			this->Load += gcnew System::EventHandler(this, &MyForm5::MyForm5_Load_1);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String^ name_player_X;
		String^ name_player_O;
	private: System::Void MyForm5_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 name_player_X = text1->Text;
				 name_player_O = text2->Text;
				 this->Hide();
				 if (form == 3)
				 {
					 MyForm^ fom = gcnew MyForm(obj, name_player_X, name_player_O);
				     fom->ShowDialog();
	             }
				 if (form == 4)
				 {
					 MyForm3^ fom3 = gcnew MyForm3(obj, name_player_X, name_player_O);
					 fom3->ShowDialog();
				 }

	}
	private: System::Void MyForm5_Load_1(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void text1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void text2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
