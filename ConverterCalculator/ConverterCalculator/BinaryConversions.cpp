#include "BinaryConversions.h"
#include "DecimalConversions.h"

using namespace ConverterCalculator;

std::string BinaryConversions::BinToDec(std::string _binary)
{
	int decimal = 0;
	int base = 1;

	for (int i = _binary.length() - 1; i >= 0; i--)
	{
		if (_binary[i] == '1')
		{
			decimal += base;
		}

		base *= 2;
	}

	return std::to_string(decimal);
}

std::string BinaryConversions::BinToHex(std::string _binary)
{
	DecimalConversions dc{};

	std::string decimal = BinToDec(_binary);
	std::string hex = dc.DecToHex(decimal);

	return hex;
}