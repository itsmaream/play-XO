#pragma once
#include "MyForm.h"
#include "MyForm5.h"
#include "MyForm6.h"
namespace playxando {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::Button^  button4;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			resources->ApplyResources(this->button1, L"button1");
			this->button1->BackColor = System::Drawing::Color::DarkMagenta;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Name = L"button1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// button2
			// 
			resources->ApplyResources(this->button2, L"button2");
			this->button2->BackColor = System::Drawing::Color::DarkMagenta;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button2->Name = L"button2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// button4
			// 
			resources->ApplyResources(this->button4, L"button4");
			this->button4->BackColor = System::Drawing::Color::DarkMagenta;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button4->Name = L"button4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm1::button4_Click);
			// 
			// MyForm1
			// 
			resources->ApplyResources(this, L"$this");
			this->AccessibleRole = System::Windows::Forms::AccessibleRole::OutlineButton;
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DeepPink;
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"MyForm1";
			this->TransparencyKey = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Hide();
				 MyForm5^ fom5 = gcnew MyForm5(this,3);
				 fom5->ShowDialog();
	}
	private: System::Void MyForm1_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void w1_Enter(System::Object^  sender, System::EventArgs^  e) {

	}
private: System::Void fileSystemWatcher1_Changed(System::Object^  sender, System::IO::FileSystemEventArgs^  e) {
}
private: System::Void tabPage1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			  this->Hide();
			 MyForm5^ fom5 = gcnew MyForm5(this,4);
			 fom5->ShowDialog();
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			 MyForm6^ fom6 = gcnew MyForm6(this);
			 fom6->ShowDialog();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
