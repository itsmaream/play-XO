#pragma once
#include "MyForm2.h"
namespace playxando {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm3
	/// </summary>
	public ref class MyForm3 : public System::Windows::Forms::Form
	{
	public:
		String^ namex;
		String^ nameo;
		Form^ obj = gcnew Form();
		MyForm3(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		MyForm3(Form^ obj1)
		{
			obj = obj1;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		MyForm3(Form^ obj1, String^ name1, String^ name2)
		{
			namex = name1;
			nameo = name2;
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
		~MyForm3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  bu11;
	private: System::Windows::Forms::Button^  bu9;
	private: System::Windows::Forms::Button^  bu10;
	private: System::Windows::Forms::Button^  bu7;
	private: System::Windows::Forms::Button^  bu5;
	private: System::Windows::Forms::Button^  bu6;
	private: System::Windows::Forms::Button^  bu1;
	private: System::Windows::Forms::Button^  bu3;
	private: System::Windows::Forms::Button^  bu2;
	private: System::Windows::Forms::Button^  bu12;
	private: System::Windows::Forms::Button^  bu8;
	private: System::Windows::Forms::Button^  bu4;
	private: System::Windows::Forms::Button^  bu16;
	private: System::Windows::Forms::Button^  bu15;
	private: System::Windows::Forms::Button^  bu13;
	private: System::Windows::Forms::Button^  bu14;
	private: System::Windows::Forms::Label^  lab1;
	
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm3::typeid));
			this->bu11 = (gcnew System::Windows::Forms::Button());
			this->bu9 = (gcnew System::Windows::Forms::Button());
			this->bu10 = (gcnew System::Windows::Forms::Button());
			this->bu7 = (gcnew System::Windows::Forms::Button());
			this->bu5 = (gcnew System::Windows::Forms::Button());
			this->bu6 = (gcnew System::Windows::Forms::Button());
			this->bu1 = (gcnew System::Windows::Forms::Button());
			this->bu3 = (gcnew System::Windows::Forms::Button());
			this->bu2 = (gcnew System::Windows::Forms::Button());
			this->bu12 = (gcnew System::Windows::Forms::Button());
			this->bu8 = (gcnew System::Windows::Forms::Button());
			this->bu4 = (gcnew System::Windows::Forms::Button());
			this->bu16 = (gcnew System::Windows::Forms::Button());
			this->bu15 = (gcnew System::Windows::Forms::Button());
			this->bu13 = (gcnew System::Windows::Forms::Button());
			this->bu14 = (gcnew System::Windows::Forms::Button());
			this->lab1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// bu11
			// 
			this->bu11->BackColor = System::Drawing::SystemColors::InfoText;
			this->bu11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bu11->Font = (gcnew System::Drawing::Font(L"Algerian", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bu11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bu11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bu11.Image")));
			this->bu11->Location = System::Drawing::Point(304, 295);
			this->bu11->Name = L"bu11";
			this->bu11->Size = System::Drawing::Size(114, 105);
			this->bu11->TabIndex = 34;
			this->bu11->UseVisualStyleBackColor = false;
			this->bu11->Click += gcnew System::EventHandler(this, &MyForm3::bu11_Click);
			// 
			// bu9
			// 
			this->bu9->BackColor = System::Drawing::SystemColors::InfoText;
			this->bu9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bu9->Font = (gcnew System::Drawing::Font(L"Algerian", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bu9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bu9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bu9.Image")));
			this->bu9->Location = System::Drawing::Point(68, 295);
			this->bu9->Name = L"bu9";
			this->bu9->Size = System::Drawing::Size(114, 105);
			this->bu9->TabIndex = 33;
			this->bu9->UseVisualStyleBackColor = false;
			this->bu9->Click += gcnew System::EventHandler(this, &MyForm3::bu9_Click);
			// 
			// bu10
			// 
			this->bu10->BackColor = System::Drawing::SystemColors::InfoText;
			this->bu10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bu10->Font = (gcnew System::Drawing::Font(L"Algerian", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bu10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bu10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bu10.Image")));
			this->bu10->Location = System::Drawing::Point(185, 295);
			this->bu10->Name = L"bu10";
			this->bu10->Size = System::Drawing::Size(114, 105);
			this->bu10->TabIndex = 32;
			this->bu10->UseVisualStyleBackColor = false;
			this->bu10->Click += gcnew System::EventHandler(this, &MyForm3::bu10_Click);
			// 
			// bu7
			// 
			this->bu7->BackColor = System::Drawing::SystemColors::InfoText;
			this->bu7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bu7->Font = (gcnew System::Drawing::Font(L"Algerian", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bu7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bu7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bu7.Image")));
			this->bu7->Location = System::Drawing::Point(304, 184);
			this->bu7->Name = L"bu7";
			this->bu7->Size = System::Drawing::Size(114, 105);
			this->bu7->TabIndex = 31;
			this->bu7->UseVisualStyleBackColor = false;
			this->bu7->Click += gcnew System::EventHandler(this, &MyForm3::bu7_Click);
			// 
			// bu5
			// 
			this->bu5->BackColor = System::Drawing::SystemColors::InfoText;
			this->bu5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bu5->Font = (gcnew System::Drawing::Font(L"Algerian", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bu5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bu5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bu5.Image")));
			this->bu5->Location = System::Drawing::Point(68, 184);
			this->bu5->Name = L"bu5";
			this->bu5->Size = System::Drawing::Size(114, 105);
			this->bu5->TabIndex = 30;
			this->bu5->UseVisualStyleBackColor = false;
			this->bu5->Click += gcnew System::EventHandler(this, &MyForm3::bu5_Click);
			// 
			// bu6
			// 
			this->bu6->BackColor = System::Drawing::SystemColors::InfoText;
			this->bu6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bu6->Font = (gcnew System::Drawing::Font(L"Algerian", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bu6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bu6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bu6.Image")));
			this->bu6->Location = System::Drawing::Point(185, 184);
			this->bu6->Name = L"bu6";
			this->bu6->Size = System::Drawing::Size(114, 105);
			this->bu6->TabIndex = 29;
			this->bu6->UseVisualStyleBackColor = false;
			this->bu6->Click += gcnew System::EventHandler(this, &MyForm3::bu6_Click);
			// 
			// bu1
			// 
			this->bu1->BackColor = System::Drawing::SystemColors::InfoText;
			this->bu1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bu1->Font = (gcnew System::Drawing::Font(L"Algerian", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bu1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bu1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bu1.Image")));
			this->bu1->Location = System::Drawing::Point(68, 73);
			this->bu1->Name = L"bu1";
			this->bu1->Size = System::Drawing::Size(113, 105);
			this->bu1->TabIndex = 28;
			this->bu1->UseVisualStyleBackColor = false;
			this->bu1->Click += gcnew System::EventHandler(this, &MyForm3::bu1_Click_1);
			// 
			// bu3
			// 
			this->bu3->BackColor = System::Drawing::SystemColors::InfoText;
			this->bu3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bu3->Font = (gcnew System::Drawing::Font(L"Algerian", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bu3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bu3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bu3.Image")));
			this->bu3->Location = System::Drawing::Point(304, 73);
			this->bu3->Name = L"bu3";
			this->bu3->Size = System::Drawing::Size(114, 105);
			this->bu3->TabIndex = 27;
			this->bu3->UseVisualStyleBackColor = false;
			this->bu3->Click += gcnew System::EventHandler(this, &MyForm3::bu3_Click_1);
			// 
			// bu2
			// 
			this->bu2->BackColor = System::Drawing::SystemColors::InfoText;
			this->bu2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bu2->Font = (gcnew System::Drawing::Font(L"Algerian", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bu2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bu2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bu2.Image")));
			this->bu2->Location = System::Drawing::Point(187, 73);
			this->bu2->Name = L"bu2";
			this->bu2->Size = System::Drawing::Size(114, 105);
			this->bu2->TabIndex = 26;
			this->bu2->UseVisualStyleBackColor = false;
			this->bu2->Click += gcnew System::EventHandler(this, &MyForm3::bu2_Click_1);
			// 
			// bu12
			// 
			this->bu12->BackColor = System::Drawing::SystemColors::InfoText;
			this->bu12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bu12->Font = (gcnew System::Drawing::Font(L"Algerian", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bu12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bu12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bu12.Image")));
			this->bu12->Location = System::Drawing::Point(424, 295);
			this->bu12->Name = L"bu12";
			this->bu12->Size = System::Drawing::Size(114, 105);
			this->bu12->TabIndex = 37;
			this->bu12->UseVisualStyleBackColor = false;
			this->bu12->Click += gcnew System::EventHandler(this, &MyForm3::bu12_Click);
			// 
			// bu8
			// 
			this->bu8->BackColor = System::Drawing::SystemColors::InfoText;
			this->bu8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bu8->Font = (gcnew System::Drawing::Font(L"Algerian", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bu8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bu8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bu8.Image")));
			this->bu8->Location = System::Drawing::Point(424, 184);
			this->bu8->Name = L"bu8";
			this->bu8->Size = System::Drawing::Size(114, 105);
			this->bu8->TabIndex = 36;
			this->bu8->UseVisualStyleBackColor = false;
			this->bu8->Click += gcnew System::EventHandler(this, &MyForm3::bu8_Click);
			// 
			// bu4
			// 
			this->bu4->BackColor = System::Drawing::SystemColors::InfoText;
			this->bu4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bu4->Font = (gcnew System::Drawing::Font(L"Algerian", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bu4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bu4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bu4.Image")));
			this->bu4->Location = System::Drawing::Point(424, 73);
			this->bu4->Name = L"bu4";
			this->bu4->Size = System::Drawing::Size(114, 105);
			this->bu4->TabIndex = 35;
			this->bu4->UseVisualStyleBackColor = false;
			this->bu4->Click += gcnew System::EventHandler(this, &MyForm3::bu4_Click_1);
			// 
			// bu16
			// 
			this->bu16->BackColor = System::Drawing::SystemColors::InfoText;
			this->bu16->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bu16->Font = (gcnew System::Drawing::Font(L"Algerian", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bu16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bu16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bu16.Image")));
			this->bu16->Location = System::Drawing::Point(424, 406);
			this->bu16->Name = L"bu16";
			this->bu16->Size = System::Drawing::Size(114, 105);
			this->bu16->TabIndex = 41;
			this->bu16->UseVisualStyleBackColor = false;
			this->bu16->Click += gcnew System::EventHandler(this, &MyForm3::bu16_Click_1);
			// 
			// bu15
			// 
			this->bu15->BackColor = System::Drawing::SystemColors::InfoText;
			this->bu15->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bu15->Font = (gcnew System::Drawing::Font(L"Algerian", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bu15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bu15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bu15.Image")));
			this->bu15->Location = System::Drawing::Point(304, 406);
			this->bu15->Name = L"bu15";
			this->bu15->Size = System::Drawing::Size(114, 105);
			this->bu15->TabIndex = 40;
			this->bu15->UseVisualStyleBackColor = false;
			this->bu15->Click += gcnew System::EventHandler(this, &MyForm3::bu15_Click);
			// 
			// bu13
			// 
			this->bu13->BackColor = System::Drawing::SystemColors::InfoText;
			this->bu13->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bu13->Font = (gcnew System::Drawing::Font(L"Algerian", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bu13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bu13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bu13.Image")));
			this->bu13->Location = System::Drawing::Point(68, 406);
			this->bu13->Name = L"bu13";
			this->bu13->Size = System::Drawing::Size(114, 105);
			this->bu13->TabIndex = 39;
			this->bu13->UseVisualStyleBackColor = false;
			this->bu13->Click += gcnew System::EventHandler(this, &MyForm3::bu13_Click);
			// 
			// bu14
			// 
			this->bu14->BackColor = System::Drawing::SystemColors::InfoText;
			this->bu14->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bu14->Font = (gcnew System::Drawing::Font(L"Algerian", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bu14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bu14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bu14.Image")));
			this->bu14->Location = System::Drawing::Point(186, 406);
			this->bu14->Name = L"bu14";
			this->bu14->Size = System::Drawing::Size(114, 105);
			this->bu14->TabIndex = 38;
			this->bu14->UseVisualStyleBackColor = false;
			this->bu14->Click += gcnew System::EventHandler(this, &MyForm3::bu14_Click);
			// 
			// lab1
			// 
			this->lab1->AutoSize = true;
			this->lab1->Font = (gcnew System::Drawing::Font(L"Tahoma", 27.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lab1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->lab1->Location = System::Drawing::Point(34, 9);
			this->lab1->Name = L"lab1";
			this->lab1->Size = System::Drawing::Size(97, 45);
			this->lab1->TabIndex = 42;
			this->lab1->Text = L"play";
			// 
			// MyForm3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkMagenta;
			this->ClientSize = System::Drawing::Size(604, 543);
			this->Controls->Add(this->lab1);
			this->Controls->Add(this->bu16);
			this->Controls->Add(this->bu15);
			this->Controls->Add(this->bu13);
			this->Controls->Add(this->bu14);
			this->Controls->Add(this->bu12);
			this->Controls->Add(this->bu8);
			this->Controls->Add(this->bu4);
			this->Controls->Add(this->bu11);
			this->Controls->Add(this->bu9);
			this->Controls->Add(this->bu10);
			this->Controls->Add(this->bu7);
			this->Controls->Add(this->bu5);
			this->Controls->Add(this->bu6);
			this->Controls->Add(this->bu1);
			this->Controls->Add(this->bu3);
			this->Controls->Add(this->bu2);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm3";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Play X O";
			this->Load += gcnew System::EventHandler(this, &MyForm3::MyForm3_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm3_Load(System::Object^  sender, System::EventArgs^  e) {
	}

	public: String^ play = "O";
		public: String^ player()
		{
					if (play == "O")
						play = "X";
					else
						play = "O";
					return play;
		}

	private: System::Void bu1_Click_1(System::Object^  sender, System::EventArgs^  e) {
				 start_play(bu1);
}
private: System::Void bu2_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 start_play(bu2);
}
private: System::Void bu3_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 start_play(bu3);
}
private: System::Void bu4_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 start_play(bu4);
}
private: System::Void bu5_Click(System::Object^  sender, System::EventArgs^  e) {
			 start_play(bu5);
}
private: System::Void bu6_Click(System::Object^  sender, System::EventArgs^  e) {
			 start_play(bu6);
}
private: System::Void bu7_Click(System::Object^  sender, System::EventArgs^  e) {
			 start_play(bu7);
}
private: System::Void bu8_Click(System::Object^  sender, System::EventArgs^  e) {
			 start_play(bu8);
}
private: System::Void bu9_Click(System::Object^  sender, System::EventArgs^  e) {
			 start_play(bu9);
}

private: System::Void bu10_Click(System::Object^  sender, System::EventArgs^  e) {
			 start_play(bu10);
}
private: System::Void bu11_Click(System::Object^  sender, System::EventArgs^  e) {
			 start_play(bu11);
}
private: System::Void bu12_Click(System::Object^  sender, System::EventArgs^  e) {
			 start_play(bu12);
}
private: System::Void bu13_Click(System::Object^  sender, System::EventArgs^  e) {
			 start_play(bu13);
}
private: System::Void bu14_Click(System::Object^  sender, System::EventArgs^  e) {
			 start_play(bu14);
}
private: System::Void bu15_Click(System::Object^  sender, System::EventArgs^  e) {
			 start_play(bu15);
}
		 private: System::Void bu16_Click_1(System::Object^  sender, System::EventArgs^  e) {
					  start_play(bu16);
}

		 public: String^ win = "\0";
		 public: String^ winer()
		 {
					 if ((bu1->Text == "X") && (bu2->Text == "X") && (bu3->Text == "X") && (bu4->Text == "X"))
					 {
						 win = " The winer is X ";
						 fontcolor(bu1, bu2, bu3, bu4);
					 }
					 else if ((bu5->Text == "X") && (bu6->Text == "X") && (bu7->Text == "X") && (bu8->Text == "X"))
					 {
						 win = " The winer is X ";
						 fontcolor(bu5, bu6, bu7, bu8);
					 }
					 else if ((bu9->Text == "X") && (bu10->Text == "X") && (bu11->Text == "X") && (bu12->Text == "X")) 
					 {
						 win = " The winer is X ";
						 fontcolor(bu9, bu10, bu11, bu12);
					 }
					 else if ((bu13->Text == "X") && (bu14->Text == "X") && (bu15->Text == "X") && (bu16->Text == "X")) 
					 {
						 win = " The winer is X ";
						 fontcolor(bu13, bu14, bu15, bu16);
					 }
					 else if ((bu1->Text == "X") && (bu6->Text == "X") && (bu11->Text == "X") && (bu16->Text == "X")) 
					 {
						 win = " The winer is X ";
						 fontcolor(bu1, bu6, bu11, bu16);
					 }
					 else if ((bu4->Text == "X") && (bu7->Text == "X") && (bu10->Text == "X") && (bu13->Text == "X"))
					 {
						 win = " The winer is X ";
						 fontcolor( bu4,  bu7,  bu10, bu13);
					 }
					 else if ((bu1->Text == "X") && (bu5->Text == "X") && (bu9->Text == "X") && (bu13->Text == "X"))
					 {
						 win = " The winer is X ";
						 fontcolor(bu1, bu5, bu9, bu13);
					 }
					 else if ((bu2->Text == "X") && (bu6->Text == "X") && (bu10->Text == "X") && (bu14->Text == "X")) 
					 {
						 win = " The winer is X ";
						 fontcolor(bu2, bu6, bu10, bu14);
					 }
					 else if ((bu3->Text == "X") && (bu7->Text == "X") && (bu11->Text == "X") && (bu15->Text == "X")) 
					 {
						 win = " The winer is X ";
						 fontcolor(bu3, bu7, bu11, bu15);
					 }
					 else if ((bu4->Text == "X") && (bu8->Text == "X") && (bu12->Text == "X") && (bu16->Text == "X")) 
					 {
						 win = " The winer is X ";
						 fontcolor(bu4, bu8, bu12, bu16);
					 }
					 if ((bu1->Text == "O") && (bu2->Text == "O") && (bu3->Text == "O") && (bu4->Text == "O"))
					 {
						 win = " The winer is O ";
						 fontcolor(bu1, bu2, bu3, bu4);
					 }
					 else if ((bu5->Text == "O") && (bu6->Text == "O") && (bu7->Text == "O") && (bu8->Text == "O")) 
					 {
						 win = " The winer is O ";
						 fontcolor(bu5, bu6, bu7, bu8);
					 }
					 else if ((bu9->Text == "O") && (bu10->Text == "O") && (bu11->Text == "O") && (bu12->Text == "O")) 
					 {
						 win = " The winer is O ";
						 fontcolor(bu9, bu10, bu11, bu12);
					 }
					 else if ((bu13->Text == "O") && (bu14->Text == "O") && (bu15->Text == "O") && (bu16->Text == "O")) 
					 {
						 win = " The winer is O ";
						 fontcolor(bu13, bu14, bu15, bu16);
					 }
					 else if ((bu1->Text == "O") && (bu6->Text == "O") && (bu11->Text == "O") && (bu16->Text == "O")) 
					 {
						 win = " The winer is O ";
						 fontcolor(bu1, bu6, bu11, bu16);
					 }
					 else if ((bu4->Text == "O") && (bu7->Text == "O") && (bu10->Text == "O") && (bu13->Text == "O")) 
					 {
						 win = " The winer is O ";
						 fontcolor(bu4, bu7, bu10, bu13);
					 }
					 else if ((bu1->Text == "O") && (bu5->Text == "O") && (bu9->Text == "O") && (bu13->Text == "O")) 
					 {
						 win = " The winer is O ";
						 fontcolor(bu1, bu5, bu9, bu13);
					 }
					 else if ((bu2->Text == "O") && (bu6->Text == "O") && (bu10->Text == "O") && (bu14->Text == "O")) 
					 {
						 win = " The winer is O ";
						 fontcolor(bu2, bu6, bu10, bu14);
					 }
					 else if ((bu3->Text == "O") && (bu7->Text == "O") && (bu11->Text == "O") && (bu15->Text == "O")) 
					 {
						 win = " The winer is O ";
						 fontcolor(bu3, bu7, bu11, bu15);
					 }
					 else if ((bu4->Text == "O") && (bu8->Text == "O") && (bu12->Text == "O") && (bu16->Text == "O")) 
					 {
						 win = " The winer is O ";
						 fontcolor(bu4, bu8, bu12, bu16);
					 }
					 if (((bu1->Text == "X") || (bu1->Text == "O")) && ((bu2->Text == "X") || (bu2->Text == "O")) && ((bu3->Text == "X") || (bu3->Text == "O"))
						 && ((bu4->Text == "X") || (bu4->Text == "O")) && ((bu5->Text == "X") || (bu5->Text == "O")) && ((bu6->Text == "X") || (bu6->Text == "O"))
						 && ((bu7->Text == "X") || (bu7->Text == "O")) && ((bu8->Text == "X") || (bu8->Text == "O")) && ((bu9->Text == "X") || (bu9->Text == "O"))
						 && ((bu10->Text == "X") || (bu10->Text == "O")) && ((bu11->Text == "X") || (bu11->Text == "O")) && ((bu12->Text == "X") || (bu12->Text == "O"))
						 && ((bu13->Text == "X") || (bu13->Text == "O")) && ((bu14->Text == "X") || (bu14->Text == "O")) && ((bu15->Text == "X") || (bu15->Text == "O"))
						 && ((bu16->Text == "X") || (bu16->Text == "O"))) win = " no winer ";
					 return win;
		 }
				  public:
					  int x0 = 0, o0 = 0;
					  String^ result_x()
					  {
						  if (winer() == " The winer is X ")
						  {
							  x0 = x0 + 1;
						  }
						  return  x0.ToString();
					  }
					  String^ result_o()
					  {
						  if (winer() == " The winer is O ")
						  {
							  o0 = o0 + 1;
						  }
						  return o0.ToString();
					  }
				  public:
					  void new_play()
					  {
						  if (winer() != "\0")
						  {
							  play = "O";
							  bu1->Text = "\0";
							  bu2->Text = "\0";
							  bu3->Text = "\0";
							  bu4->Text = "\0";
							  bu5->Text = "\0";
							  bu6->Text = "\0";
							  bu7->Text = "\0";
							  bu8->Text = "\0";
							  bu9->Text = "\0";
							  bu10->Text = "\0";
							  bu11->Text = "\0";
							  bu12->Text = "\0";
							  bu13->Text = "\0";
							  bu14->Text = "\0";
							  bu15->Text = "\0";
							  bu16->Text = "\0";
							  win = "\0";
							  lab1->Text = "play ";
							  this->bu1->ForeColor = System::Drawing::Color::Black;
							  this->bu2->ForeColor = System::Drawing::Color::Black;
							  this->bu3->ForeColor = System::Drawing::Color::Black;
							  this->bu4->ForeColor = System::Drawing::Color::Black;
							  this->bu5->ForeColor = System::Drawing::Color::Black;
							  this->bu6->ForeColor = System::Drawing::Color::Black;
							  this->bu7->ForeColor = System::Drawing::Color::Black;
							  this->bu8->ForeColor = System::Drawing::Color::Black;
							  this->bu9->ForeColor = System::Drawing::Color::Black;
							  this->bu10->ForeColor = System::Drawing::Color::Black;
							  this->bu11->ForeColor = System::Drawing::Color::Black;
							  this->bu12->ForeColor = System::Drawing::Color::Black;
							  this->bu13->ForeColor = System::Drawing::Color::Black;
							  this->bu14->ForeColor = System::Drawing::Color::Black;
							  this->bu15->ForeColor = System::Drawing::Color::Black;
							  this->bu16->ForeColor = System::Drawing::Color::Black;
						  }
					  }
					  void start_play(Button^ bu)
					  {
						  if (bu->Text != "X" && bu->Text != "O")
							  bu->Text = player();
						  lab1->Text = "player " + bu->Text + " is playing now";
						  if (winer() != "\0")
						  {
							  MessageBox::Show(winer());
							  this->Hide();
							  MyForm2^ fom2 = gcnew MyForm2(obj, this, result_x(), result_o(), namex, nameo);
							  fom2->ShowDialog();
							  new_play();
						  }
					  }

					  void fontcolor(Button^ but1, Button^ but2, Button^ but3, Button^ but4)
					  {
						  but1->ForeColor = System::Drawing::Color::Red;
						  but2->ForeColor = System::Drawing::Color::Red;
						  but3->ForeColor = System::Drawing::Color::Red;
						  but4->ForeColor = System::Drawing::Color::Red;
					  }
};
}
