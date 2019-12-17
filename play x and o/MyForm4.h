#pragma once
#include "MyForm2.h"
#include<cstdlib>
#include<ctime>

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
	public ref class MyForm4 : public System::Windows::Forms::Form
	{
	public:
		Form^ obj = gcnew Form();
		String^ First_player;
		String^ Second_player;
		MyForm4(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

		}
		MyForm4(Form^ obj1,String^ fp,String^ sp)
		{
			obj = obj1;
			First_player=fp;
			Second_player=sp;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm4()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:








	private: System::Windows::Forms::Label^  lab1;
	private: System::Windows::Forms::Button^  bu9;
	private: System::Windows::Forms::Button^  bu7;
	private: System::Windows::Forms::Button^  bu8;
	private: System::Windows::Forms::Button^  bu6;
	private: System::Windows::Forms::Button^  bu4;
	private: System::Windows::Forms::Button^  bu5;
	private: System::Windows::Forms::Button^  bu1;
	private: System::Windows::Forms::Button^  bu3;
	private: System::Windows::Forms::Button^  bu2;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm4::typeid));
			this->lab1 = (gcnew System::Windows::Forms::Label());
			this->bu9 = (gcnew System::Windows::Forms::Button());
			this->bu7 = (gcnew System::Windows::Forms::Button());
			this->bu8 = (gcnew System::Windows::Forms::Button());
			this->bu6 = (gcnew System::Windows::Forms::Button());
			this->bu4 = (gcnew System::Windows::Forms::Button());
			this->bu5 = (gcnew System::Windows::Forms::Button());
			this->bu1 = (gcnew System::Windows::Forms::Button());
			this->bu3 = (gcnew System::Windows::Forms::Button());
			this->bu2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lab1
			// 
			this->lab1->AutoSize = true;
			this->lab1->Font = (gcnew System::Drawing::Font(L"Tahoma", 27.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lab1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->lab1->Location = System::Drawing::Point(48, 39);
			this->lab1->Name = L"lab1";
			this->lab1->Size = System::Drawing::Size(97, 45);
			this->lab1->TabIndex = 26;
			this->lab1->Text = L"play";
			this->lab1->Click += gcnew System::EventHandler(this, &MyForm4::label1_Click);
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
			this->bu9->Location = System::Drawing::Point(363, 376);
			this->bu9->Name = L"bu9";
			this->bu9->Size = System::Drawing::Size(129, 122);
			this->bu9->TabIndex = 35;
			this->bu9->UseVisualStyleBackColor = false;
			this->bu9->Click += gcnew System::EventHandler(this, &MyForm4::bu9_Click_1);
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
			this->bu7->Location = System::Drawing::Point(93, 376);
			this->bu7->Name = L"bu7";
			this->bu7->Size = System::Drawing::Size(129, 122);
			this->bu7->TabIndex = 34;
			this->bu7->UseVisualStyleBackColor = false;
			this->bu7->Click += gcnew System::EventHandler(this, &MyForm4::bu7_Click_1);
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
			this->bu8->Location = System::Drawing::Point(228, 376);
			this->bu8->Name = L"bu8";
			this->bu8->Size = System::Drawing::Size(129, 122);
			this->bu8->TabIndex = 33;
			this->bu8->UseVisualStyleBackColor = false;
			this->bu8->Click += gcnew System::EventHandler(this, &MyForm4::bu8_Click_1);
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
			this->bu6->Location = System::Drawing::Point(364, 248);
			this->bu6->Name = L"bu6";
			this->bu6->Size = System::Drawing::Size(129, 122);
			this->bu6->TabIndex = 32;
			this->bu6->UseVisualStyleBackColor = false;
			this->bu6->Click += gcnew System::EventHandler(this, &MyForm4::bu6_Click_1);
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
			this->bu4->Location = System::Drawing::Point(94, 248);
			this->bu4->Name = L"bu4";
			this->bu4->Size = System::Drawing::Size(129, 122);
			this->bu4->TabIndex = 31;
			this->bu4->UseVisualStyleBackColor = false;
			this->bu4->Click += gcnew System::EventHandler(this, &MyForm4::bu4_Click_1);
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
			this->bu5->Location = System::Drawing::Point(229, 248);
			this->bu5->Name = L"bu5";
			this->bu5->Size = System::Drawing::Size(129, 122);
			this->bu5->TabIndex = 30;
			this->bu5->UseVisualStyleBackColor = false;
			this->bu5->Click += gcnew System::EventHandler(this, &MyForm4::bu5_Click_1);
			// 
			// bu1
			// 
			this->bu1->BackColor = System::Drawing::SystemColors::InfoText;
			this->bu1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->bu1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bu1->Font = (gcnew System::Drawing::Font(L"Algerian", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bu1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bu1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bu1.Image")));
			this->bu1->Location = System::Drawing::Point(94, 120);
			this->bu1->Name = L"bu1";
			this->bu1->Size = System::Drawing::Size(128, 122);
			this->bu1->TabIndex = 29;
			this->bu1->UseVisualStyleBackColor = false;
			this->bu1->Click += gcnew System::EventHandler(this, &MyForm4::bu1_Click_1);
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
			this->bu3->Location = System::Drawing::Point(363, 120);
			this->bu3->Name = L"bu3";
			this->bu3->Size = System::Drawing::Size(129, 122);
			this->bu3->TabIndex = 28;
			this->bu3->UseVisualStyleBackColor = false;
			this->bu3->Click += gcnew System::EventHandler(this, &MyForm4::bu3_Click_1);
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
			this->bu2->Location = System::Drawing::Point(228, 120);
			this->bu2->Name = L"bu2";
			this->bu2->Size = System::Drawing::Size(129, 122);
			this->bu2->TabIndex = 27;
			this->bu2->UseVisualStyleBackColor = false;
			this->bu2->Click += gcnew System::EventHandler(this, &MyForm4::bu2_Click_1);
			// 
			// MyForm4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Desktop;
			this->ClientSize = System::Drawing::Size(596, 535);
			this->Controls->Add(this->bu9);
			this->Controls->Add(this->bu7);
			this->Controls->Add(this->bu8);
			this->Controls->Add(this->bu6);
			this->Controls->Add(this->bu4);
			this->Controls->Add(this->bu5);
			this->Controls->Add(this->bu1);
			this->Controls->Add(this->bu3);
			this->Controls->Add(this->bu2);
			this->Controls->Add(this->lab1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm4";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Play X O";
			this->Load += gcnew System::EventHandler(this, &MyForm4::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
			public: int number_button;
			public:int chose_boutton()
			{
			//ÇÓÈÞíÉ ÇáÝæÒ
					   if ((bu5->Text == Second_player &&bu9->Text == Second_player || bu2->Text == Second_player&&bu3->Text == Second_player 
						   || bu4->Text == Second_player&&bu7->Text == Second_player)
						   && (bu1->Text != "X" && bu1->Text != "O"))
						   number_button = 1;

					   else if ((bu8->Text == Second_player&&bu5->Text == Second_player 
						   || bu1->Text == Second_player&&bu3->Text == Second_player)
						   && (bu2->Text != "X" && bu2->Text != "O"))
						   number_button = 2;


					   else if ((bu6->Text == Second_player&&bu9->Text == Second_player || bu2->Text == Second_player&&bu1->Text == Second_player 
						   || bu5->Text == Second_player&&bu7->Text == Second_player)
						   && (bu3->Text != "X" && bu3->Text != "O"))
						   number_button = 3;


					   else if ((bu5->Text == Second_player&&bu6->Text == Second_player || bu1->Text == Second_player&&bu7->Text == Second_player)
						   && (bu4->Text != "X" && bu4->Text != "O"))
						   number_button = 4;

					   else if ((bu1->Text == Second_player&&bu9->Text == Second_player || bu7->Text == Second_player&&bu3->Text == Second_player
						   || bu4->Text == Second_player&&bu6->Text == Second_player
						   || bu8->Text == Second_player&&bu2->Text == Second_player) 
						   && (bu5->Text != "X" && bu5->Text != "O"))
						   number_button = 5;


					   else if ((bu5->Text == Second_player&&bu4->Text == Second_player || bu9->Text == Second_player&&bu3->Text == Second_player)
						   && (bu6->Text != "X" && bu6->Text != "O"))
						   number_button = 6;

					   else if ((bu8->Text == Second_player&&bu9->Text == Second_player || bu5->Text == Second_player&&bu3->Text == Second_player ||
						   bu4->Text == Second_player&&bu1->Text == Second_player) && (bu7->Text != "X" && bu7->Text != "O"))
						   number_button = 7;


					   else if ((bu2->Text == Second_player&&bu5->Text == Second_player || bu7->Text == Second_player&&bu9->Text == Second_player)
						   && (bu8->Text != "X" && bu8->Text != "O"))
						   number_button = 8;

					   else if ((bu1->Text == Second_player&&bu5->Text == Second_player || bu7->Text == Second_player&&bu8->Text == Second_player ||
						   bu3->Text == Second_player &&bu6->Text == Second_player) && (bu9->Text != "X" && bu9->Text != "O"))
						   number_button = 9;
			// ÇáÏÝÇÚ
					   else if ((bu5->Text == First_player&&bu9->Text == First_player || bu2->Text == First_player&&bu3->Text == First_player 
						   || bu4->Text == First_player&&bu7->Text == First_player)
					&& (bu1->Text != "X" && bu1->Text != "O"))
						number_button = 1;
					
					   else if ((bu8->Text == First_player&&bu5->Text == First_player || bu1->Text == First_player&&bu3->Text == First_player)
					&& (bu2->Text != "X" && bu2->Text != "O"))
					     number_button = 2;
					

					   else if ((bu6->Text == First_player&&bu9->Text == First_player || bu2->Text == First_player&&bu1->Text == First_player 
						   || bu5->Text == First_player&&bu7->Text == First_player)
					&& (bu3->Text != "X" && bu3->Text != "O"))
						number_button = 3;
					

					   else if ((bu5->Text == First_player&&bu6->Text == First_player || bu1->Text == First_player&&bu7->Text == First_player)
					&& (bu4->Text != "X" && bu4->Text != "O"))
						number_button = 4;
						
					   else if ((bu1->Text == First_player&&bu9->Text == First_player || bu7->Text == First_player&&bu3->Text == First_player 
						   || bu4->Text == First_player&&bu6->Text == First_player
						   || bu8->Text == First_player&&bu2->Text == First_player) && (bu5->Text != "X" && bu5->Text != "O"))
					     number_button = 5;
						

					   else if ((bu5->Text == First_player&&bu4->Text == First_player || bu9->Text == First_player&&bu3->Text == First_player)
				    && (bu6->Text != "X" && bu6->Text != "O"))
						 number_button = 6;
					
					   else if ((bu8->Text == First_player&&bu9->Text == First_player || bu5->Text == First_player&&bu3->Text == First_player ||
						   bu4->Text == First_player&&bu1->Text == First_player) && (bu7->Text != "X" && bu7->Text != "O"))
				         number_button = 7;
				       
					
					   else if ((bu2->Text == First_player&&bu5->Text == First_player || bu7->Text == First_player&&bu9->Text == First_player)
				    && (bu8->Text != "X" && bu8->Text != "O"))
						  number_button = 8;
						
					   else if ((bu1->Text == First_player&&bu5->Text == First_player || bu7->Text == First_player&&bu8->Text == First_player ||
						   bu3->Text == First_player &&bu6->Text == First_player) && (bu9->Text != "X" && bu9->Text != "O"))
						  number_button = 9;
					else
		// ÇÓÊÑÇÊíÌíÉ ÇáÝæÒ 
					{
						if ((bu1->Text != First_player) && (bu2->Text != First_player) && (bu3->Text != First_player))
						{
							if (bu1->Text != Second_player)
								number_button = 1;
							else if (bu2->Text != Second_player)
								number_button = 2;
							else if (bu3->Text != Second_player)
								number_button = 3;
						}
						else if ((bu4->Text != First_player) && (bu5->Text != First_player) && (bu6->Text != First_player))
						{
							if (bu4->Text != Second_player)
								number_button = 4;
							else if (bu5->Text != Second_player)
								number_button = 5;
							else if (bu6->Text != Second_player)
								number_button = 6;
						}
						else if ((bu7->Text != First_player) && (bu8->Text != First_player) && (bu9->Text != First_player))
						{
							if (bu7->Text != Second_player)
								number_button = 7;
							else if (bu8->Text != Second_player)
								number_button = 8;
							else if (bu9->Text != Second_player)
								number_button = 9;
						}
						else if ((bu1->Text != First_player) && (bu4->Text != First_player) && (bu7->Text != First_player))
						{
							if (bu1->Text != Second_player)
								number_button = 1;
							else if (bu4->Text != Second_player)
								number_button = 4;
							else if (bu7->Text != Second_player)
								number_button = 7;
						}
						else if ((bu2->Text != First_player) && (bu5->Text != First_player) && (bu8->Text != First_player))
						{
							if (bu2->Text != Second_player)
								number_button = 2;
							else if (bu5->Text != Second_player)
								number_button = 5;
							else if (bu8->Text != Second_player)
								number_button = 8;
						}
						else if ((bu3->Text != First_player) && (bu6->Text != First_player) && (bu9->Text != First_player))
						{
							if (bu3->Text != Second_player)
								number_button = 3;
							else if (bu6->Text != Second_player)
								number_button = 6;
							else if (bu9->Text != Second_player)
								number_button = 9;
						}
						else if ((bu1->Text != First_player) && (bu5->Text != First_player) && (bu9->Text != First_player))
						{
							if (bu1->Text != Second_player)
								number_button = 1;
							else if (bu5->Text != Second_player)
								number_button = 5;
							else if (bu9->Text != Second_player)
								number_button = 9;
						}
						else if ((bu3->Text != First_player) && (bu5->Text != First_player) && (bu7->Text != First_player))
						{
							if (bu3->Text != Second_player)
								number_button = 3;
							else if (bu5->Text != Second_player)
								number_button = 5;
							else if (bu7->Text != Second_player)
								number_button = 7;
						}
						   
						else
			// ÇáÚÈ ÇáÚÔæÇÆí
						{
							for (;;){
						  srand(time(0));
						  int r = 1 + rand() % 9;
							if (r == 1 && (bu1->Text != "X" && bu1->Text != "O"))
							{
								number_button = 1;
								break;
							}
							else if (r == 2 && (bu2->Text != "X" && bu2->Text != "O"))
							{
								number_button = 2;
								break;
							}
							else if (r == 3 && (bu3->Text != "X" && bu3->Text != "O"))
							{
								number_button = 3;
								break;
							}
							else if (r == 4 && (bu4->Text != "X" && bu4->Text != "O"))
							{
								number_button = 4;
								break;
							}
							else if (r == 5 && (bu5->Text != "X" && bu5->Text != "O"))
							{
								number_button = 5;
								break;
							}
							else if (r == 6 && (bu6->Text != "X" && bu6->Text != "O"))
							{
								number_button = 6;
								break;
							}
							else if (r == 7 && (bu7->Text != "X" && bu7->Text != "O"))
							{
								number_button = 7;
								break;
							}
							else if (r == 8 && (bu8->Text != "X" && bu8->Text != "O"))
							{
								number_button = 8;
								break;
							}
							else if (r == 9 && (bu9->Text != "X" && bu9->Text != "O"))
							{
								number_button = 9;
								break;
							}
				// äåÇíÉ ÇááÚÈå
							else if (((bu1->Text != First_player) || (bu1->Text == First_player)) && ((bu2->Text == "X") || (bu2->Text == "O")) && ((bu3->Text == "X") || (bu3->Text == "O"))
								&& ((bu4->Text == "X") || (bu4->Text == "O")) && ((bu5->Text == "X") || (bu5->Text == "O")) && ((bu6->Text == "X") || (bu6->Text == "O"))
								&& ((bu7->Text == "X") || (bu7->Text == "O")) && ((bu8->Text == "X") || (bu8->Text == "O")) && ((bu9->Text == "X") || (bu9->Text == "O")))
								break;
							else if (((bu1->Text == "X") || (bu1->Text == "O")) && ((bu2->Text != First_player) || (bu2->Text == First_player)) && ((bu3->Text == "X") || (bu3->Text == "O"))
								&& ((bu4->Text == "X") || (bu4->Text == "O")) && ((bu5->Text == "X") || (bu5->Text == "O")) && ((bu6->Text == "X") || (bu6->Text == "O"))
								&& ((bu7->Text == "X") || (bu7->Text == "O")) && ((bu8->Text == "X") || (bu8->Text == "O")) && ((bu9->Text == "X") || (bu9->Text == "O")))
								break;
							else if (((bu1->Text == "X") || (bu1->Text == "O")) && ((bu2->Text == "X") || (bu2->Text == "O")) && ((bu3->Text != First_player) || (bu3->Text == First_player))
								&& ((bu4->Text == "X") || (bu4->Text == "O")) && ((bu5->Text == "X") || (bu5->Text == "O")) && ((bu6->Text == "X") || (bu6->Text == "O"))
								&& ((bu7->Text == "X") || (bu7->Text == "O")) && ((bu8->Text == "X") || (bu8->Text == "O")) && ((bu9->Text == "X") || (bu9->Text == "O")))
								break;
							else if (((bu1->Text == "X") || (bu1->Text == "O")) && ((bu2->Text == "X") || (bu2->Text == "O")) && ((bu3->Text == "X") || (bu3->Text == "O"))
								&& ((bu4->Text != First_player) || (bu4->Text == First_player)) && ((bu5->Text == "X") || (bu5->Text == "O")) && ((bu6->Text == "X") || (bu6->Text == "O"))
								&& ((bu7->Text == "X") || (bu7->Text == "O")) && ((bu8->Text == "X") || (bu8->Text == "O")) && ((bu9->Text == "X") || (bu9->Text == "O")))
								break;
							else if (((bu1->Text == "X") || (bu1->Text == "O")) && ((bu2->Text == "X") || (bu2->Text == "O")) && ((bu3->Text == "X") || (bu3->Text == "O"))
								&& ((bu4->Text == "X") || (bu4->Text == "O")) && ((bu5->Text != First_player) || (bu5->Text == First_player)) && ((bu6->Text == "X") || (bu6->Text == "O"))
								&& ((bu7->Text == "X") || (bu7->Text == "O")) && ((bu8->Text == "X") || (bu8->Text == "O")) && ((bu9->Text == "X") || (bu9->Text == "O")))
								break;
							else if (((bu1->Text == "X") || (bu1->Text == "O")) && ((bu2->Text == "X") || (bu2->Text == "O")) && ((bu3->Text == "X") || (bu3->Text == "O"))
								&& ((bu4->Text == "X") || (bu4->Text == "O")) && ((bu5->Text == "X") || (bu5->Text == "O")) && ((bu6->Text != First_player) || (bu6->Text == First_player))
								&& ((bu7->Text == "X") || (bu7->Text == "O")) && ((bu8->Text == "X") || (bu8->Text == "O")) && ((bu9->Text == "X") || (bu9->Text == "O")))
								break;
							else if (((bu1->Text == "X") || (bu1->Text == "O")) && ((bu2->Text == "X") || (bu2->Text == "O")) && ((bu3->Text == "X") || (bu3->Text == "O"))
								&& ((bu4->Text == "X") || (bu4->Text == "O")) && ((bu5->Text == "X") || (bu5->Text == "O")) && ((bu6->Text == "X") || (bu6->Text == "O"))
								&& ((bu7->Text != First_player) || (bu7->Text == First_player)) && ((bu8->Text == "X") || (bu8->Text == "O")) && ((bu9->Text == "X") || (bu9->Text == "O")))
								break;
							else if (((bu1->Text == "X") || (bu1->Text == "O")) && ((bu2->Text == "X") || (bu2->Text == "O")) && ((bu3->Text == "X") || (bu3->Text == "O"))
								&& ((bu4->Text == "X") || (bu4->Text == "O")) && ((bu5->Text == "X") || (bu5->Text == "O")) && ((bu6->Text == "X") || (bu6->Text == "O"))
								&& ((bu7->Text == "X") || (bu7->Text == "O")) && ((bu8->Text != First_player) || (bu8->Text == First_player)) && ((bu9->Text == "X") || (bu9->Text == "O")))
								break;
							else if (((bu1->Text == "X") || (bu1->Text == "O")) && ((bu2->Text == "X") || (bu2->Text == "O")) && ((bu3->Text == "X") || (bu3->Text == "O"))
								&& ((bu4->Text == "X") || (bu4->Text == "O")) && ((bu5->Text == "X") || (bu5->Text == "O")) && ((bu6->Text == "X") || (bu6->Text == "O"))
								&& ((bu7->Text == "X") || (bu7->Text == "O")) && ((bu8->Text == "X") || (bu8->Text == "O")) && ((bu9->Text != First_player) || (bu9->Text == First_player)))
								break;
							else
								continue;
						}
						}	
					}
		    return number_button;
	  }
	  int ss;
				   public:void Second_Player()
				   {
							       if (chose_boutton() == 1 ) bu1->Text = Second_player;
								   else if (chose_boutton() == 2) bu2->Text = Second_player;
								   else if (chose_boutton() == 3) bu3->Text = Second_player;
								   else if (chose_boutton() == 4) bu4->Text = Second_player;
								   else if (chose_boutton() == 5) bu5->Text = Second_player;
								   else if (chose_boutton() == 6) bu6->Text = Second_player;
								   else if (chose_boutton() == 7) bu7->Text = Second_player;
								   else if (chose_boutton() == 8) bu8->Text = Second_player;
								   else if (chose_boutton() == 9) bu9->Text = Second_player;
				   }

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	
	private: System::Void bu1_Click_1(System::Object^  sender, System::EventArgs^  e) {
				 start_play(bu1);
	}
private: System::Void bu7_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 start_play(bu7);
	}
private: System::Void bu8_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 start_play(bu8);
	}
private: System::Void bu6_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 start_play(bu6);
	}
private: System::Void bu4_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 start_play(bu4);
	}
private: System::Void bu5_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 start_play(bu5);
	}
private: System::Void bu9_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 start_play(bu9);
	}
