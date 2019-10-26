#pragma once

namespace ConverterCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class Calculator : public System::Windows::Forms::Form
	{
	public:
		Calculator(void)
		{
			InitializeComponent();
		}

	private:
		void UpdateOutput(String^ textToAdd);
		void CalculateResult(String^ stringExpression);

	protected:
		~Calculator()
		{
			if (components)
			{
				delete components;
			}
		}


	// == CALCULATOR BUTTONS ==

	private: System::Windows::Forms::Label^ lblResult;

	private: System::Windows::Forms::Button^ btnOne;
	private: System::Windows::Forms::Button^ btnTwo;
	private: System::Windows::Forms::Button^ btnThree;
	private: System::Windows::Forms::Button^ btnFour;
	private: System::Windows::Forms::Button^ btnFive;
	private: System::Windows::Forms::Button^ btnSix;
	private: System::Windows::Forms::Button^ btnSeven;
	private: System::Windows::Forms::Button^ btnEight;
	private: System::Windows::Forms::Button^ btnNine;
	private: System::Windows::Forms::Button^ btnZero;

	private: System::Windows::Forms::Button^ btnMultiply;
	private: System::Windows::Forms::Button^ btnDivide;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnSubtract;

	private: System::Windows::Forms::Button^ btnClear;
	private: System::Windows::Forms::Button^ btnEquals;

	private: System::ComponentModel::Container^ components;


#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->lblResult = (gcnew System::Windows::Forms::Label());

			this->btnOne = (gcnew System::Windows::Forms::Button());
			this->btnTwo = (gcnew System::Windows::Forms::Button());
			this->btnThree = (gcnew System::Windows::Forms::Button());
			this->btnFour = (gcnew System::Windows::Forms::Button());
			this->btnFive = (gcnew System::Windows::Forms::Button());
			this->btnSix = (gcnew System::Windows::Forms::Button());
			this->btnSeven = (gcnew System::Windows::Forms::Button());
			this->btnEight = (gcnew System::Windows::Forms::Button());
			this->btnNine = (gcnew System::Windows::Forms::Button());
			this->btnZero = (gcnew System::Windows::Forms::Button());

			this->btnMultiply = (gcnew System::Windows::Forms::Button());
			this->btnDivide = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnSubtract = (gcnew System::Windows::Forms::Button());

			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->btnEquals = (gcnew System::Windows::Forms::Button());

			this->SuspendLayout();


			// == lblResult ==

			this->lblResult->BackColor = System::Drawing::SystemColors::ControlLight;
			this->lblResult->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 32, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblResult->Location = System::Drawing::Point(12, 9);
			this->lblResult->Name = L"labelResult";
			this->lblResult->Size = System::Drawing::Size(376, 63);
			this->lblResult->TabIndex = 0;
			this->lblResult->Text = L"0";
			this->lblResult->TextAlign = System::Drawing::ContentAlignment::MiddleRight;


			// == btnOne ==

			this->btnOne->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(147)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(171)));
			this->btnOne->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnOne->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnOne->Location = System::Drawing::Point(12, 309);
			this->btnOne->Name = L"btnOne";
			this->btnOne->Size = System::Drawing::Size(74, 67);
			this->btnOne->TabIndex = 9;
			this->btnOne->Text = L"1";
			this->btnOne->UseVisualStyleBackColor = false;
			this->btnOne->Click += gcnew System::EventHandler(this, &Calculator::btnOne_Click);


			// == btnTwo ==

			this->btnTwo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(147)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(171)));
			this->btnTwo->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnTwo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTwo->Location = System::Drawing::Point(114, 309);
			this->btnTwo->Name = L"btnTwo";
			this->btnTwo->Size = System::Drawing::Size(74, 67);
			this->btnTwo->TabIndex = 10;
			this->btnTwo->Text = L"2";
			this->btnTwo->UseVisualStyleBackColor = false;
			this->btnTwo->Click += gcnew System::EventHandler(this, &Calculator::btnTwo_Click);


			// == btnThree ==

			this->btnThree->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(147)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(171)));
			this->btnThree->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnThree->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnThree->Location = System::Drawing::Point(213, 309);
			this->btnThree->Name = L"btnThree";
			this->btnThree->Size = System::Drawing::Size(74, 67);
			this->btnThree->TabIndex = 11;
			this->btnThree->Text = L"3";
			this->btnThree->UseVisualStyleBackColor = false;
			this->btnThree->Click += gcnew System::EventHandler(this, &Calculator::btnThree_Click);


			// == btnFour ==

			this->btnFour->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(147)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(171)));
			this->btnFour->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnFour->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnFour->Location = System::Drawing::Point(12, 217);
			this->btnFour->Name = L"btnFour";
			this->btnFour->Size = System::Drawing::Size(74, 67);
			this->btnFour->TabIndex = 5;
			this->btnFour->Text = L"4";
			this->btnFour->UseVisualStyleBackColor = false;
			this->btnFour->Click += gcnew System::EventHandler(this, &Calculator::btnFour_Click);


			// == btnFive ==

			this->btnFive->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(147)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(171)));
			this->btnFive->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnFive->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnFive->Location = System::Drawing::Point(114, 217);
			this->btnFive->Name = L"btnFive";
			this->btnFive->Size = System::Drawing::Size(74, 67);
			this->btnFive->TabIndex = 6;
			this->btnFive->Text = L"5";
			this->btnFive->UseVisualStyleBackColor = false;
			this->btnFive->Click += gcnew System::EventHandler(this, &Calculator::btnFive_Click);


			// == btnSix ==

			this->btnSix->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(147)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(171)));
			this->btnSix->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnSix->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSix->Location = System::Drawing::Point(213, 217);
			this->btnSix->Name = L"btnSix";
			this->btnSix->Size = System::Drawing::Size(74, 67);
			this->btnSix->TabIndex = 7;
			this->btnSix->Text = L"6";
			this->btnSix->UseVisualStyleBackColor = false;
			this->btnSix->Click += gcnew System::EventHandler(this, &Calculator::btnSix_Click);


			// == btnSeven ==

			this->btnSeven->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(147)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(171)));
			this->btnSeven->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnSeven->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSeven->Location = System::Drawing::Point(12, 129);
			this->btnSeven->Name = L"btnSeven";
			this->btnSeven->Size = System::Drawing::Size(74, 67);
			this->btnSeven->TabIndex = 1;
			this->btnSeven->Text = L"7";
			this->btnSeven->UseVisualStyleBackColor = false;
			this->btnSeven->Click += gcnew System::EventHandler(this, &Calculator::btnSeven_Click);



			// == btnEight ==

			this->btnEight->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(147)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(171)));
			this->btnEight->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnEight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEight->Location = System::Drawing::Point(114, 129);
			this->btnEight->Name = L"btnEight";
			this->btnEight->Size = System::Drawing::Size(74, 67);
			this->btnEight->TabIndex = 2;
			this->btnEight->Text = L"8";
			this->btnEight->UseVisualStyleBackColor = false;
			this->btnEight->Click += gcnew System::EventHandler(this, &Calculator::btnEight_Click);


			// == btnNine ==

			this->btnNine->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(147)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(171)));
			this->btnNine->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnNine->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNine->Location = System::Drawing::Point(213, 129);
			this->btnNine->Name = L"btnNine";
			this->btnNine->Size = System::Drawing::Size(74, 67);
			this->btnNine->TabIndex = 3;
			this->btnNine->Text = L"9";
			this->btnNine->UseVisualStyleBackColor = false;
			this->btnNine->Click += gcnew System::EventHandler(this, &Calculator::btnNine_Click);


			// == btnZero ==

			this->btnZero->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(147)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(171)));
			this->btnZero->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnZero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnZero->Location = System::Drawing::Point(12, 399);
			this->btnZero->Name = L"btnZero";
			this->btnZero->Size = System::Drawing::Size(74, 67);
			this->btnZero->TabIndex = 13;
			this->btnZero->Text = L"0";
			this->btnZero->UseVisualStyleBackColor = false;
			this->btnZero->Click += gcnew System::EventHandler(this, &Calculator::btnZero_Click);


			// == btnMultiply ==

			this->btnMultiply->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(147)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(171)));
			this->btnMultiply->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnMultiply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMultiply->Location = System::Drawing::Point(314, 129);
			this->btnMultiply->Name = L"btnMultiply";
			this->btnMultiply->Size = System::Drawing::Size(74, 67);
			this->btnMultiply->TabIndex = 4;
			this->btnMultiply->Text = L"x";
			this->btnMultiply->UseVisualStyleBackColor = false;
			this->btnMultiply->Click += gcnew System::EventHandler(this, &Calculator::btnMultiply_Click);


			// == btnDivide ==

			this->btnDivide->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(147)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(171)));
			this->btnDivide->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnDivide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDivide->Location = System::Drawing::Point(314, 217);
			this->btnDivide->Name = L"btnDivide";
			this->btnDivide->Size = System::Drawing::Size(74, 67);
			this->btnDivide->TabIndex = 8;
			this->btnDivide->Text = L"/";
			this->btnDivide->UseVisualStyleBackColor = false;
			this->btnDivide->Click += gcnew System::EventHandler(this, &Calculator::btnDivide_Click);


			// == btnAdd ==

			this->btnAdd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(147)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(171)));
			this->btnAdd->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->Location = System::Drawing::Point(314, 309);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(74, 67);
			this->btnAdd->TabIndex = 12;
			this->btnAdd->Text = L"+";
			this->btnAdd->UseVisualStyleBackColor = false;
			this->btnAdd->Click += gcnew System::EventHandler(this, &Calculator::btnAdd_Click);


			// == btnSubtract ==

			this->btnSubtract->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(147)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(171)));
			this->btnSubtract->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnSubtract->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSubtract->Location = System::Drawing::Point(314, 399);
			this->btnSubtract->Name = L"btnSubtract";
			this->btnSubtract->Size = System::Drawing::Size(74, 67);
			this->btnSubtract->TabIndex = 16;
			this->btnSubtract->Text = L"-";
			this->btnSubtract->UseVisualStyleBackColor = false;
			this->btnSubtract->Click += gcnew System::EventHandler(this, &Calculator::btnSubtract_Click);


			// == btnClear ==

			this->btnClear->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(147)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(171)));
			this->btnClear->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClear->Location = System::Drawing::Point(213, 399);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(74, 67);
			this->btnClear->TabIndex = 15;
			this->btnClear->Text = L"C";
			this->btnClear->UseVisualStyleBackColor = false;
			this->btnClear->Click += gcnew System::EventHandler(this, &Calculator::btnClear_Click);


			// == btnEquals ==

			this->btnEquals->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(147)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(171)));
			this->btnEquals->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnEquals->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEquals->Location = System::Drawing::Point(114, 399);
			this->btnEquals->Name = L"btnEquals";
			this->btnEquals->Size = System::Drawing::Size(74, 67);
			this->btnEquals->TabIndex = 14;
			this->btnEquals->Text = L"=";
			this->btnEquals->UseVisualStyleBackColor = false;


			// == Calculator ==

			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->ClientSize = System::Drawing::Size(400, 500);

			this->Controls->Add(this->lblResult);

			this->Controls->Add(this->btnOne);
			this->Controls->Add(this->btnTwo);
			this->Controls->Add(this->btnThree);
			this->Controls->Add(this->btnFour);
			this->Controls->Add(this->btnFive);
			this->Controls->Add(this->btnSix);
			this->Controls->Add(this->btnSeven);
			this->Controls->Add(this->btnEight);
			this->Controls->Add(this->btnNine);
			this->Controls->Add(this->btnZero);

			this->Controls->Add(this->btnMultiply);
			this->Controls->Add(this->btnDivide);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->btnSubtract);

			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->btnEquals);

			this->Name = L"Converter Calculator";
			this->Text = L"Converter Calculator";

			this->ResumeLayout(false);
		}
