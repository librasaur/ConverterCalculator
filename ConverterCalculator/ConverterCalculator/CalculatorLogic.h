#pragma once
#include <string>
#include <stack>

namespace ConverterCalculator
{
	ref class CalculatorLogic
	{
	public:
		std::string inToPost(std::string expression);
		bool isOperator(char token);
		int getWeight(std::string op);
		bool hasHigherPrecedence(std::string op1, std::string op2);
		bool isRightAssociative(std::string op);
		float calculate(float num1, float num2, char op);
	};
}