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
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		Form^ obj = gcnew Form();
		String^ namex;
		String^ nameo;
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

		}
		MyForm(Form^ obj1)
		{
			obj = obj1;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

		}
		MyForm(Form^ obj1, String^ name1, String^ name2)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  bu9;
	protected:
	private: System::Windows::Forms::Button^  bu7;
	private: System::Windows::Forms::Button^  bu8;
	private: System::Windows::Forms::Button^  bu6;
	private: System::Windows::Forms::Button^  bu4;
	private: System::Windows::Forms::Button^  bu5;
	private: System::Windows::Forms::Button^  bu1;
	private: System::Windows::Forms::Button^  bu3;
	private: System::Windows::Forms::Button^  bu2;
	private: System::Windows::Forms::Label^  lab1;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->bu9 = (gcnew System::Windows::Forms::Button());
			this->bu7 = (gcnew System::Windows::Forms::Button());
			this->bu8 = (gcnew System::Windows::Forms::Button());
			this->bu6 = (gcnew System::Windows::Forms::Button());
			this->bu4 = (gcnew System::Windows::Forms::Button());
			this->bu5 = (gcnew System::Windows::Forms::Button());
			this->bu1 = (gcnew System::Windows::Forms::Button());
			this->bu3 = (gcnew System::Windows::Forms::Button());
			this->bu2 = (gcnew System::Windows::Forms::Button());
			this->lab1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// bu9
			// 
			this->bu9->BackColor = System::Drawing::Color::White;
			this->bu9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->bu9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bu9->Font = (gcnew System::Drawing::Font(L"Algerian", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bu9->ForeColor = System::Drawing::Color::Black;
			this->bu9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bu9.Image")));
			this->bu9->Location = System::Drawing::Point(369, 379);
			this->bu9->Name = L"bu9";
			this->bu9->Size = System::Drawing::Size(129, 122);
			this->bu9->TabIndex = 25;
			this->bu9->UseVisualStyleBackColor = false;
			this->bu9->Click += gcnew System::EventHandler(this, &MyForm::bu9_Click);
			// 
			// bu7
			// 
			this->bu7->BackColor = System::Drawing::Color::White;
			this->bu7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->bu7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bu7->Font = (gcnew System::Drawing::Font(L"Algerian", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bu7->ForeColor = System::Drawing::Color::Black;
			this->bu7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bu7.Image")));
			this->bu7->Location = System::Drawing::Point(99, 379);
			this->bu7->Name = L"bu7";
			this->bu7->Size = System::Drawing::Size(129, 122);
			this->bu7->TabIndex = 24;
			this->bu7->UseVisualStyleBackColor = false;
			this->bu7->Click += gcnew System::EventHandler(this, &MyForm::bu7_Click);
			// 
			// bu8
			// 
			this->bu8->BackColor = System::Drawing::Color::White;
			this->bu8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->bu8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bu8->Font = (gcnew System::Drawing::Font(L"Algerian", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bu8->ForeColor = System::Drawing::Color::Black;
			this->bu8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bu8.Image")));
			this->bu8->Location = System::Drawing::Point(234, 379);
			this->bu8->Name = L"bu8";
			this->bu8->Size = System::Drawing::Size(129, 122);
			this->bu8->TabIndex = 23;
			this->bu8->UseVisualStyleBackColor = false;
			this->bu8->Click += gcnew System::EventHandler(this, &MyForm::bu8_Click);
			// 
			// bu6
			// 
			this->bu6->BackColor = System::Drawing::Color::White;
			this->bu6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->bu6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bu6->Font = (gcnew System::Drawing::Font(L"Algerian", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bu6->ForeColor = System::Drawing::Color::Black;
			this->bu6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bu6.Image")));
			this->bu6->Location = System::Drawing::Point(370, 251);
			this->bu6->Name = L"bu6";
			this->bu6->Size = System::Drawing::Size(129, 122);
			this->bu6->TabIndex = 22;
			this->bu6->UseVisualStyleBackColor = false;
			this->bu6->Click += gcnew System::EventHandler(this, &MyForm::bu6_Click);
			// 
			// bu4
			// 
			this->bu4->BackColor = System::Drawing::Color::White;
			this->bu4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->bu4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bu4->Font = (gcnew System::Drawing::Font(L"Algerian", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bu4->ForeColor = System::Drawing::Color::Black;
			this->bu4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bu4.Image")));
			this->bu4->Location = System::Drawing::Point(100, 251);
			this->bu4->Name = L"bu4";
			this->bu4->Size = System::Drawing::Size(129, 122);
			this->bu4->TabIndex = 21;
			this->bu4->UseVisualStyleBackColor = false;
			this->bu4->Click += gcnew System::EventHandler(this, &MyForm::bu4_Click);
			// 
			// bu5
			// 
			this->bu5->BackColor = System::Drawing::Color::White;
			this->bu5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->bu5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bu5->Font = (gcnew System::Drawing::Font(L"Algerian", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bu5->ForeColor = System::Drawing::Color::Black;
			this->bu5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bu5.Image")));
			this->bu5->Location = System::Drawing::Point(235, 251);
			this->bu5->Name = L"bu5";
			this->bu5->Size = System::Drawing::Size(129, 122);
			this->bu5->TabIndex = 20;
			this->bu5->UseVisualStyleBackColor = false;
			this->bu5->Click += gcnew System::EventHandler(this, &MyForm::bu5_Click);
			// 
			// bu1
			// 
			this->bu1->BackColor = System::Drawing::Color::White;
			this->bu1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->bu1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bu1->Font = (gcnew System::Drawing::Font(L"Algerian", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bu1->ForeColor = System::Drawing::Color::Black;
			this->bu1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bu1.Image")));
			this->bu1->Location = System::Drawing::Point(99, 123);
			this->bu1->Name = L"bu1";
			this->bu1->Size = System::Drawing::Size(128, 122);
			this->bu1->TabIndex = 19;
			this->bu1->UseVisualStyleBackColor = false;
			this->bu1->Click += gcnew System::EventHandler(this, &MyForm::bu1_Click);
			// 
			// bu3
			// 
			this->bu3->BackColor = System::Drawing::Color::White;
			this->bu3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->bu3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bu3->Font = (gcnew System::Drawing::Font(L"Algerian", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bu3->ForeColor = System::Drawing::Color::Black;
			this->bu3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bu3.Image")));
			this->bu3->Location = System::Drawing::Point(370, 123);
			this->bu3->Name = L"bu3";
			this->bu3->Size = System::Drawing::Size(129, 122);
			this->bu3->TabIndex = 18;
			this->bu3->UseVisualStyleBackColor = false;
			this->bu3->Click += gcnew System::EventHandler(this, &MyForm::bu3_Click);
			// 
			// bu2
			// 
			this->bu2->BackColor = System::Drawing::Color::White;
			this->bu2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->bu2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bu2->Font = (gcnew System::Drawing::Font(L"Algerian", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bu2->ForeColor = System::Drawing::Color::Black;
			this->bu2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bu2.Image")));
			this->bu2->Location = System::Drawing::Point(234, 123);
			this->bu2->Name = L"bu2";
			this->bu2->Size = System::Drawing::Size(129, 122);
			this->bu2->TabIndex = 17;
			this->bu2->UseVisualStyleBackColor = false;
			this->bu2->Click += gcnew System::EventHandler(this, &MyForm::bu2_Click);
			// 
			// lab1
			// 
			this->lab1->AutoSize = true;
			this->lab1->Font = (gcnew System::Drawing::Font(L"Tahoma", 27.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lab1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->lab1->Location = System::Drawing::Point(39, 40);
			this->lab1->Name = L"lab1";
			this->lab1->Size = System::Drawing::Size(97, 45);
			this->lab1->TabIndex = 26;
			this->lab1->Text = L"play";
			this->lab1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DeepPink;
			this->ClientSize = System::Drawing::Size(600, 535);
			this->Controls->Add(this->lab1);
			this->Controls->Add(this->bu9);
			this->Controls->Add(this->bu7);
			this->Controls->Add(this->bu8);
			this->Controls->Add(this->bu6);
			this->Controls->Add(this->bu4);
			this->Controls->Add(this->bu5);
			this->Controls->Add(this->bu1);
			this->Controls->Add(this->bu3);
			this->Controls->Add(this->bu2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Play X O";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String^ player ="O";
		 String^ play()
		{
			if (player == "O")
				player = "X";
			else
				player = "O";
			return player;
		}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
					 
	}
	private: System::Void bu1_Click(System::Object^  sender, System::EventArgs^  e) {
				 start_play(bu1);
	}
private: System::Void bu2_Click(System::Object^  sender, System::EventArgs^  e) {
			 start_play(bu2);
}
private: System::Void bu3_Click(System::Object^  sender, System::EventArgs^  e) {
			 start_play(bu3);
}
private: System::Void bu4_Click(System::Object^  sender, System::EventArgs^  e) {
			 start_play(bu4);
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
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

		 public: String^ win = "\0";
		 public: String^ winer()
		 {
					 if ((bu1->Text == "X") && (bu2->Text == "X") && (bu3->Text == "X")) 
					 {
						 win = " The winer is X ";
						 this->bu1->ForeColor = System::Drawing::Color::Red;
						 this->bu2->ForeColor = System::Drawing::Color::Red;
						 this->bu3->ForeColor = System::Drawing::Color::Red;
					 }
					 else if ((bu4->Text == "X") && (bu5->Text == "X") && (bu6->Text == "X"))
					 {
						 win = " The winer is X ";
						 this->bu4->ForeColor = System::Drawing::Color::Red;
						 this->bu5->ForeColor = System::Drawing::Color::Red;
						 this->bu6->ForeColor = System::Drawing::Color::Red;
					 }
					 else if ((bu7->Text == "X") && (bu8->Text == "X") && (bu9->Text == "X")) 
					 {
						 win = " The winer is X ";
						 this->bu7->ForeColor = System::Drawing::Color::Red;
						 this->bu8->ForeColor = System::Drawing::Color::Red;
						 this->bu9->ForeColor = System::Drawing::Color::Red;
					 }
					 else if ((bu1->Text == "X") && (bu4->Text == "X") && (bu7->Text == "X")) 
					 {
						 win = " The winer is X ";
						 this->bu1->ForeColor = System::Drawing::Color::Red;
						 this->bu4->ForeColor = System::Drawing::Color::Red;
						 this->bu7->ForeColor = System::Drawing::Color::Red;
					 }
					 else if ((bu2->Text == "X") && (bu5->Text == "X") && (bu8->Text == "X")) 
					 {
						 win = " The winer is X ";
						 this->bu2->ForeColor = System::Drawing::Color::Red;
						 this->bu5->ForeColor = System::Drawing::Color::Red;
						 this->bu8->ForeColor = System::Drawing::Color::Red;
					 }
					 else if ((bu3->Text == "X") && (bu6->Text == "X") && (bu9->Text == "X")) 
					 {
						 win = " The winer is X ";
						 this->bu3->ForeColor = System::Drawing::Color::Red;
						 this->bu6->ForeColor = System::Drawing::Color::Red;
						 this->bu9->ForeColor = System::Drawing::Color::Red;
					 }
					 else if ((bu1->Text == "X") && (bu5->Text == "X") && (bu9->Text == "X"))
					 {
						 win = " The winer is X ";
						 this->bu1->ForeColor = System::Drawing::Color::Red;
						 this->bu5->ForeColor = System::Drawing::Color::Red;
						 this->bu9->ForeColor = System::Drawing::Color::Red;
					 }
					 else if ((bu3->Text == "X") && (bu5->Text == "X") && (bu7->Text == "X"))
					 {
						 win = " The winer is X ";
						 this->bu3->ForeColor = System::Drawing::Color::Red;
						 this->bu5->ForeColor = System::Drawing::Color::Red;
						 this->bu7->ForeColor = System::Drawing::Color::Red;
					 }
					 if ((bu1->Text == "O") && (bu2->Text == "O") && (bu3->Text == "O")) 
					 {
						 win = " The winer is O ";
						 this->bu1->ForeColor = System::Drawing::Color::Red;
						 this->bu2->ForeColor = System::Drawing::Color::Red;
						 this->bu3->ForeColor = System::Drawing::Color::Red;
					 }
					 else if ((bu4->Text == "O") && (bu5->Text == "O") && (bu6->Text == "O")) 
					 {
						 win = " The winer is O ";
						 this->bu4->ForeColor = System::Drawing::Color::Red;
						 this->bu5->ForeColor = System::Drawing::Color::Red;
						 this->bu6->ForeColor = System::Drawing::Color::Red;
					 }
					 else if ((bu7->Text == "O") && (bu8->Text == "O") && (bu9->Text == "O"))
					 {
						 win = " The winer is O ";
						 this->bu7->ForeColor = System::Drawing::Color::Red;
						 this->bu8->ForeColor = System::Drawing::Color::Red;
						 this->bu9->ForeColor = System::Drawing::Color::Red;
					 }
					 else if ((bu1->Text == "O") && (bu4->Text == "O") && (bu7->Text == "O")) 
					 {
						 win = " The winer is O ";
						 this->bu1->ForeColor = System::Drawing::Color::Red;
						 this->bu4->ForeColor = System::Drawing::Color::Red;
						 this->bu7->ForeColor = System::Drawing::Color::Red;
					 }
					 else if ((bu2->Text == "O") && (bu5->Text == "O") && (bu8->Text == "O"))
					 {
						 win = " The winer is O ";
						 this->bu2->ForeColor = System::Drawing::Color::Red;
						 this->bu5->ForeColor = System::Drawing::Color::Red;
						 this->bu8->ForeColor = System::Drawing::Color::Red;
					 }
					 else if ((bu3->Text == "O") && (bu6->Text == "O") && (bu9->Text == "O")) 
					 {
						 win = " The winer is O ";
						 this->bu3->ForeColor = System::Drawing::Color::Red;
						 this->bu6->ForeColor = System::Drawing::Color::Red;
						 this->bu9->ForeColor = System::Drawing::Color::Red;
					 }
					 else if ((bu1->Text == "O") && (bu5->Text == "O") && (bu9->Text == "O")) 
					 {
						 win = " The winer is O ";
						 this->bu1->ForeColor = System::Drawing::Color::Red;
						 this->bu5->ForeColor = System::Drawing::Color::Red;
						 this->bu9->ForeColor = System::Drawing::Color::Red;
					 }
					 else if ((bu3->Text == "O") && (bu5->Text == "O") && (bu7->Text == "O")) 
					 {
						 win = " The winer is O ";
						 this->bu3->ForeColor = System::Drawing::Color::Red;
						 this->bu5->ForeColor = System::Drawing::Color::Red;
						 this->bu7->ForeColor = System::Drawing::Color::Red;
					 }
					 if (((bu1->Text == "X") || (bu1->Text == "O")) && ((bu2->Text == "X") || (bu2->Text == "O")) && ((bu3->Text == "X") || (bu3->Text == "O"))
						 && ((bu4->Text == "X") || (bu4->Text == "O")) && ((bu5->Text == "X") || (bu5->Text == "O")) && ((bu6->Text == "X") || (bu6->Text == "O"))
						 && ((bu7->Text == "X") || (bu7->Text == "O")) && ((bu8->Text == "X") || (bu8->Text == "O")) && ((bu9->Text == "X") || (bu9->Text == "O")))
						 win = " no winer ";
					 return win;
		 }
				 public: 
					 int x=0, o=0;
				 String^ result_x()
				 {
					 if (winer() == " The winer is X ")
					 {
						 x = x + 1;
					 }
					 return  x.ToString();
				 }
				 String^ result_o()
				 {
					 if (winer() == " The winer is O ")
					 {
						 o = o + 1;
					 }
					 return o.ToString();
				 }
				 public:
					 void new_play()
					 {
						 if (winer() != "\0")
						 {
							 player = "O";
							 bu1->Text = "\0";
							 bu2->Text = "\0";
							 bu3->Text = "\0";
							 bu4->Text = "\0";
							 bu5->Text = "\0";
							 bu6->Text = "\0";
							 bu7->Text = "\0";
							 bu8->Text = "\0";
							 bu9->Text = "\0";
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
						 }
					 }
					 void start_play(Button^ bu)
					 {
						 if (bu->Text != "X" && bu->Text != "O")
							 bu->Text = play();
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
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
