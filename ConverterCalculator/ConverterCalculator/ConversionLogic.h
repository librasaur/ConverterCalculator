#pragma once
#include <string>

namespace ConverterCalculator
{
	ref class ConversionLogic
	{
	public:
		std::string convertValueLength(std::string value, std::string convertFrom, std::string convertTo);
		std::string convertValueWeight(std::string value, std::string convertFrom, std::string convertTo);
		std::string convertValueVolume(std::string value, std::string convertFrom, std::string convertTo);
		std::string convertValueSpeed(std::string value, std::string convertFrom, std::string convertTo);
		std::string convertValueTemp(std::string value, std::string convertFrom, std::string convertTo);
		std::string convertValueMaths(std::string value, std::string convertFrom, std::string convertTo);
	};
}