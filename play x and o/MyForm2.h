#pragma once
namespace playxando {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		Form^ obj2 = gcnew Form();
		Form^ obj = gcnew Form();
		String^ Rx;
        String^ Ro;
		String^ namex = "";
		String^ nameo = "";
	private: System::Windows::Forms::Button^  button3;
	public:
		MyForm2(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		MyForm2(Form^ obj2n,Form^ obj1, String^ Rx1, String^ Ro1)
		{
			obj = obj1;
			obj2 = obj2n;
			Rx = Rx1;
			Ro = Ro1;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		MyForm2(Form^ obj2n, Form^ obj1, String^ Rx1, String^ Ro1, String^ name1, String^ name2)
		{
			namex = name1;
			nameo = name2;
			obj = obj1;
			obj2 = obj2n;
			Rx = Rx1;
			Ro = Ro1;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		MyForm2(Form^ obj1)
		{
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  L1;
	private: System::Windows::Forms::Label^  L2;
	private: System::Windows::Forms::LinkLabel^  L3;
	private: System::Windows::Forms::LinkLabel^  L4;





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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->L1 = (gcnew System::Windows::Forms::Label());
			this->L2 = (gcnew System::Windows::Forms::Label());
			this->L3 = (gcnew System::Windows::Forms::LinkLabel());
			this->L4 = (gcnew System::Windows::Forms::LinkLabel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkViolet;
			this->button1->Font = (gcnew System::Drawing::Font(L"Traditional Arabic", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Location = System::Drawing::Point(168, 253);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(259, 69);
			this->button1->TabIndex = 0;
			this->button1->Text = L"play again";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DarkViolet;
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(483, 453);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(83, 46);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click);
			// 
			// L1
			// 
			this->L1->AutoSize = true;
			this->L1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->L1->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L1->ForeColor = System::Drawing::SystemColors::Control;
			this->L1->Location = System::Drawing::Point(427, 84);
			this->L1->Name = L"L1";
			this->L1->Size = System::Drawing::Size(25, 25);
			this->L1->TabIndex = 4;
			this->L1->Text = L"0";
			this->L1->Click += gcnew System::EventHandler(this, &MyForm2::L1_Click);
			// 
			// L2
			// 
			this->L2->AutoSize = true;
			this->L2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->L2->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L2->ForeColor = System::Drawing::SystemColors::Control;
			this->L2->Location = System::Drawing::Point(427, 163);
			this->L2->Name = L"L2";
			this->L2->Size = System::Drawing::Size(25, 25);
			this->L2->TabIndex = 5;
			this->L2->Text = L"0";
			// 
			// L3
			// 
			this->L3->AutoSize = true;
			this->L3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L3->Font = (gcnew System::Drawing::Font(L"Century", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L3->LinkColor = System::Drawing::Color::White;
			this->L3->Location = System::Drawing::Point(141, 82);
			this->L3->Name = L"L3";
			this->L3->Size = System::Drawing::Size(26, 27);
			this->L3->TabIndex = 6;
			this->L3->TabStop = true;
			this->L3->Text = L"x";
			this->L3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// L4
			// 
			this->L4->AutoSize = true;
			this->L4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L4->Font = (gcnew System::Drawing::Font(L"Cambria", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->L4->LinkColor = System::Drawing::Color::White;
			this->L4->Location = System::Drawing::Point(141, 158);
			this->L4->Name = L"L4";
			this->L4->Size = System::Drawing::Size(26, 27);
			this->L4->TabIndex = 7;
			this->L4->TabStop = true;
			this->L4->Text = L"o";
			this->L4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::DarkViolet;
			this->button3->Font = (gcnew System::Drawing::Font(L"Traditional Arabic", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button3->Location = System::Drawing::Point(168, 354);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(259, 69);
			this->button3->TabIndex = 8;
			this->button3->Text = L"new play";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm2::button3_Click);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DeepPink;
			this->ClientSize = System::Drawing::Size(604, 543);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->L4);
			this->Controls->Add(this->L3);
			this->Controls->Add(this->L2);
			this->Controls->Add(this->L1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm2";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Play X O";
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private:
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

				 this->Hide();
				 obj->Show();
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

				 Application::Exit();
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void MyForm2_Load(System::Object^  sender, System::EventArgs^  e) {
				 L1->Text = Rx;
				 L2->Text = Ro;
				 L3->Text = namex;
				 L4->Text = nameo;
				 if (namex == ""  )
				 {
					 L3->Text = "player X"; 
				 }
				 if (nameo == "")
				 {
					 L4->Text = "player O";
				 }
	}
	private: System::Void L1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Hide();
				 obj2->Show();
	}
	};
}
