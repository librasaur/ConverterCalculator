#pragma once
#include <string>

namespace ConverterCalculator
{
	ref class BinaryConversions
	{
	public:
		std::string BinToDec(std::string _binary);
		std::string BinToHex(std::string _binary);
	};
}