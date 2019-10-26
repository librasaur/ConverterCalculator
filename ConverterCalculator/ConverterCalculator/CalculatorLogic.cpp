#include "CalculatorLogic.h"
#include <string>
#include <queue>
#include <stack>
#include <msclr/marshal_cppstd.h>

using namespace ConverterCalculator;

int CalculatorLogic::StringToInt(String^ stringToConvert)
{
	return int::Parse(stringToConvert);
}

String^ CalculatorLogic::InfixToPostfix(String^ _stringExpression)
{
	// Convert System::String to std::string
	msclr::interop::marshal_context context;
	std::string infix = context.marshal_as<std::string>(_stringExpression);

	const std::string operands = "1234567890";
	const std::string operators = "x÷+-";

	std::stack<char> stack;
	std::string postfix = "";

	for (int c = 0; c < infix.length(); c++)
	{

		if (operands.find(infix[c]))
		{
			postfix += infix[c];
		}

		else if (operators.find(infix[c]))
		{
			while (!stack.empty() && (HasEqualPrecedence(stack.top(), infix[c]) || (HasEqualPrecedence(stack.top(), infix[c]) && IsRightAssociative(stack.top()))) && (stack.top() != '('))
			{
				postfix += stack.top();
				stack.pop();
			}
			stack.push(infix[c]);
		}

		else if (infix[c] == '(')
		{
			stack.push(infix[c]);
		}

		else if (infix[c] == ')')
		{
			while (!stack.empty() && stack.top() != '(')
			{
				postfix += stack.top();
				stack.pop();
			}
			stack.pop();
		}
	}

	while (!stack.empty())
	{
		postfix += stack.top();
		stack.pop();
	}

	String^ postfixResult = gcnew String(postfix.c_str());
	return postfixResult;
}


int CalculatorLogic::IsRightAssociative(char op)
{
	if (op == '^')
		return true;
	else
		return false;
}


int CalculatorLogic::GetOperatorPrecedence(char op)
{
	int precedence = -1;

	switch (op)
	{
	case '+':
	case '-':
		precedence = 1;
		break;

	case '*':
	case '÷':
		precedence = 2;
		break;

	case '^':
		precedence = 3;
		break;
	}

	return precedence;
}


bool CalculatorLogic::HasHigherPrecedence(char firstOp, char secondOp)
{
	int firstOpPrecedence = GetOperatorPrecedence(firstOp);
	int secondOpPrecedence = GetOperatorPrecedence(secondOp);

	if (firstOpPrecedence > secondOpPrecedence) return true;
	else return false;
}


bool CalculatorLogic::HasEqualPrecedence(char firstOp, char secondOp)
{
	int firstOpPrecedence = GetOperatorPrecedence(firstOp);
	int secondOpPrecedence = GetOperatorPrecedence(secondOp);

	if (firstOpPrecedence == secondOpPrecedence) return true;
	else return false;
}


//float CalculatorLogic::CalculateResult(String^ _firstNumber, String^ _secondNumber, char operation)
//{
//	int firstNumber = StringToInt(_firstNumber);
//	int secondNumber = StringToInt(_secondNumber);
//
//	float result = 0;
//
//	switch (operation)
//	{
//	case 'x':
//		result = MultiplyNumbers(firstNumber, secondNumber);
//		break;
//
//	case '÷':
//		result = DivideNumbers(firstNumber, secondNumber);
//		break;
//
//	case '+':
//		result = AddNumbers(firstNumber, secondNumber);
//		break;
//
//	case '-':
//		result = SubtractNumbers(firstNumber, secondNumber);
//		break;
//
//	default:
//		break;
//	}
//
//	return result;
//}

// == MATHEMATIC LOGIC METHODS ==

int CalculatorLogic::MultiplyNumbers(int firstNum, int secondNum)
{
	return firstNum * secondNum;
}

int CalculatorLogic::DivideNumbers(int firstNum, int secondNum)
{
	return firstNum / secondNum;
}

int CalculatorLogic::AddNumbers(int firstNum, int secondNum)
{
	return firstNum + secondNum;
}

int CalculatorLogic::SubtractNumbers(int firstNum, int secondNum)
{
	return firstNum - secondNum;
}