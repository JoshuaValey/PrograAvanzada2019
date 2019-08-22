#pragma once

namespace Lab0JoshuaValey1014416 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtOperando1;
	private: System::Windows::Forms::TextBox^ textOperando2;
	private: System::Windows::Forms::Button^ btnSuma;




	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::LinkLabel^ lblResultado;

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtOperando1 = (gcnew System::Windows::Forms::TextBox());
			this->textOperando2 = (gcnew System::Windows::Forms::TextBox());
			this->btnSuma = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->lblResultado = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 52);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(63, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Operando 1";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::Label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(16, 85);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(63, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Operando 2";
			// 
			// txtOperando1
			// 
			this->txtOperando1->Location = System::Drawing::Point(97, 45);
			this->txtOperando1->Name = L"txtOperando1";
			this->txtOperando1->Size = System::Drawing::Size(156, 20);
			this->txtOperando1->TabIndex = 2;
			// 
			// textOperando2
			// 
			this->textOperando2->Location = System::Drawing::Point(97, 78);
			this->textOperando2->Name = L"textOperando2";
			this->textOperando2->Size = System::Drawing::Size(156, 20);
			this->textOperando2->TabIndex = 3;
			// 
			// btnSuma
			// 
			this->btnSuma->Location = System::Drawing::Point(97, 145);
			this->btnSuma->Name = L"btnSuma";
			this->btnSuma->Size = System::Drawing::Size(156, 23);
			this->btnSuma->TabIndex = 4;
			this->btnSuma->Text = L"Suma";
			this->btnSuma->UseVisualStyleBackColor = true;
			this->btnSuma->Click += gcnew System::EventHandler(this, &MyForm::Button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(97, 186);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(156, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Multiplicacion";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::Button2_Click);
			// 
			// lblResultado
			// 
			this->lblResultado->AutoSize = true;
			this->lblResultado->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblResultado->Location = System::Drawing::Point(47, 249);
			this->lblResultado->Name = L"lblResultado";
			this->lblResultado->Size = System::Drawing::Size(258, 25);
			this->lblResultado->TabIndex = 6;
			this->lblResultado->TabStop = true;
			this->lblResultado->Text = L"Resultado de operacion...";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(335, 322);
			this->Controls->Add(this->lblResultado);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->btnSuma);
			this->Controls->Add(this->textOperando2);
			this->Controls->Add(this->txtOperando1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {


	}


	int suma(int operador1, int operador2) {
		int resultado = 0;
		resultado = operador1 + operador2;
		return resultado;
	}

	int multiplicacion(int multiplicando, int multiplicador) {
		int resultado = 0;
		resultado = multiplicando * multiplicador;
		return resultado;
	}

	void evaluateHexadecimal(String cadena) {

	}

private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {



}
};
}
