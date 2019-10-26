#include "Calculator.h"
#include "CalculatorLogic.h"
#include <string>

using namespace ConverterCalculator;
using namespace System;
using namespace System::Windows::Forms;

int main(array<System::String ^> ^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Application::Run(gcnew Calculator());

	return 0;
}


void Calculator::UpdateOutput(String^ textToAdd)
{
	if (lblResult->Text == "0")
		lblResult->Text = textToAdd;
	else
		lblResult->Text += textToAdd;
}


void Calculator::CalculateResult(String^ stringExpression)
{
	//CalculatorLogic maths = CalculatorLogic();
}


// == INPUT BUTTON METHODS ==
 
void Calculator::btnOne_Click(System::Object^ sender, System::EventArgs^ e)
{
	UpdateOutput("1");
}

void Calculator::btnTwo_Click(System::Object^ sender, System::EventArgs^ e)
{
	UpdateOutput("2");
}

void Calculator::btnThree_Click(System::Object^ sender, System::EventArgs^ e)
{
	UpdateOutput("3");
}

void Calculator::btnFour_Click(System::Object^ sender, System::EventArgs^ e)
{
	UpdateOutput("4");
}

void Calculator::btnFive_Click(System::Object^ sender, System::EventArgs^ e)
{
	UpdateOutput("5");
}

void Calculator::btnSix_Click(System::Object^ sender, System::EventArgs^ e)
{
	UpdateOutput("6");
}

void Calculator::btnSeven_Click(System::Object^ sender, System::EventArgs^ e)
{
	UpdateOutput("7");
}

void Calculator::btnEight_Click(System::Object^ sender, System::EventArgs^ e)
{
	UpdateOutput("8");
}

void Calculator::btnNine_Click(System::Object^ sender, System::EventArgs^ e)
{
	UpdateOutput("9");
}

void Calculator::btnZero_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (lblResult->Text != "0")
		lblResult->Text += "0";
}

void Calculator::btnMultiply_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (lblResult->Text != "0")
		lblResult->Text += "x";
}

void Calculator::btnDivide_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (lblResult->Text != "0")
		lblResult->Text += "÷";
}

void Calculator::btnAdd_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (lblResult->Text != "0")
		lblResult->Text += "+";
}

void Calculator::btnSubtract_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (lblResult->Text != "0")
		lblResult->Text += "-";
}

void Calculator::btnClear_Click(System::Object^ sender, System::EventArgs^ e)
{
	lblResult->Text = "0";
}

void Calculator::btnEquals_Click(System::Object^ sender, System::EventArgs^ e)
{

}