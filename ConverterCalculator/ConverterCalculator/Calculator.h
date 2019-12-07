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
		String^ previousExpression;
		bool operatorJustAdded, decimalJustAdded;
	private: System::Windows::Forms::TabControl^ tabControlBaseConversions;
	private: System::Windows::Forms::TabPage^ tabPageDecimal;




	private: System::Windows::Forms::TabPage^ tabPageBinary;




	private: System::Windows::Forms::TabPage^ tabPageHex;
	private: System::Windows::Forms::TextBox^ textBoxHexConverted;



	private: System::Windows::Forms::TextBox^ textBoxHex;
	private: System::Windows::Forms::Label^ lblConvertedHex;



	private: System::Windows::Forms::Label^ lblHex;
	private: System::Windows::Forms::TextBox^ textBoxDecimalConverted;
	private: System::Windows::Forms::TextBox^ textBoxDecimal;
	private: System::Windows::Forms::Label^ lblConvertedDecimal;
	private: System::Windows::Forms::Label^ lblDecimal;
	private: System::Windows::Forms::TextBox^ textBoxBinaryConverted;

	private: System::Windows::Forms::TextBox^ textBoxBinary;
	private: System::Windows::Forms::Label^ lblBinaryConverted;
	private: System::Windows::Forms::Label^ lblBinary;
	private: System::Windows::Forms::ComboBox^ comboBoxDecimalConversion;
	private: System::Windows::Forms::Button^ buttonConvertBinary;
	private: System::Windows::Forms::ComboBox^ comboBoxBinaryConversions;
	private: System::Windows::Forms::Button^ buttonConvertHex;
	private: System::Windows::Forms::ComboBox^ comboBoxHexConversions;
	private: System::Windows::Forms::Label^ lblDecimalConversion;
	private: System::Windows::Forms::Label^ lblBinaryConversion;
	private: System::Windows::Forms::Label^ lblHexConversions;
	private: System::Windows::Forms::Button^ buttonConvertDecimal;














	protected:
		~Calculator()
		{
			if (components)
			{
				delete components;
			}
		}


	//
	// == CALCULATOR BUTTONS ==
	//

	private: System::Windows::Forms::Label^ lblExpression;
	private: System::Windows::Forms::Label^ lblOutput;

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

	private: System::Windows::Forms::Button^ btnSqrRt;



	private: System::Windows::Forms::Button^ btnExponential;
	private: System::Windows::Forms::Button^ btnDecimal;
	private: System::Windows::Forms::Button^ btnModulus;
	private: System::Windows::Forms::TabControl^ tabControlApp;
	private: System::Windows::Forms::TabPage^ tabPageCalculator;
	private: System::Windows::Forms::TabPage^ tabPageConversions;




	private: System::Windows::Forms::Label^ lblFrom;
	private: System::Windows::Forms::TabControl^ tabControlConversions;


	private: System::Windows::Forms::TabPage^ tabPageLength;
	private: System::Windows::Forms::TabPage^ tabPageWeight;
	private: System::Windows::Forms::TextBox^ textBoxLengthTo;





	private: System::Windows::Forms::Label^ lblTo;
	private: System::Windows::Forms::TextBox^ textBoxLengthFrom;

	private: System::Windows::Forms::TabPage^ tabPageVolume;

	private: System::Windows::Forms::TabPage^ tabPageSpeed;
	private: System::Windows::Forms::ListBox^ listBoxLengthTo;

	private: System::Windows::Forms::ListBox^ listBoxLengthFrom;
	private: System::Windows::Forms::ListBox^ listBoxWeightTo;


	private: System::Windows::Forms::ListBox^ listBoxWeightFrom;
	private: System::Windows::Forms::TextBox^ textBoxWeightTo;


	private: System::Windows::Forms::TextBox^ textBoxWeightFrom;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListBox^ listBoxVolumeTo;

	private: System::Windows::Forms::ListBox^ listBoxVolumeFrom;
	private: System::Windows::Forms::TextBox^ textBoxVolumeTo;


	private: System::Windows::Forms::TextBox^ textBoxVolumeFrom;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ListBox^ listBoxSpeedTo;

	private: System::Windows::Forms::ListBox^ listBoxSpeedFrom;
	private: System::Windows::Forms::TextBox^ textBoxSpeedTo;


private: System::Windows::Forms::TextBox^ textBoxSpeedFrom;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TabPage^ tabPageTemperature;
	private: System::Windows::Forms::ListBox^ listBoxTempTo;

	private: System::Windows::Forms::ListBox^ listBoxTempFrom;
private: System::Windows::Forms::TextBox^ textBoxTempTo;



private: System::Windows::Forms::TextBox^ textBoxTempFrom;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::TabPage^ tabPageAngles;

private: System::Windows::Forms::ListBox^ listBoxMathsTo;

private: System::Windows::Forms::ListBox^ listBoxMathsFrom;


private: System::Windows::Forms::TextBox^ textBoxMathsTo;


private: System::Windows::Forms::TextBox^ textBoxMathsFrom;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;









	private: System::ComponentModel::Container^ components;