#pragma endregion

	private: Void btnOne_Click(System::Object^ sender, System::EventArgs^ e);
	private: Void btnTwo_Click(System::Object^ sender, System::EventArgs^ e);
	private: Void btnThree_Click(System::Object^ sender, System::EventArgs^ e);
	private: Void btnFour_Click(System::Object^ sender, System::EventArgs^ e);
	private: Void btnFive_Click(System::Object^ sender, System::EventArgs^ e);
	private: Void btnSix_Click(System::Object^ sender, System::EventArgs^ e);
	private: Void btnSeven_Click(System::Object^ sender, System::EventArgs^ e);
	private: Void btnEight_Click(System::Object^ sender, System::EventArgs^ e);
	private: Void btnNine_Click(System::Object^ sender, System::EventArgs^ e);
	private: Void btnZero_Click(System::Object^ sender, System::EventArgs^ e);

	private: Void btnMultiply_Click(System::Object^ sender, System::EventArgs^ e);
	private: Void btnDivide_Click(System::Object^ sender, System::EventArgs^ e);
	private: Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e);
	private: Void btnSubtract_Click(System::Object^ sender, System::EventArgs^ e);

	private: Void btnClear_Click(System::Object^ sender, System::EventArgs^ e);
	private: Void btnEquals_Click(System::Object^ sender, System::EventArgs^ e);

	};
}
