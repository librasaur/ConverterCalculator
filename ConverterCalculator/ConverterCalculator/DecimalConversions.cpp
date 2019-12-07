#include "DecimalConversions.h"
#include "HexConversions.h"

using namespace ConverterCalculator;

std::string DecimalConversions::DecToBin(std::string _decimal)
{
	int decimal = std::stoi(_decimal);
	std::string binary = "";

	if (decimal > 255)
		binary = "error";
	else
	{
		if (decimal >= 128)
		{
			binary += "1";
			decimal -= 128;
		}
		else binary += "0";

		if (decimal >= 64)
		{
			binary += "1";
			decimal -= 64;
		}
		else binary += "0";

		if (decimal >= 32)
		{
			binary += "1";
			decimal -= 32;
		}
		else binary += "0";

		if (decimal >= 16)
		{
			binary += "1";
			decimal -= 16;
		}
		else binary += "0";

		if (decimal >= 8)
		{
			binary += "1";
			decimal -= 8;
		}
		else binary += "0";

		if (decimal >= 4)
		{
			binary += "1";
			decimal -= 4;
		}
		else binary += "0";

		if (decimal >= 2)
		{
			binary += "1";
			decimal -= 2;
		}
		else binary += "0";

		if (decimal >= 1)
		{
			binary += "1";
			decimal -= 1;
		}
		else binary += "0";
	}

	return binary;
}

std::string DecimalConversions::DecToHex(std::string _decimal)
{
	HexConversions hc{};

	int decimal = std::stoi(_decimal);
	std::string hex;

	while (decimal != 0)
	{
		int remainder = decimal % 16;
		hex += hc.GetHexValue(remainder);

		decimal /= 16;
	}

	std::reverse(hex.begin(), hex.end());

	return hex;
}