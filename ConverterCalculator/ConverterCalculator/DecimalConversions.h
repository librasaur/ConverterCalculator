#pragma once
#include <string>

namespace ConverterCalculator
{
	ref class DecimalConversions
	{
	public:
		std::string DecToBin(std::string _decimal);
		std::string DecToHex(std::string _decimal);
	};
}