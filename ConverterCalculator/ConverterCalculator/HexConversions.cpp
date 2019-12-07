#include "HexConversions.h"
#include "DecimalConversions.h"

using namespace ConverterCalculator;

std::string HexConversions::HexToDec(std::string _hex)
{
	int decimal = 0;
	int base = 1;

	for (int i = _hex.length() - 1; i >= 0; i--)
	{
		int hex = GetDecValue(_hex.substr(i, 1));

		if (hex >= 0 && hex <= 15)
		{
			decimal += hex * base;
			base *= 16;
		}
	}

	return std::to_string(decimal);
}

std::string HexConversions::HexToBin(std::string _hex)
{
	DecimalConversions dc{};

	std::string decimal = HexToDec(_hex);
	std::string binary = dc.DecToBin(decimal);

	return binary;
}

std::string HexConversions::GetHexValue(int value)
{
	switch (value)
	{
	case 1:
		return "1";
		break;

	case 2:
		return "2";
		break;

	case 3:
		return "3";
		break;

	case 4:
		return "4";
		break;

	case 5:
		return "5";
		break;

	case 6:
		return "6";
		break;

	case 7:
		return "7";
		break;

	case 8:
		return "8";
		break;

	case 9:
		return "9";
		break;

	case 10:
		return "A";
		break;

	case 11:
		return "B";
		break;

	case 12:
		return "C";
		break;

	case 13:
		return "D";
		break;

	case 14:
		return "E";
		break;

	case 15:
		return "F";
		break;

	default:
		break;
	}
}

int HexConversions::GetDecValue(std::string value)
{
	if (value == "1")
		return 1;
	else if (value == "2")
		return 2;
	else if (value == "3")
		return 3;
	else if (value == "4")
		return 4;
	else if (value == "5")
		return 5;
	else if (value == "6")
		return 6;
	else if (value == "7")
		return 7;
	else if (value == "8")
		return 8;
	else if (value == "9")
		return 9;
	else if (value == "A")
		return 10;
	else if (value == "B")
		return 11;
	else if (value == "C")
		return 12;
	else if (value == "D")
		return 13;
	else if (value == "E")
		return 14;
	else if (value == "F")
		return 15;
}