#include "ConversionLogic.h"
#include <string>

using namespace ConverterCalculator;

//
// LENGTH
//

std::string ConversionLogic::convertValueLength(std::string value, std::string convertFrom, std::string convertTo)
{
	std::string result = "";

	if (convertFrom == "Kilometre")
	{
		if (convertTo == "Kilometre")
			result = value;

		else if (convertTo == "Metre")
			result = std::to_string((std::stof(value) * 1000));

		else if (convertTo == "Centimetre")
			result = std::to_string((std::stof(value) * 10000));

		else if (convertTo == "Yard")
			result = std::to_string(std::stof(value) * 1093.613);

		else if (convertTo == "Inch")
			result = std::to_string(std::stof(value) * 39370.079);

		else if (convertTo == "Mile")
			result = std::to_string(std::stof(value) / 1.609);

		else if (convertTo == "Nautical Mile")
			result = std::to_string(std::stof(value) / 1.852);
	}

	else if (convertFrom == "Metre")
	{
		if (convertTo == "Kilometre")
			result = std::to_string(std::stof(value) / 1000);

		else if (convertTo == "Metre")
			result = value;

		else if (convertTo == "Centimetre")
			result = std::to_string(std::stof(value) * 100);

		else if (convertTo == "Yard")
			result = std::to_string(std::stof(value) * 1.094);

		else if (convertTo == "Inch")
			result = std::to_string(std::stof(value) * 39.37);

		else if (convertTo == "Mile")
			result = std::to_string(std::stof(value) / 1609.344);

		else if (convertTo == "Nautical Mile")
			result = std::to_string(std::stof(value) / 1852);
	}

	else if (convertFrom == "Centimetre")
	{
		if (convertTo == "Kilometre")
			result = std::to_string(std::stof(value) / 100000);

		else if (convertTo == "Metre")
			result = std::to_string(std::stof(value) / 100);

		else if (convertTo == "Centimetre")
			result = value;

		else if (convertTo == "Yard")
			result = std::to_string(std::stof(value) / 91.44);

		else if (convertTo == "Inch")
			result = std::to_string(std::stof(value) / 2.54);

		else if (convertTo == "Mile")
			result = std::to_string(std::stof(value) / 160934.4);

		else if (convertTo == "Nautical Mile")
			result = std::to_string(std::stof(value) / 185200);
	}

	else if (convertFrom == "Yard")
	{
		if (convertTo == "Kilometre")
			result = std::to_string(std::stof(value) / 1093.613);

		else if (convertTo == "Metre")
			result = std::to_string(std::stof(value) / 1.094);

		else if (convertTo == "Centimetre")
			result = std::to_string(std::stof(value) * 91.44);

		else if (convertTo == "Yard")
			result = value;

		else if (convertTo == "Inch")
			result = std::to_string(std::stof(value) * 36);

		else if (convertTo == "Mile")
			result = std::to_string(std::stof(value) / 1760);

		else if (convertTo == "Nautical Mile")
			result = std::to_string(std::stof(value) / 2025.372);
	}

	else if (convertFrom == "Inch")
	{
		if (convertTo == "Kilometre")
			result = std::to_string(std::stof(value) / 39370.079);

		else if (convertTo == "Metre")
			result = std::to_string(std::stof(value) / 39.37);

		else if (convertTo == "Centimetre")
			result = std::to_string(std::stof(value) * 2.54);

		else if (convertTo == "Yard")
			result = std::to_string(std::stof(value) / 36);

		else if (convertTo == "Inch")
			result = value;

		else if (convertTo == "Mile")
			result = std::to_string(std::stof(value) / 63360);

		else if (convertTo == "Nautical Mile")
			result = std::to_string(std::stof(value) / 72913.386);
	}

	else if (convertFrom == "Mile")
	{
		if (convertTo == "Kilometre")
			result = std::to_string(std::stof(value) * 1.609);

		else if (convertTo == "Metre")
			result = std::to_string(std::stof(value) * 1609.344);

		else if (convertTo == "Centimetre")
			result = std::to_string(std::stof(value) * 160934.4);

		else if (convertTo == "Yard")
			result = std::to_string(std::stof(value) * 1760);

		else if (convertTo == "Inch")
			result = std::to_string(std::stof(value) * 63360);

		else if (convertTo == "Mile")
			result = value;

		else if (convertTo == "Nautical Mile")
			result = std::to_string(std::stof(value) / 1.151);
	}

	else if (convertFrom == "Nautical Mile")
	{
		if (convertTo == "Kilometre")
			result = std::to_string(std::stof(value) * 1.852);

		else if (convertTo == "Metre")
			result = std::to_string(std::stof(value) * 1852);

		else if (convertTo == "Centimetre")
			result = std::to_string(std::stof(value) * 185200);

		else if (convertTo == "Yard")
			result = std::to_string(std::stof(value) * 2025.372);

		else if (convertTo == "Inch")
			result = std::to_string(std::stof(value) * 72913.386);

		else if (convertTo == "Mile")
			result = std::to_string(std::stof(value) * 1.151);

		else if (convertTo == "Nautical Mile")
			result = value;
	}

	return result;
}

