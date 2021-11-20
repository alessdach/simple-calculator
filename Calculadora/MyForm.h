#pragma once
#include "math.h"
namespace Calculadora {

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
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
		double primernumero,segundonumero,resultado;
		char operacion;
		bool punto = false;


	private: System::Windows::Forms::Button^  btn1;
	private: System::Windows::Forms::Button^  btn7;
	private: System::Windows::Forms::Button^  btn8;
	private: System::Windows::Forms::Button^  btn9;
	private: System::Windows::Forms::Button^  btn0;
	private: System::Windows::Forms::Button^  btn6;
	private: System::Windows::Forms::Button^  btn5;
	private: System::Windows::Forms::Button^  btn4;
	private: System::Windows::Forms::Button^  btn3;
	private: System::Windows::Forms::Button^  btn2;
	private: System::Windows::Forms::TextBox^  txtnum;
	private: System::Windows::Forms::Button^  btnpunto;
	private: System::Windows::Forms::Button^  btnmult;
	private: System::Windows::Forms::Button^  btnresta;
	private: System::Windows::Forms::Button^  btnsuma;
	private: System::Windows::Forms::Button^  btneliminar;
	private: System::Windows::Forms::Button^  btndiv;
	private: System::Windows::Forms::Button^  btnpotenc;
	private: System::Windows::Forms::Button^  btnigual;
	private: System::Windows::Forms::Button^  btnraiz;
	private: System::Windows::Forms::Label^  label1;
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
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->txtnum = (gcnew System::Windows::Forms::TextBox());
			this->btnpunto = (gcnew System::Windows::Forms::Button());
			this->btnmult = (gcnew System::Windows::Forms::Button());
			this->btnresta = (gcnew System::Windows::Forms::Button());
			this->btnsuma = (gcnew System::Windows::Forms::Button());
			this->btneliminar = (gcnew System::Windows::Forms::Button());
			this->btndiv = (gcnew System::Windows::Forms::Button());
			this->btnpotenc = (gcnew System::Windows::Forms::Button());
			this->btnigual = (gcnew System::Windows::Forms::Button());
			this->btnraiz = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btn1
			// 
			this->btn1->Location = System::Drawing::Point(12, 185);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(52, 23);
			this->btn1->TabIndex = 0;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &MyForm::btn1_Click);
			// 
			// btn7
			// 
			this->btn7->Location = System::Drawing::Point(12, 127);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(52, 23);
			this->btn7->TabIndex = 1;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = true;
			this->btn7->Click += gcnew System::EventHandler(this, &MyForm::btn7_Click);
			// 
			// btn8
			// 
			this->btn8->Location = System::Drawing::Point(70, 127);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(52, 23);
			this->btn8->TabIndex = 2;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = true;
			this->btn8->Click += gcnew System::EventHandler(this, &MyForm::btn8_Click);
			// 
			// btn9
			// 
			this->btn9->Location = System::Drawing::Point(128, 127);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(52, 23);
			this->btn9->TabIndex = 3;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = true;
			this->btn9->Click += gcnew System::EventHandler(this, &MyForm::btn9_Click);
			// 
			// btn0
			// 
			this->btn0->Location = System::Drawing::Point(70, 214);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(52, 23);
			this->btn0->TabIndex = 4;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = true;
			this->btn0->Click += gcnew System::EventHandler(this, &MyForm::btn0_Click);
			// 
			// btn6
			// 
			this->btn6->Location = System::Drawing::Point(128, 156);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(52, 23);
			this->btn6->TabIndex = 5;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = true;
			this->btn6->Click += gcnew System::EventHandler(this, &MyForm::btn6_Click);
			// 
			// btn5
			// 
			this->btn5->Location = System::Drawing::Point(70, 156);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(52, 23);
			this->btn5->TabIndex = 6;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = true;
			this->btn5->Click += gcnew System::EventHandler(this, &MyForm::btn5_Click);
			// 
			// btn4
			// 
			this->btn4->Location = System::Drawing::Point(12, 156);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(52, 23);
			this->btn4->TabIndex = 7;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = true;
			this->btn4->Click += gcnew System::EventHandler(this, &MyForm::btn4_Click);
			// 
			// btn3
			// 
			this->btn3->Location = System::Drawing::Point(128, 185);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(52, 23);
			this->btn3->TabIndex = 8;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = true;
			this->btn3->Click += gcnew System::EventHandler(this, &MyForm::btn3_Click);
			// 
			// btn2
			// 
			this->btn2->Location = System::Drawing::Point(70, 185);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(52, 23);
			this->btn2->TabIndex = 9;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &MyForm::btn2_Click);
			// 
			// txtnum
			// 
			this->txtnum->Enabled = false;
			this->txtnum->Location = System::Drawing::Point(12, 91);
			this->txtnum->Name = L"txtnum";
			this->txtnum->Size = System::Drawing::Size(230, 20);
			this->txtnum->TabIndex = 10;
			// 
			// btnpunto
			// 
			this->btnpunto->Location = System::Drawing::Point(128, 214);
			this->btnpunto->Name = L"btnpunto";
			this->btnpunto->Size = System::Drawing::Size(52, 23);
			this->btnpunto->TabIndex = 11;
			this->btnpunto->Text = L".";
			this->btnpunto->UseVisualStyleBackColor = true;
			this->btnpunto->Click += gcnew System::EventHandler(this, &MyForm::btnpunto_Click);
			// 
			// btnmult
			// 
			this->btnmult->Location = System::Drawing::Point(190, 185);
			this->btnmult->Name = L"btnmult";
			this->btnmult->Size = System::Drawing::Size(52, 23);
			this->btnmult->TabIndex = 12;
			this->btnmult->Text = L"x";
			this->btnmult->UseVisualStyleBackColor = true;
			this->btnmult->Click += gcnew System::EventHandler(this, &MyForm::btnmult_Click);
			// 
			// btnresta
			// 
			this->btnresta->Location = System::Drawing::Point(190, 156);
			this->btnresta->Name = L"btnresta";
			this->btnresta->Size = System::Drawing::Size(52, 23);
			this->btnresta->TabIndex = 13;
			this->btnresta->Text = L"-";
			this->btnresta->UseVisualStyleBackColor = true;
			this->btnresta->Click += gcnew System::EventHandler(this, &MyForm::btnresta_Click);
			// 
			// btnsuma
			// 
			this->btnsuma->Location = System::Drawing::Point(190, 127);
			this->btnsuma->Name = L"btnsuma";
			this->btnsuma->Size = System::Drawing::Size(52, 23);
			this->btnsuma->TabIndex = 14;
			this->btnsuma->Text = L"+";
			this->btnsuma->UseVisualStyleBackColor = true;
			this->btnsuma->Click += gcnew System::EventHandler(this, &MyForm::btnsuma_Click);
			// 
			// btneliminar
			// 
			this->btneliminar->Location = System::Drawing::Point(190, 243);
			this->btneliminar->Name = L"btneliminar";
			this->btneliminar->Size = System::Drawing::Size(52, 23);
			this->btneliminar->TabIndex = 15;
			this->btneliminar->Text = L"Clear";
			this->btneliminar->UseVisualStyleBackColor = true;
			this->btneliminar->Click += gcnew System::EventHandler(this, &MyForm::btneliminar_Click);
			// 
			// btndiv
			// 
			this->btndiv->Location = System::Drawing::Point(190, 214);
			this->btndiv->Name = L"btndiv";
			this->btndiv->Size = System::Drawing::Size(52, 23);
			this->btndiv->TabIndex = 16;
			this->btndiv->Text = L"/";
			this->btndiv->UseVisualStyleBackColor = true;
			this->btndiv->Click += gcnew System::EventHandler(this, &MyForm::btndiv_Click);
			// 
			// btnpotenc
			// 
			this->btnpotenc->Location = System::Drawing::Point(12, 243);
			this->btnpotenc->Name = L"btnpotenc";
			this->btnpotenc->Size = System::Drawing::Size(78, 23);
			this->btnpotenc->TabIndex = 17;
			this->btnpotenc->Text = L"Potencia";
			this->btnpotenc->UseVisualStyleBackColor = true;
			this->btnpotenc->Click += gcnew System::EventHandler(this, &MyForm::btnpotenc_Click);
			// 
			// btnigual
			// 
			this->btnigual->Location = System::Drawing::Point(12, 214);
			this->btnigual->Name = L"btnigual";
			this->btnigual->Size = System::Drawing::Size(52, 23);
			this->btnigual->TabIndex = 18;
			this->btnigual->Text = L"=";
			this->btnigual->UseVisualStyleBackColor = true;
			this->btnigual->Click += gcnew System::EventHandler(this, &MyForm::btnigual_Click);
			// 
			// btnraiz
			// 
			this->btnraiz->Location = System::Drawing::Point(96, 243);
			this->btnraiz->Name = L"btnraiz";
			this->btnraiz->Size = System::Drawing::Size(84, 23);
			this->btnraiz->TabIndex = 19;
			this->btnraiz->Text = L"Raiz";
			this->btnraiz->UseVisualStyleBackColor = true;
			this->btnraiz->Click += gcnew System::EventHandler(this, &MyForm::btnraiz_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(27, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(200, 39);
			this->label1->TabIndex = 20;
			this->label1->Text = L"Calculadora";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(256, 274);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnraiz);
			this->Controls->Add(this->btnigual);
			this->Controls->Add(this->btnpotenc);
			this->Controls->Add(this->btndiv);
			this->Controls->Add(this->btneliminar);
			this->Controls->Add(this->btnsuma);
			this->Controls->Add(this->btnresta);
			this->Controls->Add(this->btnmult);
			this->Controls->Add(this->btnpunto);
			this->Controls->Add(this->txtnum);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->btn1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn1_Click(System::Object^  sender, System::EventArgs^  e) {
		txtnum->Text = txtnum->Text + "1";
	}

private: System::Void btn2_Click(System::Object^  sender, System::EventArgs^  e) {
	txtnum->Text = txtnum->Text + "2";
}
private: System::Void btn3_Click(System::Object^  sender, System::EventArgs^  e) {
	txtnum->Text = txtnum->Text + "3";
}
private: System::Void btn4_Click(System::Object^  sender, System::EventArgs^  e) {
	txtnum->Text = txtnum->Text + "4";
}
private: System::Void btn5_Click(System::Object^  sender, System::EventArgs^  e) {
	txtnum->Text = txtnum->Text + "5";
}
private: System::Void btn6_Click(System::Object^  sender, System::EventArgs^  e) {
	txtnum->Text = txtnum->Text + "6";
}
private: System::Void btn7_Click(System::Object^  sender, System::EventArgs^  e) {
	txtnum->Text = txtnum->Text + "7";
}
private: System::Void btn8_Click(System::Object^  sender, System::EventArgs^  e) {
	txtnum->Text = txtnum->Text + "8";
}
private: System::Void btn9_Click(System::Object^  sender, System::EventArgs^  e) {
	txtnum->Text = txtnum->Text + "9";
}
private: System::Void btn0_Click(System::Object^  sender, System::EventArgs^  e) {
	txtnum->Text = txtnum->Text + "0";
}
private: System::Void btnsuma_Click(System::Object^  sender, System::EventArgs^  e) {
	punto = false;
	operacion = '+';
	primernumero=Convert::ToDouble(txtnum->Text);
	txtnum->Clear();
}
private: System::Void btnresta_Click(System::Object^  sender, System::EventArgs^  e) {
	punto = false;
	operacion = '-';
	primernumero = Convert::ToDouble(txtnum->Text);
	txtnum->Clear();
}
private: System::Void btnmult_Click(System::Object^  sender, System::EventArgs^  e) {
	punto = false;
	operacion = 'x';
	primernumero = Convert::ToDouble(txtnum->Text);
	txtnum->Clear();
}
private: System::Void btndiv_Click(System::Object^  sender, System::EventArgs^  e) {
	punto = false;
	operacion = '/';
	primernumero = Convert::ToDouble(txtnum->Text);
	txtnum->Clear();
}
private: System::Void btnraiz_Click(System::Object^  sender, System::EventArgs^  e) {
	punto = false;
	primernumero = Convert::ToDouble(txtnum->Text);
	resultado = sqrt(primernumero);
	txtnum->Text = Convert::ToString(resultado);
}
private: System::Void btnpotenc_Click(System::Object^  sender, System::EventArgs^  e) {
	punto = false;
	operacion = 'p';
	primernumero = Convert::ToDouble(txtnum->Text);
	txtnum->Clear();
}
private: System::Void btnigual_Click(System::Object^  sender, System::EventArgs^  e) {
	segundonumero = Convert::ToDouble(txtnum->Text);
	switch (operacion)
	{
	case '+':
		resultado = primernumero + segundonumero;
		txtnum->Text = Convert::ToString(resultado);
		break;
		txtnum->Clear();
		punto = false;
	case '-':
		resultado = primernumero - segundonumero;
		txtnum->Text = Convert::ToString(resultado);
		break;
		txtnum->Clear();
		punto = false;
	case 'x':
		resultado = primernumero * segundonumero;
		txtnum->Text = Convert::ToString(resultado);
		break;
		txtnum->Clear();
		punto = false;
	case '/':
		if(primernumero==0 && segundonumero==0)
		{
			
			txtnum->Text = "No existe";
		}
		else {
			resultado = primernumero / segundonumero;
			txtnum->Text = Convert::ToString(resultado);
		}		
		break;
		txtnum->Clear();
		punto = false;
	case 'p':
		resultado = pow(primernumero,segundonumero);
		txtnum->Text = Convert::ToString(resultado);
		break;
		txtnum->Clear();
		punto = false;
	}
}
private: System::Void btnpunto_Click(System::Object^  sender, System::EventArgs^  e) {
	if (punto == false) {
		txtnum->Text = txtnum->Text + ".";
	}
	else {
		MessageBox::Show("Solo puede ir un punto");
	}
	punto = true;
}



private: System::Void btneliminar_Click(System::Object^  sender, System::EventArgs^  e) {
	txtnum->Clear();
}


};
}
