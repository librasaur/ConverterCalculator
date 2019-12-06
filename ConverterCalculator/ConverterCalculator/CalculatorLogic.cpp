#include "CalculatorLogic.h"
#include <string>
#include <stack>
#include <cmath>
#include <iostream>

using namespace ConverterCalculator;

enum TokenType
{
	TOKENTYPE_OPERAND,
	TOKENTYPE_OPERATOR
};

class Token
{
public:
	std::string value;
	TokenType type;

	Token(std::string _value, TokenType _type)
	{
		this->value = _value;
		this->type = _type;
	}
};

std::string CalculatorLogic::inToPost(std::string expression)
{
	//
	// SPLIT STRING INTO STACK
	//

	std::stack<Token> infixStackTemp;
	std::string digit = "";

	bool error = false;
	bool containsDecimal = false;
	bool operatorJustFound = false;
	bool sqrRoot = false;

	for (int i = 0; i < expression.length(); i++)
	{
		if (expression[i] == 'V')
		{
			sqrRoot = true;
		}

		// Check if first digit is negative
		else if (i == 0 && expression[i] == '-')
		{
			digit += expression[i];
		}

		// Create digit
		else if (isdigit(expression[i]) || (expression[i] == '.' && !containsDecimal))
		{
			operatorJustFound = false;

			if (expression[i] == '.') containsDecimal = true; // Stops user using double decimals

			digit += expression[i];

			if (i == expression.length() - 1) // If it's reached the end of the evaluation
			{
				if (sqrRoot)
				{
					int sqrDigit = std::stoi(digit);

					infixStackTemp.push(Token(std::to_string(sqrt(sqrDigit)), TOKENTYPE_OPERAND));
					sqrRoot = false;
				}
				else
				{
					infixStackTemp.push(Token(digit, TOKENTYPE_OPERAND));
				}
			}
		}

		// Add operator
		else if ((isOperator(expression[i]) || expression[i] == ')') && operatorJustFound == false)
		{
			operatorJustFound = true;

			if (!sqrRoot)
			{
				infixStackTemp.push(Token(digit, TOKENTYPE_OPERAND));
			}
			else if (sqrRoot)
			{
				int sqrDigit = std::stoi(digit);

				infixStackTemp.push(Token(std::to_string(sqrt(sqrDigit)), TOKENTYPE_OPERAND));
				sqrRoot = false;
			}

			infixStackTemp.push(Token(expression.substr(i, 1), TOKENTYPE_OPERATOR));

			digit = "";
			containsDecimal = false;
		}

		// If user enters more than one decimal in one digit or two operators in a row, display error
		else if ((expression[i] == '.' && containsDecimal) || operatorJustFound == true)
		{
			error = true;
		}
	}

	// If there is only one value in the stack
	if (infixStackTemp.size() == 1)
		return infixStackTemp.top().value;


	// If there is an expression to evaluate
	else if (!error && infixStackTemp.size() > 2)
	{
		std::stack<Token> infixStack;

		// Reverse stack order
		while (!infixStackTemp.empty())
		{
			infixStack.push(infixStackTemp.top());
			infixStackTemp.pop();
		}

		//
		// CREATE POSTFIX
		//

		int infixSize = infixStack.size();
		std::stack<Token> stackTemp;
		stackTemp.push(Token("#", TOKENTYPE_OPERATOR)); // Random char pushed to stack to avoid null pointer
		std::stack<Token> postfixStackTemp;

		for (int t = 0; t < infixSize; t++)
		{
			Token token = infixStack.top(); infixStack.pop();

			if (token.type == TOKENTYPE_OPERATOR)
			{
				while (!stackTemp.empty() && stackTemp.top().value != "(" && hasHigherPrecedence(stackTemp.top().value, token.value))
				{
					postfixStackTemp.push(stackTemp.top());
					stackTemp.pop();
				}
				stackTemp.push(token);
			}

			else if (token.type == TOKENTYPE_OPERAND)
				postfixStackTemp.push(token);

			else if (token.value == "(")
				stackTemp.push(token);

			else if (token.value == ")")
			{
				while (!stackTemp.empty() && stackTemp.top().value != "(")
				{
					postfixStackTemp.push(stackTemp.top());
					stackTemp.pop();
				}
				stackTemp.pop();
			}

		}

		while (stackTemp.top().value != "#")
		{
			postfixStackTemp.push(stackTemp.top());
			stackTemp.pop();
		}


		std::stack<Token> postfixStack;

		// Reverse stack order
		while (!postfixStackTemp.empty())
		{
			postfixStack.push(postfixStackTemp.top());
			postfixStackTemp.pop();
		}


		//
		// EVALUATE EXPRESSION
		//

		int postfixSize = postfixStack.size();

		if (postfixSize > 1)
		{
			std::stack<float> evaluation;

			for (int t = 0; t < postfixSize; t++)
			{
				Token token = postfixStack.top(); postfixStack.pop();

				if (token.type == TOKENTYPE_OPERAND)
				{
					evaluation.push(std::stof(token.value));
				}

				else if (token.type == TOKENTYPE_OPERATOR)
				{
					float num1 = evaluation.top(); evaluation.pop();
					float num2 = evaluation.top(); evaluation.pop();

					if (token.value == "%")
						evaluation.push(num2);

					float result = calculate(num1, num2, token.value[0]);
					evaluation.push(result);
				}
			}

			return std::to_string(evaluation.top());
		}
	}

	else return "Error";
}

bool CalculatorLogic::isOperator(char token)
{
	switch (token)
	{
	case '+':
	case '-':
	case '*':
	case '/':
	case '%':
	case '^':
		return true;
		break;

	default:
		return false;
		break;
	}
}

int CalculatorLogic::getWeight(std::string op)
{
	int weight = -1;

	if (op == "+" || op == "-") weight = 1;
	else if (op == "*" || op == "/" || op == "%") weight = 2;
	else if (op == "^") weight = 3;

	return weight;
}

bool CalculatorLogic::hasHigherPrecedence(std::string op1, std::string op2)
{
	int op1Weight = getWeight(op1);
	int op2Weight = getWeight(op2);

	if (op1Weight > op2Weight)
		return true;
	else
		return false;
}

bool CalculatorLogic::isRightAssociative(std::string op)
{
	if (op == "^")
		return true;
	else
		return false;
}


//
// CALCULATIONS
//

float CalculatorLogic::calculate(float num1, float num2, char op)
{
	switch (op)
	{
	case '+':
		return num1 + num2;
		break;

	case '-':
		return num2 - num1;
		break;

	case '*':
		return num1 * num2;
		break;

	case '/':
		if (num1 == 0)
			return 0;
		else
			return num2 / num1;
		break;

	case '^':
		return pow(num2, num1);
		break;

	case '%':
		return int(num2) % int(num1);
		break;
	}
}