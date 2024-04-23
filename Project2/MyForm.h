#pragma once
#include <math.h>
namespace Project2 {

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
	private: System::Windows::Forms::TextBox^ liczba1;
	private: System::Windows::Forms::TextBox^ liczba2;
	protected:

	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ plus;
	private: System::Windows::Forms::Button^ dzielenie;


	private: System::Windows::Forms::Button^ minus;
	private: System::Windows::Forms::Button^ mnozenie;


	private: System::Windows::Forms::Label^ wynik;
	private: System::Windows::Forms::Button^ potynga;

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
			this->liczba1 = (gcnew System::Windows::Forms::TextBox());
			this->liczba2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->plus = (gcnew System::Windows::Forms::Button());
			this->dzielenie = (gcnew System::Windows::Forms::Button());
			this->minus = (gcnew System::Windows::Forms::Button());
			this->mnozenie = (gcnew System::Windows::Forms::Button());
			this->wynik = (gcnew System::Windows::Forms::Label());
			this->potynga = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// liczba1
			// 
			this->liczba1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->liczba1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->liczba1->Location = System::Drawing::Point(212, 35);
			this->liczba1->Name = L"liczba1";
			this->liczba1->Size = System::Drawing::Size(142, 29);
			this->liczba1->TabIndex = 0;
			this->liczba1->TextChanged += gcnew System::EventHandler(this, &MyForm::liczba1_TextChanged);
			// 
			// liczba2
			// 
			this->liczba2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->liczba2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->liczba2->Location = System::Drawing::Point(486, 32);
			this->liczba2->Name = L"liczba2";
			this->liczba2->Size = System::Drawing::Size(178, 29);
			this->liczba2->TabIndex = 1;
			this->liczba2->TextChanged += gcnew System::EventHandler(this, &MyForm::liczba2_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(129, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 24);
			this->label1->TabIndex = 2;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(406, 35);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(66, 24);
			this->label2->TabIndex = 3;
			this->label2->Text = L"label2";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// plus
			// 
			this->plus->BackColor = System::Drawing::Color::Red;
			this->plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->plus->ForeColor = System::Drawing::Color::Black;
			this->plus->Location = System::Drawing::Point(12, 149);
			this->plus->Name = L"plus";
			this->plus->Size = System::Drawing::Size(136, 106);
			this->plus->TabIndex = 4;
			this->plus->Text = L"+";
			this->plus->UseVisualStyleBackColor = false;
			this->plus->Click += gcnew System::EventHandler(this, &MyForm::plus_Click);
			// 
			// dzielenie
			// 
			this->dzielenie->BackColor = System::Drawing::Color::Yellow;
			this->dzielenie->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->dzielenie->ForeColor = System::Drawing::Color::Black;
			this->dzielenie->Location = System::Drawing::Point(510, 149);
			this->dzielenie->Name = L"dzielenie";
			this->dzielenie->Size = System::Drawing::Size(136, 106);
			this->dzielenie->TabIndex = 5;
			this->dzielenie->Text = L"/";
			this->dzielenie->UseVisualStyleBackColor = false;
			this->dzielenie->Click += gcnew System::EventHandler(this, &MyForm::dzielenie_Click);
			// 
			// minus
			// 
			this->minus->BackColor = System::Drawing::Color::Green;
			this->minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->minus->ForeColor = System::Drawing::Color::Black;
			this->minus->Location = System::Drawing::Point(176, 149);
			this->minus->Name = L"minus";
			this->minus->Size = System::Drawing::Size(136, 106);
			this->minus->TabIndex = 6;
			this->minus->Text = L"-";
			this->minus->UseVisualStyleBackColor = false;
			this->minus->Click += gcnew System::EventHandler(this, &MyForm::minus_Click);
			// 
			// mnozenie
			// 
			this->mnozenie->BackColor = System::Drawing::Color::Cyan;
			this->mnozenie->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->mnozenie->ForeColor = System::Drawing::Color::Black;
			this->mnozenie->Location = System::Drawing::Point(336, 149);
			this->mnozenie->Name = L"mnozenie";
			this->mnozenie->Size = System::Drawing::Size(136, 106);
			this->mnozenie->TabIndex = 7;
			this->mnozenie->Text = L"*";
			this->mnozenie->UseVisualStyleBackColor = false;
			this->mnozenie->Click += gcnew System::EventHandler(this, &MyForm::mnozenie_Click);
			// 
			// wynik
			// 
			this->wynik->AutoSize = true;
			this->wynik->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->wynik->Location = System::Drawing::Point(224, 379);
			this->wynik->Name = L"wynik";
			this->wynik->Size = System::Drawing::Size(171, 23);
			this->wynik->TabIndex = 8;
			this->wynik->Text = L"Tu Bydzie wynik chopie";
			// 
			// potynga
			// 
			this->potynga->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->potynga->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->potynga->ForeColor = System::Drawing::Color::Black;
			this->potynga->Location = System::Drawing::Point(259, 261);
			this->potynga->Name = L"potynga";
			this->potynga->Size = System::Drawing::Size(136, 106);
			this->potynga->TabIndex = 9;
			this->potynga->Text = L"^";
			this->potynga->UseVisualStyleBackColor = false;
			this->potynga->Click += gcnew System::EventHandler(this, &MyForm::potynga_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(676, 480);
			this->Controls->Add(this->potynga);
			this->Controls->Add(this->wynik);
			this->Controls->Add(this->mnozenie);
			this->Controls->Add(this->minus);
			this->Controls->Add(this->dzielenie);
			this->Controls->Add(this->plus);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->liczba2);
			this->Controls->Add(this->liczba1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void liczba1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		}
private: System::Void liczba2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void plus_Click(System::Object^ sender, System::EventArgs^ e) {
	double l1 = Convert::ToDouble(liczba1->Text);
	double l2 = Convert::ToDouble(liczba2->Text);
	double w = l1 + l2;
	wynik->Text = Convert::ToString(w);
}
private: System::Void minus_Click(System::Object^ sender, System::EventArgs^ e) {
	double l1 = Convert::ToDouble(liczba1->Text);
	double l2 = Convert::ToDouble(liczba2->Text);
	double w = l1 - l2;
	wynik->Text = Convert::ToString(w);
}
private: System::Void mnozenie_Click(System::Object^ sender, System::EventArgs^ e) {
	double l1 = Convert::ToDouble(liczba1->Text);
	double l2 = Convert::ToDouble(liczba2->Text);
	double w = l1 * l2;
	wynik->Text = Convert::ToString(w);
}
private: System::Void dzielenie_Click(System::Object^ sender, System::EventArgs^ e) {
	double l1 = Convert::ToDouble(liczba1->Text);
	double l2 = Convert::ToDouble(liczba2->Text);

	if (l2 != 0)
	{
		double w = l1 / l2;
		wynik->Text = Convert::ToString("Dzielenie= " + w);
	}
	else {
		wynik->Text = "Nie dziel przez zero";
	}

}
private: System::Void potynga_Click(System::Object^ sender, System::EventArgs^ e) {
	double l1 = Convert::ToDouble(liczba1->Text);
	double l2 = Convert::ToDouble(liczba2->Text);
	double w = pow(l1,l2);
	wynik->Text = Convert::ToString(w);
}
};
}
