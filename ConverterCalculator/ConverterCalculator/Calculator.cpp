#include "Calculator.h"
#include "CalculatorLogic.h"
#include "ConversionLogic.h"
#include <msclr/marshal_cppstd.h>
#include <string>

using namespace ConverterCalculator;
using namespace System;
using namespace System::Windows::Forms;

int main(array<System::String ^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Application::Run(gcnew Calculator());

	return 0;
}


void Calculator::UpdateOutput(String^ textToAdd)
{
	if (lblOutput->Text == "0" || lblOutput->Text == "Error")
		lblOutput->Text = textToAdd;
	else
		lblOutput->Text += textToAdd;
}


//
// == CALCULATOR ==
//
 
void Calculator::btnOne_Click(System::Object^ sender, System::EventArgs^ e)
{
	UpdateOutput("1");
	operatorJustAdded = false;
}

void Calculator::btnTwo_Click(System::Object^ sender, System::EventArgs^ e)
{
	UpdateOutput("2");
	operatorJustAdded = false;
}

void Calculator::btnThree_Click(System::Object^ sender, System::EventArgs^ e)
{
	UpdateOutput("3");
	operatorJustAdded = false;
}

void Calculator::btnFour_Click(System::Object^ sender, System::EventArgs^ e)
{
	UpdateOutput("4");
	operatorJustAdded = false;
}

void Calculator::btnFive_Click(System::Object^ sender, System::EventArgs^ e)
{
	UpdateOutput("5");
	operatorJustAdded = false;
}

void Calculator::btnSix_Click(System::Object^ sender, System::EventArgs^ e)
{
	UpdateOutput("6");
	operatorJustAdded = false;
}

void Calculator::btnSeven_Click(System::Object^ sender, System::EventArgs^ e)
{
	UpdateOutput("7");
	operatorJustAdded = false;
}

void Calculator::btnEight_Click(System::Object^ sender, System::EventArgs^ e)
{
	UpdateOutput("8");
	operatorJustAdded = false;
}

void Calculator::btnNine_Click(System::Object^ sender, System::EventArgs^ e)
{
	UpdateOutput("9");
	operatorJustAdded = false;
}

void Calculator::btnZero_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (lblOutput->Text != "0")
	{
		lblOutput->Text += "0";
		operatorJustAdded = false;
	}
}

void Calculator::btnMultiply_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (lblOutput->Text != "0" && !operatorJustAdded)
	{
		operatorJustAdded = true;
		decimalJustAdded = false;

		lblOutput->Text += "*";
	}
}

void Calculator::btnDivide_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (lblOutput->Text != "0" && !operatorJustAdded)
	{
		operatorJustAdded = true;
		decimalJustAdded = false;

		lblOutput->Text += "/";
	}
}

void Calculator::btnAdd_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (lblOutput->Text != "0" && !operatorJustAdded)
	{
		operatorJustAdded = true;
		decimalJustAdded = false;

		lblOutput->Text += "+";
	}
}

void Calculator::btnSubtract_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (lblOutput->Text == "0")
	{
		UpdateOutput("-");
	}
	else if (!operatorJustAdded)
	{
		operatorJustAdded = true;
		decimalJustAdded = false;

		lblOutput->Text += "-";
	}
}

void Calculator::btnClear_Click(System::Object^ sender, System::EventArgs^ e)
{
	lblOutput->Text = "0";
}

void Calculator::btnDecimal_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (lblOutput->Text == "0")
	{
		lblOutput->Text += ".";
		decimalJustAdded = true;
	}
	else if (operatorJustAdded)
	{
		lblOutput->Text += "0.";
		decimalJustAdded = true;
	}
	else if (!decimalJustAdded)
	{
		lblOutput->Text += ".";
		decimalJustAdded = true;
	}
}

void Calculator::btnExponential_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (lblOutput->Text != "0" && !operatorJustAdded)
	{
		operatorJustAdded = true;
		decimalJustAdded = false;

		lblOutput->Text += "^";
	}
}

void Calculator::btnModulus_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (lblOutput->Text != "0" && !operatorJustAdded)
	{
		operatorJustAdded = true;
		decimalJustAdded = false;

		lblOutput->Text += "%";
	}
}

void Calculator::btnSqrRt_Click(System::Object^ sender, System::EventArgs^ e)
{
	UpdateOutput("V");
}

void Calculator::btnEquals_Click(System::Object^ sender, System::EventArgs^ e)
{
	// Display previous expression
	lblExpression->Text = lblOutput->Text;

	// Get input
	msclr::interop::marshal_context context;
	std::string input = context.marshal_as<std::string>(lblOutput->Text);

	// Evaluate expression
	CalculatorLogic calculatorLogic{};
	std::string result = calculatorLogic.inToPost(input);

	// Converts std::string back to System::String and displays in label
	lblOutput->Text = gcnew String(result.c_str());

	decimalJustAdded = false;
}


