#pragma once
#include <string>

namespace ConverterCalculator
{
	ref class HexConversions
	{
	public:
		std::string HexToDec(std::string _hex);
		std::string HexToBin(std::string _hex);
		std::string GetHexValue(int value);
		int GetDecValue(std::string value);
	};
}