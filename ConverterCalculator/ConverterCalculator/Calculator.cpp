#include "Calculator.h"
#include "CalculatorLogic.h"
#include <iostream>
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
	if (lblOutput->Text == "0")
		lblOutput->Text = textToAdd;
	else
		lblOutput->Text += textToAdd;
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
	if (lblOutput->Text != "0" && finishedCalculation)
		lblOutput->Text += "0";
}

void Calculator::btnMultiply_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (lblOutput->Text != "0" && finishedCalculation)
		lblOutput->Text += "x";
}

void Calculator::btnDivide_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (lblOutput->Text != "0" && finishedCalculation)
		lblOutput->Text += "÷";
}

void Calculator::btnAdd_Click(System::Object^ sender, System::EventArgs^ e)
{
	/*if (lblOutput->Text != "0")
	{
		firstNumber = lblOutput->Text;
		operation = '+';
		finishedCalculation = false;

		lblOutput->Text = "0";
	}*/

	if (lblOutput->Text != "0" && finishedCalculation)
		lblOutput->Text += "+";
}

void Calculator::btnSubtract_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (lblOutput->Text != "0")
		lblOutput->Text += "-";
}

void Calculator::btnClear_Click(System::Object^ sender, System::EventArgs^ e)
{
	lblOutput->Text = "0";
}

void Calculator::btnEquals_Click(System::Object^ sender, System::EventArgs^ e)
{
	/*CalculatorLogic calculatorLogic{};
	float result;

	secondNumber = lblOutput->Text;
	result = calculatorLogic.CalculateResult(firstNumber, secondNumber, operation);

	lblOutput->Text = Convert::ToString(result);
	finishedCalculation = true;*/

	CalculatorLogic calculatorLogic{};

	lblOutput->Text = calculatorLogic.InfixToPostfix(lblOutput->Text);
	//lblOutput->Text = "no";
	std::cout << "Calculated";
}

void Calculator::btnDecimal_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (lblOutput->Text != "0")
		lblOutput->Text += ".";
}

void Calculator::btnExponential_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (lblOutput->Text != "0")
		lblOutput->Text += "^";
}

void Calculator::btnLeftParen_Click(System::Object^ sender, System::EventArgs^ e)
{
	UpdateOutput("(");
}

void Calculator::btnRightParen_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (lblOutput->Text != "0")
		lblOutput->Text += ")";
}