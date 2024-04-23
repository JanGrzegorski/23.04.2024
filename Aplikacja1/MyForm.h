#pragma once

namespace Aplikacja1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ napis;
	protected:

	private: System::Windows::Forms::Button^ napis2;
	private: System::Windows::Forms::Button^ napis3;
	private: System::Windows::Forms::Label^ wynik;
	private: System::Windows::Forms::Button^ button1;

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->napis = (gcnew System::Windows::Forms::Label());
			this->napis2 = (gcnew System::Windows::Forms::Button());
			this->napis3 = (gcnew System::Windows::Forms::Button());
			this->wynik = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// napis
			// 
			this->napis->AutoSize = true;
			this->napis->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->napis->Location = System::Drawing::Point(303, 9);
			this->napis->Name = L"napis";
			this->napis->Size = System::Drawing::Size(126, 13);
			this->napis->TabIndex = 0;
			this->napis->Text = L"PZS nr1 w Pszczynie";
			// 
			// napis2
			// 
			this->napis2->BackColor = System::Drawing::SystemColors::Info;
			this->napis2->Location = System::Drawing::Point(306, 91);
			this->napis2->Name = L"napis2";
			this->napis2->Size = System::Drawing::Size(101, 103);
			this->napis2->TabIndex = 2;
			this->napis2->Text = L"Napisdwa Chopie";
			this->napis2->UseVisualStyleBackColor = false;
			this->napis2->Click += gcnew System::EventHandler(this, &MyForm::napis2_Click);
			// 
			// napis3
			// 
			this->napis3->BackColor = System::Drawing::Color::Silver;
			this->napis3->Location = System::Drawing::Point(512, 91);
			this->napis3->Name = L"napis3";
			this->napis3->Size = System::Drawing::Size(101, 103);
			this->napis3->TabIndex = 3;
			this->napis3->Text = L"Napisczi Chopie";
			this->napis3->UseVisualStyleBackColor = false;
			this->napis3->Click += gcnew System::EventHandler(this, &MyForm::napis3_Click);
			// 
			// wynik
			// 
			this->wynik->AutoSize = true;
			this->wynik->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->wynik->Font = (gcnew System::Drawing::Font(L"MV Boli", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->wynik->Location = System::Drawing::Point(124, 259);
			this->wynik->Name = L"wynik";
			this->wynik->Size = System::Drawing::Size(471, 39);
			this->wynik->TabIndex = 4;
			this->wynik->Text = L"TUTAJ NAPISY BEDOM CHOPIE";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Info;
			this->button1->Location = System::Drawing::Point(120, 91);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 103);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Napisjeden Chopie";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(759, 589);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->wynik);
			this->Controls->Add(this->napis3);
			this->Controls->Add(this->napis2);
			this->Controls->Add(this->napis);
			this->Name = L"MyForm";
			this->Text = L" ";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		wynik->Text = "PZS nr 1: Zawsze i wszendzie...";
	}
	
private: System::Void napis2_Click(System::Object^ sender, System::EventArgs^ e) {
	wynik->Text = "Stra¿ piek³a ... ";
}
private: System::Void napis3_Click(System::Object^ sender, System::EventArgs^ e) {
	wynik->Text = "PZS nr 1:";
}
private: System::Void napis1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	wynik->Text = "PZS nr 1 dada dad ad:";
}
};
}
