#pragma once
namespace ConverterCalculator
{
	ref class CalculatorLogic
	{
	public:
		CalculatorLogic() {};

		float MultiplyNumbers(int num1, int num2);
		float DividNumbers(int num1, int num2);
		float AddNumbers(int num1, int num2);
		float SubtractNumbers(int num1, int num2);

	protected:
		~CalculatorLogic() {};
	};
}