//
// WEIGHT
//

std::string ConversionLogic::convertValueWeight(std::string value, std::string convertFrom, std::string convertTo)
{
	std::string result;

	if (convertFrom == "Kilogram")
	{
		if (convertTo == "Kilogram")
			result = value;

		else if (convertTo == "Gram")
			result = std::to_string(std::stof(value) * 1000);

		else if (convertTo == "Milligram")
			result = std::to_string(std::stof(value) * 1000000);

		else if (convertTo == "Pound")
			result = std::to_string(std::stof(value) * 2.205);

		else if (convertTo == "Stone")
			result = std::to_string(std::stof(value) / 6.35);

		else if (convertTo == "Ounce")
			result = std::to_string(std::stof(value) * 35.274);
	}

	else if (convertFrom == "Gram")
	{
		if (convertTo == "Kilogram")
			result = std::to_string(std::stof(value) / 1000);

		else if (convertTo == "Gram")
			result = value;

		else if (convertTo == "Milligram")
			result = std::to_string(std::stof(value) * 1000);

		else if (convertTo == "Pound")
			result = std::to_string(std::stof(value) / 453.592);

		else if (convertTo == "Stone")
			result = std::to_string(std::stof(value) / 6350.293);

		else if (convertTo == "Ounce")
			result = std::to_string(std::stof(value) / 28.35);
	}

	else if (convertFrom == "Milligram")
	{
		if (convertTo == "Kilogram")
			result = std::to_string(std::stof(value) / 1000000);

		else if (convertTo == "Gram")
			result = std::to_string(std::stof(value) / 1000);

		else if (convertTo == "Milligram")
			result = std::to_string(std::stof(value) / 6350000);

		else if (convertTo == "Pound")
			result = std::to_string(std::stof(value) / 453592.37);

		else if (convertTo == "Stone")
			result = "Too big!";

		else if (convertTo == "Ounce")
			result = std::to_string(std::stof(value) / 28349.523);
	}

	else if (convertFrom == "Pound")
	{
		if (convertTo == "Kilogram")
			result = std::to_string(std::stof(value) / 2.205);

		else if (convertTo == "Gram")
			result = std::to_string(std::stof(value) * 453.592);

		else if (convertTo == "Milligram")
			result = std::to_string(std::stof(value) * 453592.37);

		else if (convertTo == "Pound")
			result = value;

		else if (convertTo == "Stone")
			result = std::to_string(std::stof(value) / 14);

		else if (convertTo == "Ounce")
			result = std::to_string(std::stof(value) * 16);
	}

	else if (convertFrom == "Stone")
	{
		if (convertTo == "Kilogram")
			result = std::to_string(std::stof(value) * 6.35);

		else if (convertTo == "Gram")
			result = std::to_string(std::stof(value) * 6350.293);

		else if (convertTo == "Milligram")
			result = std::to_string(std::stof(value) * 6350000);

		else if (convertTo == "Pound")
			result = std::to_string(std::stof(value) * 14);

		else if (convertTo == "Stone")
			result = value;

		else if (convertTo == "Ounce")
			result = std::to_string(std::stof(value) * 224);
	}

	else if (convertFrom == "Ounce")
	{
	if (convertTo == "Kilogram")
		result = std::to_string(std::stof(value) / 35.274);

	else if (convertTo == "Gram")
		result = std::to_string(std::stof(value) * 28.35);

	else if (convertTo == "Milligram")
		result = std::to_string(std::stof(value) * 28349.523);

	else if (convertTo == "Pound")
		result = std::to_string(std::stof(value) / 16);

	else if (convertTo == "Stone")
		result = std::to_string(std::stof(value) / 224);

	else if (convertTo == "Ounce")
		result = value;
	}

	return result;
}

//
// VOLUME
//

