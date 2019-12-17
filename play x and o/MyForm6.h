#pragma once
# include "MyForm4.h"
namespace playxando {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm6
	/// </summary>
	public ref class MyForm6 : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		MyForm6(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		MyForm6(Form^ ob)
		{
			obj = ob;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm6()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  bu1;
	private: System::Windows::Forms::Button^  bu2;
	protected:

	protected:

	private: System::Windows::Forms::Label^  label1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm6::typeid));
			this->bu1 = (gcnew System::Windows::Forms::Button());
			this->bu2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// bu1
			// 
			this->bu1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bu1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bu1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bu1->Font = (gcnew System::Drawing::Font(L"Cooper Black", 72));
			this->bu1->Location = System::Drawing::Point(104, 246);
			this->bu1->Name = L"bu1";
			this->bu1->Size = System::Drawing::Size(148, 137);
			this->bu1->TabIndex = 0;
			this->bu1->Text = L"X";
			this->bu1->UseVisualStyleBackColor = false;
			this->bu1->Click += gcnew System::EventHandler(this, &MyForm6::bu1_Click);
			// 
			// bu2
			// 
			this->bu2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bu2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bu2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bu2->Font = (gcnew System::Drawing::Font(L"Cooper Black", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bu2->Location = System::Drawing::Point(340, 246);
			this->bu2->Name = L"bu2";
			this->bu2->Size = System::Drawing::Size(148, 137);
			this->bu2->TabIndex = 1;
			this->bu2->Text = L"O";
			this->bu2->UseVisualStyleBackColor = false;
			this->bu2->Click += gcnew System::EventHandler(this, &MyForm6::bu2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(162, 141);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(239, 42);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Choose from";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm6::label1_Click);
			// 
			// MyForm6
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Desktop;
			this->ClientSize = System::Drawing::Size(592, 536);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->bu2);
			this->Controls->Add(this->bu1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm6";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"play X O";
			this->Load += gcnew System::EventHandler(this, &MyForm6::MyForm6_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void bu1_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Hide();
				 MyForm4^ form4 = gcnew MyForm4(obj,"X","O");
				 form4->Show();
	}
private: System::Void MyForm6_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void bu2_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			 MyForm4^ form4 = gcnew MyForm4(obj, "O", "X");
			 form4->Show();
}
};
}