#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Calculator::typeid));
			this->lblOutput = (gcnew System::Windows::Forms::Label());
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
			this->btnSqrRt = (gcnew System::Windows::Forms::Button());
			this->btnExponential = (gcnew System::Windows::Forms::Button());
			this->btnDecimal = (gcnew System::Windows::Forms::Button());
			this->btnModulus = (gcnew System::Windows::Forms::Button());
			this->tabControlApp = (gcnew System::Windows::Forms::TabControl());
			this->tabPageCalculator = (gcnew System::Windows::Forms::TabPage());
			this->lblExpression = (gcnew System::Windows::Forms::Label());
			this->tabPageConversions = (gcnew System::Windows::Forms::TabPage());
			this->tabControlBaseConversions = (gcnew System::Windows::Forms::TabControl());
			this->tabPageDecimal = (gcnew System::Windows::Forms::TabPage());
			this->buttonConvertDecimal = (gcnew System::Windows::Forms::Button());
			this->comboBoxDecimalConversion = (gcnew System::Windows::Forms::ComboBox());
			this->textBoxDecimalConverted = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDecimal = (gcnew System::Windows::Forms::TextBox());
			this->lblConvertedDecimal = (gcnew System::Windows::Forms::Label());
			this->lblDecimal = (gcnew System::Windows::Forms::Label());
			this->tabPageBinary = (gcnew System::Windows::Forms::TabPage());
			this->buttonConvertBinary = (gcnew System::Windows::Forms::Button());
			this->comboBoxBinaryConversions = (gcnew System::Windows::Forms::ComboBox());
			this->textBoxBinaryConverted = (gcnew System::Windows::Forms::TextBox());
			this->textBoxBinary = (gcnew System::Windows::Forms::TextBox());
			this->lblBinaryConverted = (gcnew System::Windows::Forms::Label());
			this->lblBinary = (gcnew System::Windows::Forms::Label());
			this->tabPageHex = (gcnew System::Windows::Forms::TabPage());
			this->buttonConvertHex = (gcnew System::Windows::Forms::Button());
			this->comboBoxHexConversions = (gcnew System::Windows::Forms::ComboBox());
			this->textBoxHexConverted = (gcnew System::Windows::Forms::TextBox());
			this->textBoxHex = (gcnew System::Windows::Forms::TextBox());
			this->lblConvertedHex = (gcnew System::Windows::Forms::Label());
			this->lblHex = (gcnew System::Windows::Forms::Label());
			this->tabControlConversions = (gcnew System::Windows::Forms::TabControl());
			this->tabPageLength = (gcnew System::Windows::Forms::TabPage());
			this->listBoxLengthTo = (gcnew System::Windows::Forms::ListBox());
			this->listBoxLengthFrom = (gcnew System::Windows::Forms::ListBox());
			this->textBoxLengthTo = (gcnew System::Windows::Forms::TextBox());
			this->lblTo = (gcnew System::Windows::Forms::Label());
			this->lblFrom = (gcnew System::Windows::Forms::Label());
			this->textBoxLengthFrom = (gcnew System::Windows::Forms::TextBox());
			this->tabPageWeight = (gcnew System::Windows::Forms::TabPage());
			this->listBoxWeightTo = (gcnew System::Windows::Forms::ListBox());
			this->listBoxWeightFrom = (gcnew System::Windows::Forms::ListBox());
			this->textBoxWeightTo = (gcnew System::Windows::Forms::TextBox());
			this->textBoxWeightFrom = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPageVolume = (gcnew System::Windows::Forms::TabPage());
			this->listBoxVolumeTo = (gcnew System::Windows::Forms::ListBox());
			this->listBoxVolumeFrom = (gcnew System::Windows::Forms::ListBox());
			this->textBoxVolumeTo = (gcnew System::Windows::Forms::TextBox());
			this->textBoxVolumeFrom = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tabPageSpeed = (gcnew System::Windows::Forms::TabPage());
			this->listBoxSpeedTo = (gcnew System::Windows::Forms::ListBox());
			this->listBoxSpeedFrom = (gcnew System::Windows::Forms::ListBox());
			this->textBoxSpeedTo = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSpeedFrom = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tabPageTemperature = (gcnew System::Windows::Forms::TabPage());
			this->listBoxTempTo = (gcnew System::Windows::Forms::ListBox());
			this->listBoxTempFrom = (gcnew System::Windows::Forms::ListBox());
			this->textBoxTempTo = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTempFrom = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tabPageAngles = (gcnew System::Windows::Forms::TabPage());
			this->listBoxMathsTo = (gcnew System::Windows::Forms::ListBox());
			this->listBoxMathsFrom = (gcnew System::Windows::Forms::ListBox());
			this->textBoxMathsTo = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMathsFrom = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->lblBinaryConversion = (gcnew System::Windows::Forms::Label());
			this->lblHexConversions = (gcnew System::Windows::Forms::Label());
			this->lblDecimalConversion = (gcnew System::Windows::Forms::Label());
			this->tabControlApp->SuspendLayout();
			this->tabPageCalculator->SuspendLayout();
			this->tabPageConversions->SuspendLayout();
			this->tabControlBaseConversions->SuspendLayout();
			this->tabPageDecimal->SuspendLayout();
			this->tabPageBinary->SuspendLayout();
			this->tabPageHex->SuspendLayout();
			this->tabControlConversions->SuspendLayout();
			this->tabPageLength->SuspendLayout();
			this->tabPageWeight->SuspendLayout();
			this->tabPageVolume->SuspendLayout();
			this->tabPageSpeed->SuspendLayout();
			this->tabPageTemperature->SuspendLayout();
			this->tabPageAngles->SuspendLayout();
			this->SuspendLayout();
			// 
			// lblOutput
			// 
			this->lblOutput->BackColor = System::Drawing::SystemColors::ControlLight;
			this->lblOutput->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblOutput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 32, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblOutput->Location = System::Drawing::Point(17, 75);
			this->lblOutput->Name = L"lblOutput";
			this->lblOutput->Size = System::Drawing::Size(394, 63);
			this->lblOutput->TabIndex = 0;
			this->lblOutput->Text = L"0";
			this->lblOutput->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// btnOne
			// 
			this->btnOne->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->btnOne->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnOne->Font = (gcnew System::Drawing::Font(L"Calibri Light", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnOne->Location = System::Drawing::Point(56, 377);
			this->btnOne->Name = L"btnOne";
			this->btnOne->Size = System::Drawing::Size(74, 67);
			this->btnOne->TabIndex = 9;
			this->btnOne->Text = L"1";
			this->btnOne->UseVisualStyleBackColor = false;
			this->btnOne->Click += gcnew System::EventHandler(this, &Calculator::btnOne_Click);
			// 
			// btnTwo
			// 
			this->btnTwo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->btnTwo->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnTwo->Font = (gcnew System::Drawing::Font(L"Calibri Light", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTwo->Location = System::Drawing::Point(136, 377);
			this->btnTwo->Name = L"btnTwo";
			this->btnTwo->Size = System::Drawing::Size(74, 67);
			this->btnTwo->TabIndex = 10;
			this->btnTwo->Text = L"2";
			this->btnTwo->UseVisualStyleBackColor = false;
			this->btnTwo->Click += gcnew System::EventHandler(this, &Calculator::btnTwo_Click);
			// 
			// btnThree
			// 
			this->btnThree->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->btnThree->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnThree->Font = (gcnew System::Drawing::Font(L"Calibri Light", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnThree->Location = System::Drawing::Point(216, 377);
			this->btnThree->Name = L"btnThree";
			this->btnThree->Size = System::Drawing::Size(74, 67);
			this->btnThree->TabIndex = 11;
			this->btnThree->Text = L"3";
			this->btnThree->UseVisualStyleBackColor = false;
			this->btnThree->Click += gcnew System::EventHandler(this, &Calculator::btnThree_Click);
			// 
			// btnFour
			// 
			this->btnFour->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->btnFour->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnFour->Font = (gcnew System::Drawing::Font(L"Calibri Light", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnFour->Location = System::Drawing::Point(56, 304);
			this->btnFour->Name = L"btnFour";
			this->btnFour->Size = System::Drawing::Size(74, 67);
			this->btnFour->TabIndex = 5;
			this->btnFour->Text = L"4";
			this->btnFour->UseVisualStyleBackColor = false;
			this->btnFour->Click += gcnew System::EventHandler(this, &Calculator::btnFour_Click);
			// 
			// btnFive
			// 
			this->btnFive->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->btnFive->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnFive->Font = (gcnew System::Drawing::Font(L"Calibri Light", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnFive->Location = System::Drawing::Point(136, 304);
			this->btnFive->Name = L"btnFive";
			this->btnFive->Size = System::Drawing::Size(74, 67);
			this->btnFive->TabIndex = 6;
			this->btnFive->Text = L"5";
			this->btnFive->UseVisualStyleBackColor = false;
			this->btnFive->Click += gcnew System::EventHandler(this, &Calculator::btnFive_Click);
			// 
			// btnSix
			// 
			this->btnSix->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->btnSix->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnSix->Font = (gcnew System::Drawing::Font(L"Calibri Light", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSix->Location = System::Drawing::Point(216, 304);
			this->btnSix->Name = L"btnSix";
			this->btnSix->Size = System::Drawing::Size(74, 67);
			this->btnSix->TabIndex = 7;
			this->btnSix->Text = L"6";
			this->btnSix->UseVisualStyleBackColor = false;
			this->btnSix->Click += gcnew System::EventHandler(this, &Calculator::btnSix_Click);
			// 
			// btnSeven
			// 
			this->btnSeven->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->btnSeven->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnSeven->Font = (gcnew System::Drawing::Font(L"Calibri Light", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSeven->Location = System::Drawing::Point(56, 231);
			this->btnSeven->Name = L"btnSeven";
			this->btnSeven->Size = System::Drawing::Size(74, 67);
			this->btnSeven->TabIndex = 1;
			this->btnSeven->Text = L"7";
			this->btnSeven->UseVisualStyleBackColor = false;
			this->btnSeven->Click += gcnew System::EventHandler(this, &Calculator::btnSeven_Click);
			// 
			// btnEight
			// 
			this->btnEight->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->btnEight->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnEight->Font = (gcnew System::Drawing::Font(L"Calibri Light", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEight->Location = System::Drawing::Point(136, 231);
			this->btnEight->Name = L"btnEight";
			this->btnEight->Size = System::Drawing::Size(74, 67);
			this->btnEight->TabIndex = 2;
			this->btnEight->Text = L"8";
			this->btnEight->UseVisualStyleBackColor = false;
			this->btnEight->Click += gcnew System::EventHandler(this, &Calculator::btnEight_Click);
			// 
			// btnNine
			// 
			this->btnNine->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->btnNine->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnNine->Font = (gcnew System::Drawing::Font(L"Calibri Light", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNine->Location = System::Drawing::Point(216, 231);
			this->btnNine->Name = L"btnNine";
			this->btnNine->Size = System::Drawing::Size(74, 67);
			this->btnNine->TabIndex = 3;
			this->btnNine->Text = L"9";
			this->btnNine->UseVisualStyleBackColor = false;
			this->btnNine->Click += gcnew System::EventHandler(this, &Calculator::btnNine_Click);
			// 
			// btnZero
			// 
			this->btnZero->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->btnZero->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnZero->Font = (gcnew System::Drawing::Font(L"Calibri Light", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnZero->Location = System::Drawing::Point(56, 450);
			this->btnZero->Name = L"btnZero";
			this->btnZero->Size = System::Drawing::Size(74, 67);
			this->btnZero->TabIndex = 13;
			this->btnZero->Text = L"0";
			this->btnZero->UseVisualStyleBackColor = false;
			this->btnZero->Click += gcnew System::EventHandler(this, &Calculator::btnZero_Click);
			// 
			// btnMultiply
			// 
			this->btnMultiply->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(147)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(171)));
			this->btnMultiply->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnMultiply->Font = (gcnew System::Drawing::Font(L"Calibri Light", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMultiply->Location = System::Drawing::Point(296, 304);
			this->btnMultiply->Name = L"btnMultiply";
			this->btnMultiply->Size = System::Drawing::Size(74, 67);
			this->btnMultiply->TabIndex = 4;
			this->btnMultiply->Text = L"x";
			this->btnMultiply->UseVisualStyleBackColor = false;
			this->btnMultiply->Click += gcnew System::EventHandler(this, &Calculator::btnMultiply_Click);
			// 
			// btnDivide
			// 
			this->btnDivide->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(147)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(171)));
			this->btnDivide->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnDivide->Font = (gcnew System::Drawing::Font(L"Calibri Light", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDivide->Location = System::Drawing::Point(296, 231);
			this->btnDivide->Name = L"btnDivide";
			this->btnDivide->Size = System::Drawing::Size(74, 67);
			this->btnDivide->TabIndex = 8;
			this->btnDivide->Text = L"÷";
			this->btnDivide->UseVisualStyleBackColor = false;
			this->btnDivide->Click += gcnew System::EventHandler(this, &Calculator::btnDivide_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(147)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(171)));
			this->btnAdd->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Calibri Light", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->Location = System::Drawing::Point(296, 450);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(74, 67);
			this->btnAdd->TabIndex = 12;
			this->btnAdd->Text = L"+";
			this->btnAdd->UseVisualStyleBackColor = false;
			this->btnAdd->Click += gcnew System::EventHandler(this, &Calculator::btnAdd_Click);
			// 
			// btnSubtract
			// 
			this->btnSubtract->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(147)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(171)));
			this->btnSubtract->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnSubtract->Font = (gcnew System::Drawing::Font(L"Calibri Light", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSubtract->Location = System::Drawing::Point(296, 377);
			this->btnSubtract->Name = L"btnSubtract";
			this->btnSubtract->Size = System::Drawing::Size(74, 67);
			this->btnSubtract->TabIndex = 16;
			this->btnSubtract->Text = L"-";
			this->btnSubtract->UseVisualStyleBackColor = false;
			this->btnSubtract->Click += gcnew System::EventHandler(this, &Calculator::btnSubtract_Click);
			// 
			// btnClear
			// 
			this->btnClear->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(218)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->btnClear->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Calibri Light", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClear->Location = System::Drawing::Point(56, 158);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(74, 67);
			this->btnClear->TabIndex = 15;
			this->btnClear->Text = L"C";
			this->btnClear->UseVisualStyleBackColor = false;
			this->btnClear->Click += gcnew System::EventHandler(this, &Calculator::btnClear_Click);
			// 
			// btnEquals
			// 
			this->btnEquals->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(147)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(171)));
			this->btnEquals->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnEquals->Font = (gcnew System::Drawing::Font(L"Calibri Light", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEquals->Location = System::Drawing::Point(216, 450);
			this->btnEquals->Name = L"btnEquals";
			this->btnEquals->Size = System::Drawing::Size(74, 67);
			this->btnEquals->TabIndex = 14;
			this->btnEquals->Text = L"=";
			this->btnEquals->UseVisualStyleBackColor = false;
			this->btnEquals->Click += gcnew System::EventHandler(this, &Calculator::btnEquals_Click);
			// 
			// btnSqrRt
			// 
			this->btnSqrRt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(147)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(171)));
			this->btnSqrRt->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnSqrRt->Font = (gcnew System::Drawing::Font(L"Calibri Light", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSqrRt->Location = System::Drawing::Point(216, 158);
			this->btnSqrRt->Name = L"btnSqrRt";
			this->btnSqrRt->Size = System::Drawing::Size(74, 67);
			this->btnSqrRt->TabIndex = 18;
			this->btnSqrRt->Text = L"√";
			this->btnSqrRt->UseVisualStyleBackColor = false;
			this->btnSqrRt->Click += gcnew System::EventHandler(this, &Calculator::btnSqrRt_Click);
			// 
			// btnExponential
			// 
			this->btnExponential->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(147)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(171)));
			this->btnExponential->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnExponential->Font = (gcnew System::Drawing::Font(L"Calibri Light", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExponential->Location = System::Drawing::Point(136, 158);
			this->btnExponential->Name = L"btnExponential";
			this->btnExponential->Size = System::Drawing::Size(74, 67);
			this->btnExponential->TabIndex = 19;
			this->btnExponential->Text = L"^";
			this->btnExponential->UseVisualStyleBackColor = false;
			this->btnExponential->Click += gcnew System::EventHandler(this, &Calculator::btnExponential_Click);
			// 
			// btnDecimal
			// 
			this->btnDecimal->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->btnDecimal->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnDecimal->Font = (gcnew System::Drawing::Font(L"Calibri Light", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDecimal->Location = System::Drawing::Point(136, 450);
			this->btnDecimal->Name = L"btnDecimal";
			this->btnDecimal->Size = System::Drawing::Size(74, 67);
			this->btnDecimal->TabIndex = 20;
			this->btnDecimal->Text = L".";
			this->btnDecimal->UseVisualStyleBackColor = false;
			this->btnDecimal->Click += gcnew System::EventHandler(this, &Calculator::btnDecimal_Click);
			// 
			// btnModulus
			// 
			this->btnModulus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(147)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(171)));
			this->btnModulus->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnModulus->Font = (gcnew System::Drawing::Font(L"Calibri Light", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnModulus->Location = System::Drawing::Point(296, 158);
			this->btnModulus->Name = L"btnModulus";
			this->btnModulus->Size = System::Drawing::Size(74, 67);
			this->btnModulus->TabIndex = 21;
			this->btnModulus->Text = L"%";
			this->btnModulus->UseVisualStyleBackColor = false;
			this->btnModulus->Click += gcnew System::EventHandler(this, &Calculator::btnModulus_Click);
			// 
			// tabControlApp
			// 
			this->tabControlApp->Controls->Add(this->tabPageCalculator);
			this->tabControlApp->Controls->Add(this->tabPageConversions);
			this->tabControlApp->Font = (gcnew System::Drawing::Font(L"Calibri Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabControlApp->Location = System::Drawing::Point(12, 12);
			this->tabControlApp->Name = L"tabControlApp";
			this->tabControlApp->SelectedIndex = 0;
			this->tabControlApp->Size = System::Drawing::Size(436, 582);
			this->tabControlApp->TabIndex = 27;
			// 
			// tabPageCalculator
			// 
			this->tabPageCalculator->BackColor = System::Drawing::Color::PowderBlue;
			this->tabPageCalculator->Controls->Add(this->lblExpression);
			this->tabPageCalculator->Controls->Add(this->lblOutput);
			this->tabPageCalculator->Controls->Add(this->btnEquals);
			this->tabPageCalculator->Controls->Add(this->btnClear);
			this->tabPageCalculator->Controls->Add(this->btnSubtract);
			this->tabPageCalculator->Controls->Add(this->btnAdd);
			this->tabPageCalculator->Controls->Add(this->btnDivide);
			this->tabPageCalculator->Controls->Add(this->btnSqrRt);
			this->tabPageCalculator->Controls->Add(this->btnMultiply);
			this->tabPageCalculator->Controls->Add(this->btnExponential);
			this->tabPageCalculator->Controls->Add(this->btnZero);
			this->tabPageCalculator->Controls->Add(this->btnModulus);
			this->tabPageCalculator->Controls->Add(this->btnNine);
			this->tabPageCalculator->Controls->Add(this->btnDecimal);
			this->tabPageCalculator->Controls->Add(this->btnEight);
			this->tabPageCalculator->Controls->Add(this->btnOne);
			this->tabPageCalculator->Controls->Add(this->btnSeven);
			this->tabPageCalculator->Controls->Add(this->btnTwo);
			this->tabPageCalculator->Controls->Add(this->btnSix);
			this->tabPageCalculator->Controls->Add(this->btnThree);
			this->tabPageCalculator->Controls->Add(this->btnFive);
			this->tabPageCalculator->Controls->Add(this->btnFour);
			this->tabPageCalculator->Location = System::Drawing::Point(4, 28);
			this->tabPageCalculator->Name = L"tabPageCalculator";
			this->tabPageCalculator->Padding = System::Windows::Forms::Padding(3);
			this->tabPageCalculator->Size = System::Drawing::Size(428, 550);
			this->tabPageCalculator->TabIndex = 0;
			this->tabPageCalculator->Text = L"Calculator";
			// 
			// lblExpression
			// 
			this->lblExpression->BackColor = System::Drawing::SystemColors::ControlLight;
			this->lblExpression->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblExpression->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblExpression->Location = System::Drawing::Point(17, 38);
			this->lblExpression->Name = L"lblExpression";
			this->lblExpression->Size = System::Drawing::Size(394, 37);
			this->lblExpression->TabIndex = 22;
			this->lblExpression->Text = L"0";
			this->lblExpression->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// tabPageConversions
			// 
			this->tabPageConversions->BackColor = System::Drawing::Color::PowderBlue;
			this->tabPageConversions->Controls->Add(this->tabControlBaseConversions);
			this->tabPageConversions->Controls->Add(this->tabControlConversions);
			this->tabPageConversions->Location = System::Drawing::Point(4, 28);
			this->tabPageConversions->Name = L"tabPageConversions";
			this->tabPageConversions->Padding = System::Windows::Forms::Padding(3);
			this->tabPageConversions->Size = System::Drawing::Size(428, 550);
			this->tabPageConversions->TabIndex = 1;
			this->tabPageConversions->Text = L"Conversions";
			// 
			// tabControlBaseConversions
			// 
			this->tabControlBaseConversions->Controls->Add(this->tabPageDecimal);
			this->tabControlBaseConversions->Controls->Add(this->tabPageBinary);
			this->tabControlBaseConversions->Controls->Add(this->tabPageHex);
			this->tabControlBaseConversions->Location = System::Drawing::Point(7, 335);
			this->tabControlBaseConversions->Name = L"tabControlBaseConversions";
			this->tabControlBaseConversions->SelectedIndex = 0;
			this->tabControlBaseConversions->Size = System::Drawing::Size(415, 195);
			this->tabControlBaseConversions->TabIndex = 1;
			// 
			// tabPageDecimal
			// 
			this->tabPageDecimal->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->tabPageDecimal->Controls->Add(this->lblDecimalConversion);
			this->tabPageDecimal->Controls->Add(this->buttonConvertDecimal);
			this->tabPageDecimal->Controls->Add(this->comboBoxDecimalConversion);
			this->tabPageDecimal->Controls->Add(this->textBoxDecimalConverted);
			this->tabPageDecimal->Controls->Add(this->textBoxDecimal);
			this->tabPageDecimal->Controls->Add(this->lblConvertedDecimal);
			this->tabPageDecimal->Controls->Add(this->lblDecimal);
			this->tabPageDecimal->Location = System::Drawing::Point(4, 28);
			this->tabPageDecimal->Name = L"tabPageDecimal";
			this->tabPageDecimal->Padding = System::Windows::Forms::Padding(3);
			this->tabPageDecimal->Size = System::Drawing::Size(407, 163);
			this->tabPageDecimal->TabIndex = 0;
			this->tabPageDecimal->Text = L"Decimal";
			// 
			// buttonConvertDecimal
			// 
			this->buttonConvertDecimal->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(147)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)), static_cast<System::Int32>(static_cast<System::Byte>(171)));
			this->buttonConvertDecimal->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonConvertDecimal->Font = (gcnew System::Drawing::Font(L"Calibri Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonConvertDecimal->Location = System::Drawing::Point(214, 66);
			this->buttonConvertDecimal->Name = L"buttonConvertDecimal";
			this->buttonConvertDecimal->Size = System::Drawing::Size(91, 27);
			this->buttonConvertDecimal->TabIndex = 18;
			this->buttonConvertDecimal->Text = L"Convert";
			this->buttonConvertDecimal->UseVisualStyleBackColor = false;
			// 
			// comboBoxDecimalConversion
			// 
			this->comboBoxDecimalConversion->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxDecimalConversion->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->comboBoxDecimalConversion->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Binary (Base 2)", L"Hexadecimal (Base 16)" });
			this->comboBoxDecimalConversion->Location = System::Drawing::Point(7, 66);
			this->comboBoxDecimalConversion->MaxDropDownItems = 2;
			this->comboBoxDecimalConversion->Name = L"comboBoxDecimalConversion";
			this->comboBoxDecimalConversion->Size = System::Drawing::Size(190, 27);
			this->comboBoxDecimalConversion->TabIndex = 17;
			// 
			// textBoxDecimalConverted
			// 
			this->textBoxDecimalConverted->BackColor = System::Drawing::SystemColors::ControlLight;
			this->textBoxDecimalConverted->Enabled = false;
			this->textBoxDecimalConverted->Location = System::Drawing::Point(172, 122);
			this->textBoxDecimalConverted->Name = L"textBoxDecimalConverted";
			this->textBoxDecimalConverted->Size = System::Drawing::Size(228, 27);
			this->textBoxDecimalConverted->TabIndex = 16;
			// 
			// textBoxDecimal
			// 
			this->textBoxDecimal->BackColor = System::Drawing::SystemColors::ControlLight;
			this->textBoxDecimal->Location = System::Drawing::Point(172, 9);
			this->textBoxDecimal->Name = L"textBoxDecimal";
			this->textBoxDecimal->Size = System::Drawing::Size(228, 27);
			this->textBoxDecimal->TabIndex = 14;
			// 
			// lblConvertedDecimal
			// 
			this->lblConvertedDecimal->AutoSize = true;
			this->lblConvertedDecimal->Location = System::Drawing::Point(3, 125);
			this->lblConvertedDecimal->Name = L"lblConvertedDecimal";
			this->lblConvertedDecimal->Size = System::Drawing::Size(0, 19);
			this->lblConvertedDecimal->TabIndex = 15;
			// 
			// lblDecimal
			// 
			this->lblDecimal->AutoSize = true;
			this->lblDecimal->Location = System::Drawing::Point(3, 12);
			this->lblDecimal->Name = L"lblDecimal";
			this->lblDecimal->Size = System::Drawing::Size(132, 19);
			this->lblDecimal->TabIndex = 13;
			this->lblDecimal->Text = L"Decimal (Base 10):";
			// 
			// tabPageBinary
			// 
			this->tabPageBinary->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->tabPageBinary->Controls->Add(this->lblBinaryConversion);
			this->tabPageBinary->Controls->Add(this->buttonConvertBinary);
			this->tabPageBinary->Controls->Add(this->comboBoxBinaryConversions);
			this->tabPageBinary->Controls->Add(this->textBoxBinaryConverted);
			this->tabPageBinary->Controls->Add(this->textBoxBinary);
			this->tabPageBinary->Controls->Add(this->lblBinaryConverted);
			this->tabPageBinary->Controls->Add(this->lblBinary);
			this->tabPageBinary->Location = System::Drawing::Point(4, 28);
			this->tabPageBinary->Name = L"tabPageBinary";
			this->tabPageBinary->Padding = System::Windows::Forms::Padding(3);
			this->tabPageBinary->Size = System::Drawing::Size(407, 163);
			this->tabPageBinary->TabIndex = 1;
			this->tabPageBinary->Text = L"Binary";
			// 
			// buttonConvertBinary
			// 
			this->buttonConvertBinary->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(147)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)), static_cast<System::Int32>(static_cast<System::Byte>(171)));
			this->buttonConvertBinary->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonConvertBinary->Font = (gcnew System::Drawing::Font(L"Calibri Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonConvertBinary->Location = System::Drawing::Point(214, 66);
			this->buttonConvertBinary->Name = L"buttonConvertBinary";
			this->buttonConvertBinary->Size = System::Drawing::Size(91, 27);
			this->buttonConvertBinary->TabIndex = 20;
			this->buttonConvertBinary->Text = L"Convert";
			this->buttonConvertBinary->UseVisualStyleBackColor = false;
			this->buttonConvertBinary->Click += gcnew System::EventHandler(this, &Calculator::ButtonConvertBinary_Click);
			// 
			// comboBoxBinaryConversions
			// 
			this->comboBoxBinaryConversions->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxBinaryConversions->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Decimal (Base 10)", L"Hexadecimal (Base 16)" });
			this->comboBoxBinaryConversions->Location = System::Drawing::Point(7, 66);
			this->comboBoxBinaryConversions->MaxDropDownItems = 2;
			this->comboBoxBinaryConversions->Name = L"comboBoxBinaryConversions";
			this->comboBoxBinaryConversions->Size = System::Drawing::Size(190, 27);
			this->comboBoxBinaryConversions->TabIndex = 19;
			// 
			// textBoxBinaryConverted
			// 
			this->textBoxBinaryConverted->BackColor = System::Drawing::SystemColors::ControlLight;
			this->textBoxBinaryConverted->Enabled = false;
			this->textBoxBinaryConverted->Location = System::Drawing::Point(172, 122);
			this->textBoxBinaryConverted->Name = L"textBoxBinaryConverted";
			this->textBoxBinaryConverted->Size = System::Drawing::Size(228, 27);
			this->textBoxBinaryConverted->TabIndex = 16;
			// 
			// textBoxBinary
			// 
			this->textBoxBinary->BackColor = System::Drawing::SystemColors::ControlLight;
			this->textBoxBinary->Location = System::Drawing::Point(172, 9);
			this->textBoxBinary->Name = L"textBoxBinary";
			this->textBoxBinary->Size = System::Drawing::Size(228, 27);
			this->textBoxBinary->TabIndex = 14;
			// 
			// lblBinaryConverted
			// 
			this->lblBinaryConverted->AutoSize = true;
			this->lblBinaryConverted->Location = System::Drawing::Point(3, 125);
			this->lblBinaryConverted->Name = L"lblBinaryConverted";
			this->lblBinaryConverted->Size = System::Drawing::Size(0, 19);
			this->lblBinaryConverted->TabIndex = 15;
			// 
			// lblBinary
			// 
			this->lblBinary->AutoSize = true;
			this->lblBinary->Location = System::Drawing::Point(3, 12);
			this->lblBinary->Name = L"lblBinary";
			this->lblBinary->Size = System::Drawing::Size(112, 19);
			this->lblBinary->TabIndex = 13;
			this->lblBinary->Text = L"Binary (Base 2):";
			// 
			// tabPageHex
			// 
			this->tabPageHex->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->tabPageHex->Controls->Add(this->lblHexConversions);
			this->tabPageHex->Controls->Add(this->buttonConvertHex);
			this->tabPageHex->Controls->Add(this->comboBoxHexConversions);
			this->tabPageHex->Controls->Add(this->textBoxHexConverted);
			this->tabPageHex->Controls->Add(this->textBoxHex);
			this->tabPageHex->Controls->Add(this->lblConvertedHex);
			this->tabPageHex->Controls->Add(this->lblHex);
			this->tabPageHex->Location = System::Drawing::Point(4, 28);
			this->tabPageHex->Name = L"tabPageHex";
			this->tabPageHex->Size = System::Drawing::Size(407, 163);
			this->tabPageHex->TabIndex = 2;
			this->tabPageHex->Text = L"Hexadecimal";
			// 
			// buttonConvertHex
			// 
			this->buttonConvertHex->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(147)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)), static_cast<System::Int32>(static_cast<System::Byte>(171)));
			this->buttonConvertHex->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonConvertHex->Font = (gcnew System::Drawing::Font(L"Calibri Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonConvertHex->Location = System::Drawing::Point(214, 66);
			this->buttonConvertHex->Name = L"buttonConvertHex";
			this->buttonConvertHex->Size = System::Drawing::Size(91, 27);
			this->buttonConvertHex->TabIndex = 20;
			this->buttonConvertHex->Text = L"Convert";
			this->buttonConvertHex->UseVisualStyleBackColor = false;
			this->buttonConvertHex->Click += gcnew System::EventHandler(this, &Calculator::ButtonConvertHex_Click);
			// 
			// comboBoxHexConversions
			// 
			this->comboBoxHexConversions->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxHexConversions->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Decimal (Base 10)", L"Binary (Base 2)" });
			this->comboBoxHexConversions->Location = System::Drawing::Point(7, 66);
			this->comboBoxHexConversions->MaxDropDownItems = 2;
			this->comboBoxHexConversions->Name = L"comboBoxHexConversions";
			this->comboBoxHexConversions->Size = System::Drawing::Size(190, 27);
			this->comboBoxHexConversions->TabIndex = 19;
			// 
			// textBoxHexConverted
			// 
			this->textBoxHexConverted->BackColor = System::Drawing::SystemColors::ControlLight;
			this->textBoxHexConverted->Enabled = false;
			this->textBoxHexConverted->Location = System::Drawing::Point(172, 122);
			this->textBoxHexConverted->Name = L"textBoxHexConverted";
			this->textBoxHexConverted->Size = System::Drawing::Size(228, 27);
			this->textBoxHexConverted->TabIndex = 12;
			// 
			// textBoxHex
			// 
			this->textBoxHex->BackColor = System::Drawing::SystemColors::ControlLight;
			this->textBoxHex->Location = System::Drawing::Point(172, 9);
			this->textBoxHex->Name = L"textBoxHex";
			this->textBoxHex->Size = System::Drawing::Size(228, 27);
			this->textBoxHex->TabIndex = 10;
			// 
			// lblConvertedHex
			// 
			this->lblConvertedHex->AutoSize = true;
			this->lblConvertedHex->Location = System::Drawing::Point(3, 125);
			this->lblConvertedHex->Name = L"lblConvertedHex";
			this->lblConvertedHex->Size = System::Drawing::Size(0, 19);
			this->lblConvertedHex->TabIndex = 11;
			// 
			// lblHex
			// 
			this->lblHex->AutoSize = true;
			this->lblHex->Location = System::Drawing::Point(3, 12);
			this->lblHex->Name = L"lblHex";
			this->lblHex->Size = System::Drawing::Size(163, 19);
			this->lblHex->TabIndex = 9;
			this->lblHex->Text = L"Hexadecimal (Base 16):";
			// 
			// tabControlConversions
			// 
			this->tabControlConversions->Controls->Add(this->tabPageLength);
			this->tabControlConversions->Controls->Add(this->tabPageWeight);
			this->tabControlConversions->Controls->Add(this->tabPageVolume);
			this->tabControlConversions->Controls->Add(this->tabPageSpeed);
			this->tabControlConversions->Controls->Add(this->tabPageTemperature);
			this->tabControlConversions->Controls->Add(this->tabPageAngles);
			this->tabControlConversions->Location = System::Drawing::Point(6, 18);
			this->tabControlConversions->Name = L"tabControlConversions";
			this->tabControlConversions->SelectedIndex = 0;
			this->tabControlConversions->Size = System::Drawing::Size(415, 283);
			this->tabControlConversions->TabIndex = 0;
			// 
			// tabPageLength
			// 
			this->tabPageLength->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->tabPageLength->Controls->Add(this->listBoxLengthTo);
			this->tabPageLength->Controls->Add(this->listBoxLengthFrom);
			this->tabPageLength->Controls->Add(this->textBoxLengthTo);
			this->tabPageLength->Controls->Add(this->lblTo);
			this->tabPageLength->Controls->Add(this->lblFrom);
			this->tabPageLength->Controls->Add(this->textBoxLengthFrom);
			this->tabPageLength->Location = System::Drawing::Point(4, 28);
			this->tabPageLength->Name = L"tabPageLength";
			this->tabPageLength->Padding = System::Windows::Forms::Padding(3);
			this->tabPageLength->Size = System::Drawing::Size(407, 251);
			this->tabPageLength->TabIndex = 0;
			this->tabPageLength->Text = L"Length";
			// 
			// listBoxLengthTo
			// 
			this->listBoxLengthTo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(147)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(171)));
			this->listBoxLengthTo->FormattingEnabled = true;
			this->listBoxLengthTo->ItemHeight = 19;
			this->listBoxLengthTo->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Kilometre", L"Metre", L"Centimetre", L"Yard",
					L"Inch", L"Mile", L"Nautical Mile"
			});
			this->listBoxLengthTo->Location = System::Drawing::Point(215, 39);
			this->listBoxLengthTo->Name = L"listBoxLengthTo";
			this->listBoxLengthTo->Size = System::Drawing::Size(186, 194);
			this->listBoxLengthTo->TabIndex = 6;
			// 
			// listBoxLengthFrom
			// 
			this->listBoxLengthFrom->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(147)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)), static_cast<System::Int32>(static_cast<System::Byte>(171)));
			this->listBoxLengthFrom->FormattingEnabled = true;
			this->listBoxLengthFrom->ItemHeight = 19;
			this->listBoxLengthFrom->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Kilometre", L"Metre", L"Centimetre",
					L"Yard", L"Inch", L"Mile", L"Nautical Mile"
			});
			this->listBoxLengthFrom->Location = System::Drawing::Point(8, 39);
			this->listBoxLengthFrom->Name = L"listBoxLengthFrom";
			this->listBoxLengthFrom->Size = System::Drawing::Size(190, 194);
			this->listBoxLengthFrom->TabIndex = 5;
			// 
			// textBoxLengthTo
			// 
			this->textBoxLengthTo->BackColor = System::Drawing::SystemColors::ControlLight;
			this->textBoxLengthTo->Enabled = false;
			this->textBoxLengthTo->Location = System::Drawing::Point(245, 6);
			this->textBoxLengthTo->Name = L"textBoxLengthTo";
			this->textBoxLengthTo->Size = System::Drawing::Size(156, 27);
			this->textBoxLengthTo->TabIndex = 4;
			// 
			// lblTo
			// 
			this->lblTo->AutoSize = true;
			this->lblTo->Location = System::Drawing::Point(211, 9);
			this->lblTo->Name = L"lblTo";
			this->lblTo->Size = System::Drawing::Size(28, 19);
			this->lblTo->TabIndex = 3;
			this->lblTo->Text = L"To:";
			// 
			// lblFrom
			// 
			this->lblFrom->AutoSize = true;
			this->lblFrom->Location = System::Drawing::Point(4, 9);
			this->lblFrom->Name = L"lblFrom";
			this->lblFrom->Size = System::Drawing::Size(47, 19);
			this->lblFrom->TabIndex = 1;
			this->lblFrom->Text = L"From:";
			// 
			// textBoxLengthFrom
			// 
			this->textBoxLengthFrom->BackColor = System::Drawing::SystemColors::ControlLight;
			this->textBoxLengthFrom->Location = System::Drawing::Point(57, 6);
			this->textBoxLengthFrom->Name = L"textBoxLengthFrom";
			this->textBoxLengthFrom->Size = System::Drawing::Size(141, 27);
			this->textBoxLengthFrom->TabIndex = 2;
			this->textBoxLengthFrom->TextChanged += gcnew System::EventHandler(this, &Calculator::TextBoxLengthFrom_TextChanged);
			// 
			// tabPageWeight
			// 
			this->tabPageWeight->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->tabPageWeight->Controls->Add(this->listBoxWeightTo);
			this->tabPageWeight->Controls->Add(this->listBoxWeightFrom);
			this->tabPageWeight->Controls->Add(this->textBoxWeightTo);
			this->tabPageWeight->Controls->Add(this->textBoxWeightFrom);
			this->tabPageWeight->Controls->Add(this->label2);
			this->tabPageWeight->Controls->Add(this->label1);
			this->tabPageWeight->Location = System::Drawing::Point(4, 28);
			this->tabPageWeight->Name = L"tabPageWeight";
			this->tabPageWeight->Padding = System::Windows::Forms::Padding(3);
			this->tabPageWeight->Size = System::Drawing::Size(407, 251);
			this->tabPageWeight->TabIndex = 1;
			this->tabPageWeight->Text = L"Weight";
			// 
			// listBoxWeightTo
			// 
			this->listBoxWeightTo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(147)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(171)));
			this->listBoxWeightTo->FormattingEnabled = true;
			this->listBoxWeightTo->ItemHeight = 19;
			this->listBoxWeightTo->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Kilogram", L"Gram", L"Milligram", L"Pound",
					L"Stone", L"Ounce"
			});
			this->listBoxWeightTo->Location = System::Drawing::Point(215, 39);
			this->listBoxWeightTo->Name = L"listBoxWeightTo";
			this->listBoxWeightTo->Size = System::Drawing::Size(186, 194);
			this->listBoxWeightTo->TabIndex = 6;
			// 
			// listBoxWeightFrom
			// 
			this->listBoxWeightFrom->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(147)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)), static_cast<System::Int32>(static_cast<System::Byte>(171)));
			this->listBoxWeightFrom->FormattingEnabled = true;
			this->listBoxWeightFrom->ItemHeight = 19;
			this->listBoxWeightFrom->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Kilogram", L"Gram", L"Milligram", L"Pound",
					L"Stone", L"Ounce"
			});
			this->listBoxWeightFrom->Location = System::Drawing::Point(8, 39);
			this->listBoxWeightFrom->Name = L"listBoxWeightFrom";
			this->listBoxWeightFrom->Size = System::Drawing::Size(190, 194);
			this->listBoxWeightFrom->TabIndex = 6;
			// 
			// textBoxWeightTo
			// 
			this->textBoxWeightTo->BackColor = System::Drawing::SystemColors::ControlLight;
			this->textBoxWeightTo->Enabled = false;
			this->textBoxWeightTo->Location = System::Drawing::Point(245, 6);
			this->textBoxWeightTo->Name = L"textBoxWeightTo";
			this->textBoxWeightTo->Size = System::Drawing::Size(156, 27);
			this->textBoxWeightTo->TabIndex = 8;
			// 
			// textBoxWeightFrom
			// 
			this->textBoxWeightFrom->BackColor = System::Drawing::SystemColors::ControlLight;
			this->textBoxWeightFrom->Location = System::Drawing::Point(57, 6);
			this->textBoxWeightFrom->Name = L"textBoxWeightFrom";
			this->textBoxWeightFrom->Size = System::Drawing::Size(141, 27);
			this->textBoxWeightFrom->TabIndex = 6;
			this->textBoxWeightFrom->TextChanged += gcnew System::EventHandler(this, &Calculator::TextBoxWeightFrom_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(4, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 19);
			this->label2->TabIndex = 5;
			this->label2->Text = L"From:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(211, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(28, 19);
			this->label1->TabIndex = 7;
			this->label1->Text = L"To:";
			// 
			// tabPageVolume
			// 
			this->tabPageVolume->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->tabPageVolume->Controls->Add(this->listBoxVolumeTo);
			this->tabPageVolume->Controls->Add(this->listBoxVolumeFrom);
			this->tabPageVolume->Controls->Add(this->textBoxVolumeTo);
			this->tabPageVolume->Controls->Add(this->textBoxVolumeFrom);
			this->tabPageVolume->Controls->Add(this->label4);
			this->tabPageVolume->Controls->Add(this->label3);
			this->tabPageVolume->Location = System::Drawing::Point(4, 28);
			this->tabPageVolume->Name = L"tabPageVolume";
			this->tabPageVolume->Size = System::Drawing::Size(407, 251);
			this->tabPageVolume->TabIndex = 2;
			this->tabPageVolume->Text = L"Volume";
			// 
			// listBoxVolumeTo
			// 
			this->listBoxVolumeTo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(147)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(171)));
			this->listBoxVolumeTo->FormattingEnabled = true;
			this->listBoxVolumeTo->ItemHeight = 19;
			this->listBoxVolumeTo->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Litre", L"Millilitre", L"Pint", L"Cubic Metre",
					L"Cubic Centimetre"
			});
			this->listBoxVolumeTo->Location = System::Drawing::Point(215, 39);
			this->listBoxVolumeTo->Name = L"listBoxVolumeTo";
			this->listBoxVolumeTo->Size = System::Drawing::Size(186, 194);
			this->listBoxVolumeTo->TabIndex = 7;
			// 
			// listBoxVolumeFrom
			// 
			this->listBoxVolumeFrom->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(147)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)), static_cast<System::Int32>(static_cast<System::Byte>(171)));
			this->listBoxVolumeFrom->FormattingEnabled = true;
			this->listBoxVolumeFrom->ItemHeight = 19;
			this->listBoxVolumeFrom->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Litre", L"Millilitre", L"Pint", L"Cubic Metre",
					L"Cubic Centimetre"
			});
			this->listBoxVolumeFrom->Location = System::Drawing::Point(8, 39);
			this->listBoxVolumeFrom->Name = L"listBoxVolumeFrom";
			this->listBoxVolumeFrom->Size = System::Drawing::Size(190, 194);
			this->listBoxVolumeFrom->TabIndex = 7;
			// 
			// textBoxVolumeTo
			// 
			this->textBoxVolumeTo->BackColor = System::Drawing::SystemColors::ControlLight;
			this->textBoxVolumeTo->Enabled = false;
			this->textBoxVolumeTo->Location = System::Drawing::Point(245, 6);
			this->textBoxVolumeTo->Name = L"textBoxVolumeTo";
			this->textBoxVolumeTo->Size = System::Drawing::Size(156, 27);
			this->textBoxVolumeTo->TabIndex = 12;
			// 
			// textBoxVolumeFrom
			// 
			this->textBoxVolumeFrom->BackColor = System::Drawing::SystemColors::ControlLight;
			this->textBoxVolumeFrom->Location = System::Drawing::Point(57, 6);
			this->textBoxVolumeFrom->Name = L"textBoxVolumeFrom";
			this->textBoxVolumeFrom->Size = System::Drawing::Size(141, 27);
			this->textBoxVolumeFrom->TabIndex = 10;
			this->textBoxVolumeFrom->TextChanged += gcnew System::EventHandler(this, &Calculator::TextBoxVolumeFrom_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(211, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(28, 19);
			this->label4->TabIndex = 11;
			this->label4->Text = L"To:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(4, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(47, 19);
			this->label3->TabIndex = 9;
			this->label3->Text = L"From:";
			// 
			// tabPageSpeed
			// 
			this->tabPageSpeed->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->tabPageSpeed->Controls->Add(this->listBoxSpeedTo);
			this->tabPageSpeed->Controls->Add(this->listBoxSpeedFrom);
			this->tabPageSpeed->Controls->Add(this->textBoxSpeedTo);
			this->tabPageSpeed->Controls->Add(this->textBoxSpeedFrom);
			this->tabPageSpeed->Controls->Add(this->label6);
			this->tabPageSpeed->Controls->Add(this->label5);
			this->tabPageSpeed->Location = System::Drawing::Point(4, 28);
			this->tabPageSpeed->Name = L"tabPageSpeed";
			this->tabPageSpeed->Size = System::Drawing::Size(407, 251);
			this->tabPageSpeed->TabIndex = 3;
			this->tabPageSpeed->Text = L"Speed";
			// 
			// listBoxSpeedTo
			// 
			this->listBoxSpeedTo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(147)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(171)));
			this->listBoxSpeedTo->FormattingEnabled = true;
			this->listBoxSpeedTo->ItemHeight = 19;
			this->listBoxSpeedTo->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Mile per Hour", L"Kilometre per Hour" });
			this->listBoxSpeedTo->Location = System::Drawing::Point(215, 39);
			this->listBoxSpeedTo->Name = L"listBoxSpeedTo";
			this->listBoxSpeedTo->Size = System::Drawing::Size(186, 194);
			this->listBoxSpeedTo->TabIndex = 13;
			// 
			// listBoxSpeedFrom
			// 
			this->listBoxSpeedFrom->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(147)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)), static_cast<System::Int32>(static_cast<System::Byte>(171)));
			this->listBoxSpeedFrom->FormattingEnabled = true;
			this->listBoxSpeedFrom->ItemHeight = 19;
			this->listBoxSpeedFrom->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Mile per Hour", L"Kilometre per Hour" });
			this->listBoxSpeedFrom->Location = System::Drawing::Point(8, 39);
			this->listBoxSpeedFrom->Name = L"listBoxSpeedFrom";
			this->listBoxSpeedFrom->Size = System::Drawing::Size(190, 194);
			this->listBoxSpeedFrom->TabIndex = 7;
			// 
			// textBoxSpeedTo
			// 
			this->textBoxSpeedTo->BackColor = System::Drawing::SystemColors::ControlLight;
			this->textBoxSpeedTo->Enabled = false;
			this->textBoxSpeedTo->Location = System::Drawing::Point(245, 6);
			this->textBoxSpeedTo->Name = L"textBoxSpeedTo";
			this->textBoxSpeedTo->Size = System::Drawing::Size(156, 27);
			this->textBoxSpeedTo->TabIndex = 12;
			// 
			// textBoxSpeedFrom
			// 
			this->textBoxSpeedFrom->BackColor = System::Drawing::SystemColors::ControlLight;
			this->textBoxSpeedFrom->Location = System::Drawing::Point(57, 6);
			this->textBoxSpeedFrom->Name = L"textBoxSpeedFrom";
			this->textBoxSpeedFrom->Size = System::Drawing::Size(141, 27);
			this->textBoxSpeedFrom->TabIndex = 10;
			this->textBoxSpeedFrom->TextChanged += gcnew System::EventHandler(this, &Calculator::TextBoxSpeedFrom_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(211, 9);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(28, 19);
			this->label6->TabIndex = 11;
			this->label6->Text = L"To:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(4, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(47, 19);
			this->label5->TabIndex = 9;
			this->label5->Text = L"From:";
			// 
			// tabPageTemperature
			// 
			this->tabPageTemperature->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(174)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->tabPageTemperature->Controls->Add(this->listBoxTempTo);
			this->tabPageTemperature->Controls->Add(this->listBoxTempFrom);
			this->tabPageTemperature->Controls->Add(this->textBoxTempTo);
			this->tabPageTemperature->Controls->Add(this->textBoxTempFrom);
			this->tabPageTemperature->Controls->Add(this->label8);
			this->tabPageTemperature->Controls->Add(this->label7);
			this->tabPageTemperature->Location = System::Drawing::Point(4, 28);
			this->tabPageTemperature->Name = L"tabPageTemperature";
			this->tabPageTemperature->Size = System::Drawing::Size(407, 251);
			this->tabPageTemperature->TabIndex = 4;
			this->tabPageTemperature->Text = L"Temperature";
			// 
			// listBoxTempTo
			// 
			this->listBoxTempTo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(147)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(171)));
			this->listBoxTempTo->FormattingEnabled = true;
			this->listBoxTempTo->ItemHeight = 19;
			this->listBoxTempTo->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Celcius", L"Fahrenheit", L"Kelvin" });
			this->listBoxTempTo->Location = System::Drawing::Point(215, 39);
			this->listBoxTempTo->Name = L"listBoxTempTo";
			this->listBoxTempTo->Size = System::Drawing::Size(186, 194);
			this->listBoxTempTo->TabIndex = 7;
			// 
			// listBoxTempFrom
			// 
			this->listBoxTempFrom->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(147)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(171)));
			this->listBoxTempFrom->FormattingEnabled = true;
			this->listBoxTempFrom->ItemHeight = 19;
			this->listBoxTempFrom->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Celcius", L"Fahrenheit", L"Kelvin" });
			this->listBoxTempFrom->Location = System::Drawing::Point(8, 39);
			this->listBoxTempFrom->Name = L"listBoxTempFrom";
			this->listBoxTempFrom->Size = System::Drawing::Size(190, 194);
			this->listBoxTempFrom->TabIndex = 7;
			// 
			// textBoxTempTo
			// 
			this->textBoxTempTo->BackColor = System::Drawing::SystemColors::ControlLight;
			this->textBoxTempTo->Enabled = false;
			this->textBoxTempTo->Location = System::Drawing::Point(245, 6);
			this->textBoxTempTo->Name = L"textBoxTempTo";
			this->textBoxTempTo->Size = System::Drawing::Size(156, 27);
			this->textBoxTempTo->TabIndex = 12;
			// 
			// textBoxTempFrom
			// 
			this->textBoxTempFrom->BackColor = System::Drawing::SystemColors::ControlLight;
			this->textBoxTempFrom->Location = System::Drawing::Point(57, 6);
			this->textBoxTempFrom->Name = L"textBoxTempFrom";
			this->textBoxTempFrom->Size = System::Drawing::Size(141, 27);
			this->textBoxTempFrom->TabIndex = 10;
			this->textBoxTempFrom->TextChanged += gcnew System::EventHandler(this, &Calculator::TextBoxTempFrom_TextChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(211, 9);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(28, 19);
			this->label8->TabIndex = 11;
			this->label8->Text = L"To:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(4, 9);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(47, 19);
			this->label7->TabIndex = 9;
			this->label7->Text = L"From:";
			// 
			// tabPageAngles
			// 
			this->tabPageAngles->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(203)));
			this->tabPageAngles->Controls->Add(this->listBoxMathsTo);
			this->tabPageAngles->Controls->Add(this->listBoxMathsFrom);
			this->tabPageAngles->Controls->Add(this->textBoxMathsTo);
			this->tabPageAngles->Controls->Add(this->textBoxMathsFrom);
			this->tabPageAngles->Controls->Add(this->label10);
			this->tabPageAngles->Controls->Add(this->label9);
			this->tabPageAngles->Location = System::Drawing::Point(4, 28);
			this->tabPageAngles->Name = L"tabPageAngles";
			this->tabPageAngles->Size = System::Drawing::Size(407, 251);
			this->tabPageAngles->TabIndex = 5;
			this->tabPageAngles->Text = L"Angles";
			// 
			// listBoxMathsTo
			// 
			this->listBoxMathsTo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(147)), static_cast<System::Int32>(static_cast<System::Byte>(194)),
				static_cast<System::Int32>(static_cast<System::Byte>(171)));
			this->listBoxMathsTo->FormattingEnabled = true;
			this->listBoxMathsTo->ItemHeight = 19;
			this->listBoxMathsTo->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Degrees", L"Radians" });
			this->listBoxMathsTo->Location = System::Drawing::Point(215, 39);
			this->listBoxMathsTo->Name = L"listBoxMathsTo";
			this->listBoxMathsTo->Size = System::Drawing::Size(186, 194);
			this->listBoxMathsTo->TabIndex = 7;
			// 
			// listBoxMathsFrom
			// 
			this->listBoxMathsFrom->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(147)),
				static_cast<System::Int32>(static_cast<System::Byte>(194)), static_cast<System::Int32>(static_cast<System::Byte>(171)));
			this->listBoxMathsFrom->FormattingEnabled = true;
			this->listBoxMathsFrom->ItemHeight = 19;
			this->listBoxMathsFrom->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Degrees", L"Radians" });
			this->listBoxMathsFrom->Location = System::Drawing::Point(8, 39);
			this->listBoxMathsFrom->Name = L"listBoxMathsFrom";
			this->listBoxMathsFrom->Size = System::Drawing::Size(190, 194);
			this->listBoxMathsFrom->TabIndex = 7;
			// 
			// textBoxMathsTo
			// 
			this->textBoxMathsTo->BackColor = System::Drawing::SystemColors::ControlLight;
			this->textBoxMathsTo->Enabled = false;
			this->textBoxMathsTo->Location = System::Drawing::Point(245, 6);
			this->textBoxMathsTo->Name = L"textBoxMathsTo";
			this->textBoxMathsTo->Size = System::Drawing::Size(156, 27);
			this->textBoxMathsTo->TabIndex = 12;
			// 
			// textBoxMathsFrom
			// 
			this->textBoxMathsFrom->BackColor = System::Drawing::SystemColors::ControlLight;
			this->textBoxMathsFrom->Location = System::Drawing::Point(56, 6);
			this->textBoxMathsFrom->Name = L"textBoxMathsFrom";
			this->textBoxMathsFrom->Size = System::Drawing::Size(142, 27);
			this->textBoxMathsFrom->TabIndex = 10;
			this->textBoxMathsFrom->TextChanged += gcnew System::EventHandler(this, &Calculator::TextBoxMathsFrom_TextChanged);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(211, 9);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(28, 19);
			this->label10->TabIndex = 11;
			this->label10->Text = L"To:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(4, 9);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(47, 19);
			this->label9->TabIndex = 9;
			this->label9->Text = L"From:";
			// 
			// lblBinaryConversion
			// 
			this->lblBinaryConversion->AutoSize = true;
			this->lblBinaryConversion->Location = System::Drawing::Point(9, 125);
			this->lblBinaryConversion->Name = L"lblBinaryConversion";
			this->lblBinaryConversion->Size = System::Drawing::Size(85, 19);
			this->lblBinaryConversion->TabIndex = 21;
			this->lblBinaryConversion->Text = L"Conversion:";
			// 
			// lblHexConversions
			// 
			this->lblHexConversions->AutoSize = true;
			this->lblHexConversions->Location = System::Drawing::Point(9, 125);
			this->lblHexConversions->Name = L"lblHexConversions";
			this->lblHexConversions->Size = System::Drawing::Size(85, 19);
			this->lblHexConversions->TabIndex = 22;
			this->lblHexConversions->Text = L"Conversion:";
			// 
			// lblDecimalConversion
			// 
			this->lblDecimalConversion->AutoSize = true;
			this->lblDecimalConversion->Location = System::Drawing::Point(9, 125);
			this->lblDecimalConversion->Name = L"lblDecimalConversion";
			this->lblDecimalConversion->Size = System::Drawing::Size(85, 19);
			this->lblDecimalConversion->TabIndex = 22;
			this->lblDecimalConversion->Text = L"Conversion:";
			// 
			// Calculator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->ClientSize = System::Drawing::Size(460, 606);
			this->Controls->Add(this->tabControlApp);
			this->Font = (gcnew System::Drawing::Font(L"Calibri Light", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Calculator";
			this->Text = L"Calculator";
			this->tabControlApp->ResumeLayout(false);
			this->tabPageCalculator->ResumeLayout(false);
			this->tabPageConversions->ResumeLayout(false);
			this->tabControlBaseConversions->ResumeLayout(false);
			this->tabPageDecimal->ResumeLayout(false);
			this->tabPageDecimal->PerformLayout();
			this->tabPageBinary->ResumeLayout(false);
			this->tabPageBinary->PerformLayout();
			this->tabPageHex->ResumeLayout(false);
			this->tabPageHex->PerformLayout();
			this->tabControlConversions->ResumeLayout(false);
			this->tabPageLength->ResumeLayout(false);
			this->tabPageLength->PerformLayout();
			this->tabPageWeight->ResumeLayout(false);
			this->tabPageWeight->PerformLayout();
			this->tabPageVolume->ResumeLayout(false);
			this->tabPageVolume->PerformLayout();
			this->tabPageSpeed->ResumeLayout(false);
			this->tabPageSpeed->PerformLayout();
			this->tabPageTemperature->ResumeLayout(false);
			this->tabPageTemperature->PerformLayout();
			this->tabPageAngles->ResumeLayout(false);
			this->tabPageAngles->PerformLayout();
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

	private: Void btnDecimal_Click(System::Object^ sender, System::EventArgs^ e);
	private: Void btnExponential_Click(System::Object^ sender, System::EventArgs^ e);
	private: Void btnModulus_Click(System::Object^ sender, System::EventArgs^ e);
	private: Void btnSqrRt_Click(System::Object^ sender, System::EventArgs^ e);
	private: Void TextBoxLengthFrom_TextChanged(System::Object^ sender, System::EventArgs^ e);
	private: Void TextBoxWeightFrom_TextChanged(System::Object^ sender, System::EventArgs^ e);
	private: Void TextBoxVolumeFrom_TextChanged(System::Object^ sender, System::EventArgs^ e);
	private: Void TextBoxSpeedFrom_TextChanged(System::Object^ sender, System::EventArgs^ e);
	private: Void TextBoxTempFrom_TextChanged(System::Object^ sender, System::EventArgs^ e);
	private: Void TextBoxMathsFrom_TextChanged(System::Object^ sender, System::EventArgs^ e);
	private: Void ButtonConvertDecimal_Click(System::Object^ sender, System::EventArgs^ e);
	private: Void ButtonConvertBinary_Click(System::Object^ sender, System::EventArgs^ e);
	private: Void ButtonConvertHex_Click(System::Object^ sender, System::EventArgs^ e);
};
}