//
// == CONVERSIONS ==
//

// = LENGTH =

void Calculator::TextBoxLengthFrom_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (textBoxLengthFrom->Text != "")
	{
		// Get value
		msclr::interop::marshal_context context;
		std::string value = context.marshal_as<std::string>(textBoxLengthFrom->Text);

		// Get convertFrom
		std::string convertFrom = context.marshal_as<std::string>(listBoxLengthFrom->SelectedItem->ToString());

		// Get convertTo
		std::string convertTo = context.marshal_as<std::string>(listBoxLengthTo->SelectedItem->ToString());

		// Do conversion
		ConversionLogic conversionLogic{};
		std::string result = conversionLogic.convertValueLength(value, convertFrom, convertTo);

		textBoxLengthTo->Text = gcnew String(result.c_str());
	}
}

// = WEIGHT =

void Calculator::TextBoxWeightFrom_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (textBoxWeightFrom->Text != "")
	{
		// Get value
		msclr::interop::marshal_context context;
		std::string value = context.marshal_as<std::string>(textBoxWeightFrom->Text);

		// Get convertFrom
		std::string convertFrom = context.marshal_as<std::string>(listBoxWeightFrom->SelectedItem->ToString());

		// Get convertTo
		std::string convertTo = context.marshal_as<std::string>(listBoxWeightTo->SelectedItem->ToString());

		// Do conversion
		ConversionLogic conversionLogic{};
		std::string result = conversionLogic.convertValueWeight(value, convertFrom, convertTo);

		textBoxWeightTo->Text = gcnew String(result.c_str());
	}
}

// = VOLUME =

void Calculator::TextBoxVolumeFrom_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (textBoxVolumeFrom->Text != "")
	{
		// Get value
		msclr::interop::marshal_context context;
		std::string value = context.marshal_as<std::string>(textBoxVolumeFrom->Text);

		// Get convertFrom
		std::string convertFrom = context.marshal_as<std::string>(listBoxVolumeFrom->SelectedItem->ToString());

		// Get convertTo
		std::string convertTo = context.marshal_as<std::string>(listBoxVolumeTo->SelectedItem->ToString());

		// Do conversion
		ConversionLogic conversionLogic{};
		std::string result = conversionLogic.convertValueVolume(value, convertFrom, convertTo);

		textBoxVolumeTo->Text = gcnew String(result.c_str());
	}
}

// = SPEED =

void Calculator::TextBoxSpeedFrom_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (textBoxSpeedFrom->Text != "")
	{
		// Get value
		msclr::interop::marshal_context context;
		std::string value = context.marshal_as<std::string>(textBoxSpeedFrom->Text);

		// Get convertFrom
		std::string convertFrom = context.marshal_as<std::string>(listBoxSpeedFrom->SelectedItem->ToString());

		// Get convertTo
		std::string convertTo = context.marshal_as<std::string>(listBoxSpeedTo->SelectedItem->ToString());

		// Do conversion
		ConversionLogic conversionLogic{};
		std::string result = conversionLogic.convertValueSpeed(value, convertFrom, convertTo);

		textBoxSpeedTo->Text = gcnew String(result.c_str());
	}
}

// = TEMPERATURE =

void Calculator::TextBoxTempFrom_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (textBoxTempFrom->Text != "")
	{
		// Get value
		msclr::interop::marshal_context context;
		std::string value = context.marshal_as<std::string>(textBoxTempFrom->Text);

		// Get convertFrom
		std::string convertFrom = context.marshal_as<std::string>(listBoxTempFrom->SelectedItem->ToString());

		// Get convertTo
		std::string convertTo = context.marshal_as<std::string>(listBoxTempTo->SelectedItem->ToString());

		// Do conversion
		ConversionLogic conversionLogic{};
		std::string result = conversionLogic.convertValueTemp(value, convertFrom, convertTo);

		textBoxTempTo->Text = gcnew String(result.c_str());
	}
}

// = MATHS =

void Calculator::TextBoxMathsFrom_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (textBoxMathsFrom->Text != "")
	{
		// Get value
		msclr::interop::marshal_context context;
		std::string value = context.marshal_as<std::string>(textBoxMathsFrom->Text);

		// Get convertFrom
		std::string convertFrom = context.marshal_as<std::string>(listBoxMathsFrom->SelectedItem->ToString());

		// Get convertTo
		std::string convertTo = context.marshal_as<std::string>(listBoxMathsTo->SelectedItem->ToString());

		// Do conversion
		ConversionLogic conversionLogic{};
		std::string result = conversionLogic.convertValueMaths(value, convertFrom, convertTo);

		textBoxMathsTo->Text = gcnew String(result.c_str());
	}
}