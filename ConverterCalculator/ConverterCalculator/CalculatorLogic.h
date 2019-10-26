#pragma once

namespace ConverterCalculator
{
	using namespace System;

	ref class CalculatorLogic
	{
	public:
		int StringToInt(String^ stringToConvert);

		String^ InfixToPostfix(String^ stringExpression);
		int IsRightAssociative(char op);
		int GetOperatorPrecedence(char op);
		bool HasHigherPrecedence(char firstOp, char secondOp);
		bool HasEqualPrecedence(char firstOp, char secondOp);

		//float CalculateResult(String^ firstNum, String^ secondNum, char operation);

		int MultiplyNumbers(int firstNum, int secondNum);
		int DivideNumbers(int firstNum, int secondNum);
		int AddNumbers(int firstNum, int secondNum);
		int SubtractNumbers(int firstNum, int secondNum);

		float accumulator = 0;
	};
}