std::string ConversionLogic::convertValueVolume(std::string value, std::string convertFrom, std::string convertTo)
{
	std::string result;

	if (convertFrom == "Litre")
	{
		if (convertTo == "Litre")
			result = value;

		else if (convertTo == "Millilitre")
			result = std::to_string(std::stof(value) * 1000);

		else if (convertTo == "Pint")
			result = std::to_string(std::stof(value) * 1.76);

		else if (convertTo == "Cubic Metre")
			result = std::to_string(std::stof(value) / 1000);

		else if (convertTo == "Cubic Centimetre")
			result = std::to_string(std::stof(value) * 1000);
	}

	else if (convertFrom == "Millilitre")
	{
		if (convertTo == "Litre")
			result = std::to_string(std::stof(value) / 1000);

		else if (convertTo == "Millilitre")
			result = value;

		else if (convertTo == "Pint")
			result = std::to_string(std::stof(value) / 568.261);

		else if (convertTo == "Cubic Metre")
			result = std::to_string(std::stof(value) / 1000000);

		else if (convertTo == "Cubic Centimetre")
			result = value;
	}

	else if (convertFrom == "Pint")
	{
		if (convertTo == "Litre")
			result = std::to_string(std::stof(value) / 1.76);

		else if (convertTo == "Millilitre")
			result = std::to_string(std::stof(value) * 568.261);

		else if (convertTo == "Pint")
			result = value;

		else if (convertTo == "Cubic Metre")
			result = std::to_string(std::stof(value) / 1759.754);

		else if (convertTo == "Cubic Centimetre")
			result = std::to_string(std::stof(value) * 568.261);
	}

	else if (convertFrom == "Cubic Metre")
	{
		if (convertTo == "Litre")
			result = std::to_string(std::stof(value) * 1000);

		else if (convertTo == "Millilitre")
			result = std::to_string(std::stof(value) * 1000000);

		else if (convertTo == "Pint")
			result = std::to_string(std::stof(value) * 1759.754);

		else if (convertTo == "Cubic Metre")
			result = value;

		else if (convertTo == "Cubic Centimetre")
			result = std::to_string(std::stof(value) / 568.261);
	}

	else if (convertFrom == "Cubic Centimetre")
	{
		if (convertTo == "Litre")
			result = std::to_string(std::stof(value) / 1000);

		else if (convertTo == "Millilitre")
			result = value;

		else if (convertTo == "Pint")
			result = std::to_string(std::stof(value) / 568.261);

		else if (convertTo == "Cubic Metre")
			result = std::to_string(std::stof(value) / 1000000);

		else if (convertTo == "Cubic Centimetre")
			result = value;
	}

	return result;
}

//
// SPEED
//

std::string ConversionLogic::convertValueSpeed(std::string value, std::string convertFrom, std::string convertTo)
{
	std::string result;

	if (convertFrom == "Mile per Hour")
	{
	if (convertTo == "Mile per Hour")
		result = value;

	else if (convertTo == "Kilometre per Hour")
		result = std::to_string(std::stof(value) * 1.609);
	}

	else if (convertFrom == "Kilometre per Hour")
	{
		if (convertTo == "Mile per Hour")
			result = std::to_string(std::stof(value) / 1.609);

		else if (convertTo == "Kilometre per Hour")
			result = value;
	}

	return result;
}

//
// TEMP
//

std::string ConversionLogic::convertValueTemp(std::string value, std::string convertFrom, std::string convertTo)
{
	std::string result;

	if (convertFrom == "Celcius")
	{
		if (convertTo == "Celcius")
			result = value;

		else if (convertTo == "Fahrenheit")
			result = std::to_string((std::stof(value) * 9 / 5) + 32);

		else if (convertTo == "Kelvin")
			result = std::to_string(std::stof(value) + 273.15);
	}

	else if (convertFrom == "Fahrenheit")
	{
		if (convertTo == "Celcius")
			result = std::to_string((std::stof(value) - 32) * 5 / 9);

		else if (convertTo == "Fahrenheit")
			result = value;

		else if (convertTo == "Kelvin")
			result = std::to_string((std::stof(value) - 32) * 5 / 9 + 273.15);
	}

	else if (convertFrom == "Kelvin")
	{
		if (convertTo == "Celcius")
			result = std::to_string(std::stof(value) - 273.15);

		else if (convertTo == "Fahrenheit")
			result = std::to_string((std::stof(value) - 273.15) * 9 / 5 + 32);

		else if (convertTo == "Kelvin")
			result = value;
	}

	return result;
}

//
// MATHS
//

std::string ConversionLogic::convertValueMaths(std::string value, std::string convertFrom, std::string convertTo)
{
	std::string result;

	const float PI = 3.14159;

	if (convertFrom == "Degrees")
	{
		if (convertTo == "Degrees")
			result = value;

		else if (convertTo == "Radians")
			result = std::to_string(std::stof(value) * (PI / 180));
	}

	else if (convertFrom == "Radians")
	{
		if (convertTo == "Degrees")
			result = std::to_string(std::stof(value) * (180 / PI));

		else if (convertTo == "Radians")
			result = value;
	}

	return result;
}