#pragma once

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtResult;
	protected:

	private: System::Windows::Forms::Button^ btn6;

	private: System::Windows::Forms::Button^ btn3;
	private: System::Windows::Forms::Button^ btn9;


	private: System::Windows::Forms::Button^ btn8;

	private: System::Windows::Forms::Button^ btn5;

	private: System::Windows::Forms::Button^ btn2;

	private: System::Windows::Forms::Button^ btn1;
	private: System::Windows::Forms::Button^ btn4;
	private: System::Windows::Forms::Button^ btn7;
	private: System::Windows::Forms::Button^ btn0;
	private: System::Windows::Forms::Button^ btnResult;





	private: System::Windows::Forms::Button^ btnNone;

	private: System::Windows::Forms::Button^ btnDiv;

	private: System::Windows::Forms::Button^ btnMin;
	private: System::Windows::Forms::Button^ btnMult;


	private: System::Windows::Forms::Button^ btnSum;
	private: System::Windows::Forms::Button^ btnDouble;



	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->txtResult = (gcnew System::Windows::Forms::TextBox());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btnResult = (gcnew System::Windows::Forms::Button());
			this->btnNone = (gcnew System::Windows::Forms::Button());
			this->btnDiv = (gcnew System::Windows::Forms::Button());
			this->btnMin = (gcnew System::Windows::Forms::Button());
			this->btnMult = (gcnew System::Windows::Forms::Button());
			this->btnSum = (gcnew System::Windows::Forms::Button());
			this->btnDouble = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txtResult
			// 
			this->txtResult->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->txtResult->Location = System::Drawing::Point(10, 31);
			this->txtResult->Name = L"txtResult";
			this->txtResult->ReadOnly = true;
			this->txtResult->Size = System::Drawing::Size(350, 22);
			this->txtResult->TabIndex = 0;
			this->txtResult->TabStop = false;
			this->txtResult->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// btn6
			// 
			this->btn6->Location = System::Drawing::Point(130, 148);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(50, 50);
			this->btn6->TabIndex = 1;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = true;
			this->btn6->Click += gcnew System::EventHandler(this, &MyForm::btn6_Click);
			// 
			// btn3
			// 
			this->btn3->Location = System::Drawing::Point(130, 88);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(50, 50);
			this->btn3->TabIndex = 2;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = true;
			this->btn3->Click += gcnew System::EventHandler(this, &MyForm::btn3_Click);
			// 
			// btn9
			// 
			this->btn9->Location = System::Drawing::Point(130, 208);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(50, 50);
			this->btn9->TabIndex = 3;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = true;
			this->btn9->Click += gcnew System::EventHandler(this, &MyForm::btn9_Click);
			// 
			// btn8
			// 
			this->btn8->Location = System::Drawing::Point(70, 208);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(50, 50);
			this->btn8->TabIndex = 4;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = true;
			this->btn8->Click += gcnew System::EventHandler(this, &MyForm::btn8_Click);
			// 
			// btn5
			// 
			this->btn5->Location = System::Drawing::Point(70, 148);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(50, 50);
			this->btn5->TabIndex = 5;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = true;
			this->btn5->Click += gcnew System::EventHandler(this, &MyForm::btn5_Click);
			// 
			// btn2
			// 
			this->btn2->Location = System::Drawing::Point(70, 88);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(50, 50);
			this->btn2->TabIndex = 2;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &MyForm::btn2_Click);
			// 
			// btn1
			// 
			this->btn1->Location = System::Drawing::Point(10, 88);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(50, 50);
			this->btn1->TabIndex = 1;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &MyForm::btn1_Click);
			// 
			// btn4
			// 
			this->btn4->Location = System::Drawing::Point(10, 148);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(50, 50);
			this->btn4->TabIndex = 8;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = true;
			this->btn4->Click += gcnew System::EventHandler(this, &MyForm::btn4_Click);
			// 
			// btn7
			// 
			this->btn7->Location = System::Drawing::Point(10, 208);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(50, 50);
			this->btn7->TabIndex = 9;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = true;
			this->btn7->Click += gcnew System::EventHandler(this, &MyForm::btn7_Click);
			// 
			// btn0
			// 
			this->btn0->Location = System::Drawing::Point(190, 208);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(50, 50);
			this->btn0->TabIndex = 10;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = true;
			this->btn0->Click += gcnew System::EventHandler(this, &MyForm::btn0_Click);
			// 
			// btnResult
			// 
			this->btnResult->Location = System::Drawing::Point(306, 208);
			this->btnResult->Name = L"btnResult";
			this->btnResult->Size = System::Drawing::Size(54, 50);
			this->btnResult->TabIndex = 11;
			this->btnResult->Text = L"=";
			this->btnResult->UseVisualStyleBackColor = true;
			// 
			// btnNone
			// 
			this->btnNone->Location = System::Drawing::Point(306, 88);
			this->btnNone->Name = L"btnNone";
			this->btnNone->Size = System::Drawing::Size(54, 114);
			this->btnNone->TabIndex = 12;
			this->btnNone->Text = L"C";
			this->btnNone->UseVisualStyleBackColor = true;
			this->btnNone->Click += gcnew System::EventHandler(this, &MyForm::btnNone_Click);
			// 
			// btnDiv
			// 
			this->btnDiv->Location = System::Drawing::Point(250, 148);
			this->btnDiv->Name = L"btnDiv";
			this->btnDiv->Size = System::Drawing::Size(50, 50);
			this->btnDiv->TabIndex = 3;
			this->btnDiv->Text = L"/";
			this->btnDiv->UseVisualStyleBackColor = true;
			// 
			// btnMin
			// 
			this->btnMin->Location = System::Drawing::Point(250, 88);
			this->btnMin->Name = L"btnMin";
			this->btnMin->Size = System::Drawing::Size(50, 50);
			this->btnMin->TabIndex = 2;
			this->btnMin->Text = L"-";
			this->btnMin->UseVisualStyleBackColor = true;
			// 
			// btnMult
			// 
			this->btnMult->Location = System::Drawing::Point(190, 148);
			this->btnMult->Name = L"btnMult";
			this->btnMult->Size = System::Drawing::Size(50, 50);
			this->btnMult->TabIndex = 1;
			this->btnMult->Text = L"*";
			this->btnMult->UseVisualStyleBackColor = true;
			// 
			// btnSum
			// 
			this->btnSum->Location = System::Drawing::Point(190, 88);
			this->btnSum->Name = L"btnSum";
			this->btnSum->Size = System::Drawing::Size(50, 50);
			this->btnSum->TabIndex = 0;
			this->btnSum->Text = L"+";
			this->btnSum->UseVisualStyleBackColor = true;
			// 
			// btnDouble
			// 
			this->btnDouble->Location = System::Drawing::Point(250, 208);
			this->btnDouble->Name = L"btnDouble";
			this->btnDouble->Size = System::Drawing::Size(50, 50);
			this->btnDouble->TabIndex = 13;
			this->btnDouble->Text = L",";
			this->btnDouble->UseVisualStyleBackColor = true;
			this->btnDouble->Click += gcnew System::EventHandler(this, &MyForm::btnDouble_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(372, 292);
			this->Controls->Add(this->btnDouble);
			this->Controls->Add(this->btnSum);
			this->Controls->Add(this->btnMult);
			this->Controls->Add(this->btnMin);
			this->Controls->Add(this->btnDiv);
			this->Controls->Add(this->btnNone);
			this->Controls->Add(this->btnResult);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->txtResult);
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Calc";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void btn1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->txtResult->Text += L"1";
	}
	private: System::Void btn2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->txtResult->Text += L"2";
	}
	private: System::Void btn3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->txtResult->Text += L"3";
	}
	private: System::Void btn4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->txtResult->Text += L"4";
	}
	private: System::Void btn5_Click(System::Object^ sender, System::EventArgs^ e) {
		this->txtResult->Text += L"5";
	}
	private: System::Void btn6_Click(System::Object^ sender, System::EventArgs^ e) {
		this->txtResult->Text += L"6";
	}
	private: System::Void btn7_Click(System::Object^ sender, System::EventArgs^ e) {
		this->txtResult->Text += L"7";
	}
	private: System::Void btn8_Click(System::Object^ sender, System::EventArgs^ e) {
		this->txtResult->Text += L"8";
	}
	private: System::Void btn9_Click(System::Object^ sender, System::EventArgs^ e) {
		this->txtResult->Text += L"9";
	}
	private: System::Void btn0_Click(System::Object^ sender, System::EventArgs^ e) {
		this->txtResult->Text += L"0";
	}
	private: System::Void btnNone_Click(System::Object^ sender, System::EventArgs^ e) {
		this->txtResult->Text = L"";
	}
	private: System::Void btnDouble_Click(System::Object^ sender, System::EventArgs^ e) {
		this->txtResult->Text = L",";
	}
}
	; }