private: System::Void bu3_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 start_play(bu3);
	}
private: System::Void bu2_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 start_play(bu2);
	}

	public: String^ win = "\0";
	public: String^ winer()
	{
				if ((bu1->Text == "X") && (bu2->Text == "X") && (bu3->Text == "X"))
				{
					win = font_color(bu1, bu2, bu3);
				}
				else if ((bu4->Text == "X") && (bu5->Text == "X") && (bu6->Text == "X"))
				{
					win = font_color(bu4, bu5, bu6);
				}
				else if ((bu7->Text == "X") && (bu8->Text == "X") && (bu9->Text == "X"))
				{
					win = font_color(bu7, bu8, bu9);
				}
				else if ((bu1->Text == "X") && (bu4->Text == "X") && (bu7->Text == "X"))
				{
					win = font_color(bu1, bu4, bu7);
				}
				else if ((bu2->Text == "X") && (bu5->Text == "X") && (bu8->Text == "X"))
				{
					win = font_color(bu2, bu5, bu8);
				}
				else if ((bu3->Text == "X") && (bu6->Text == "X") && (bu9->Text == "X"))
				{
					win = font_color(bu3, bu6, bu9);
				}
				else if ((bu1->Text == "X") && (bu5->Text == "X") && (bu9->Text == "X"))
				{
					win = font_color(bu1, bu5, bu9);
				}
				else if ((bu3->Text == "X") && (bu5->Text == "X") && (bu7->Text == "X"))
				{
					win = font_color(bu3, bu5, bu7);
				}
				if ((bu1->Text == "O") && (bu2->Text == "O") && (bu3->Text == "O"))
				{
					win = font_color(bu1, bu2, bu3);
				}
				else if ((bu4->Text == "O") && (bu5->Text == "O") && (bu6->Text == "O"))
				{
					win = font_color(bu4, bu5, bu6);
				}
				else if ((bu7->Text == "O") && (bu8->Text == "O") && (bu9->Text == "O"))
				{
					win = font_color(bu7, bu8, bu9);
				}
				else if ((bu1->Text == "O") && (bu4->Text == "O") && (bu7->Text == "O"))
				{
					win = font_color(bu1, bu4, bu7);
				}
				else if ((bu2->Text == "O") && (bu5->Text == "O") && (bu8->Text == "O"))
				{
					win = font_color(bu2, bu5, bu8);
				}
				else if ((bu3->Text == "O") && (bu6->Text == "O") && (bu9->Text == "O"))
				{
					win = font_color(bu3, bu6, bu9);
				}
				else if ((bu1->Text == "O") && (bu5->Text == "O") && (bu9->Text == "O"))
				{
					win = font_color(bu1, bu5, bu9);
				}
				else if ((bu3->Text == "O") && (bu5->Text == "O") && (bu7->Text == "O"))
				{
					win = font_color(bu3, bu5, bu7);
				}
				if (((bu1->Text == "X") || (bu1->Text == "O")) && ((bu2->Text == "X") || (bu2->Text == "O")) && ((bu3->Text == "X") || (bu3->Text == "O"))
					&& ((bu4->Text == "X") || (bu4->Text == "O")) && ((bu5->Text == "X") || (bu5->Text == "O")) && ((bu6->Text == "X") || (bu6->Text == "O"))
					&& ((bu7->Text == "X") || (bu7->Text == "O")) && ((bu8->Text == "X") || (bu8->Text == "O")) && ((bu9->Text == "X") || (bu9->Text == "O")))
					win = " no winer ";
				return win;
	}
	public:
		int x = 0, o = 0;
		String^ result_x()
		{
			if (winer() == " excellent   ^-^ "&&First_player=="X"||
				winer() == " game over   -_- "&&First_player=="O")
			{
				x = x + 1;
			}
			return  x.ToString();
		}
		String^ result_o()
		{
			if (winer() == " excellent   ^-^ "&&First_player == "O"||
				winer() == " game over   -_- "&&First_player == "X")
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
		
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
			 void start_play(Button^ bu)
			 {
				 if (bu->Text != "X" && bu->Text != "O")
				 {
					 bu->Text = First_player;
					 if (winer() == "\0")
						 Second_Player();
				 }
				 if (winer() != "\0")
				 {
					 MessageBox::Show(winer());
					 this->Hide();
					 MyForm2^ fom2 = gcnew MyForm2(obj, this, result_x(), result_o());
					 fom2->ShowDialog();
					 new_play();

				 }
			 }
			 String^ font_color(Button^b1,Button^ b2,Button^ b3)
			 {
				 b1->ForeColor = System::Drawing::Color::Red;
				 b2->ForeColor = System::Drawing::Color::Red;
				 b3->ForeColor = System::Drawing::Color::Red;
				 if (b1->Text == "X"&&b2->Text == "X"&&b3->Text == "X"&&First_player == "X" ||
					 b1->Text == "O"&&b2->Text == "O"&&b3->Text == "O"&&First_player == "O")
					 return " excellent   ^-^ ";
				 else
					 return " game over   -_- ";
			 }
};
}
