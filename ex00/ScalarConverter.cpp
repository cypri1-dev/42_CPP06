/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyferrei <cyferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 17:16:50 by cyferrei          #+#    #+#             */
/*   Updated: 2024/12/17 15:48:06 by cyferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include "colors.hpp"
#include <cmath>
#include <iomanip>
#include <endian.h>
#include <limits>

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &other) {
	*this = other;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other) {
	if (this != &other) {
		;
	}
	return (*this);
}

ScalarConverter::~ScalarConverter() {}

/*********************************************************************************************************/

bool is_valid_number(const std::string &literal) {
	char *end;
	double d_value = std::strtod(literal.c_str(), &end);
	(void)d_value;
	
	return (*end == '\0' || (*end == 'f' && *(end + 1) == '\0')) && !literal.empty();
}

void	ScalarConverter::convert(const std::string &literral) {
	if (literral.size() == 1 && !(literral[0] >= '0' && literral[0] <= '9')) {
		if (literral[0] > 32 && literral[0] < 126)
			std::cout << BOLD_ON << "[char]: "<< BOLD_OFF << "'" << BOLD_ON GREEN << literral[0] << "'" << BOLD_OFF << std::endl;
		else
			std::cout << BOLD_ON YELLOW << "[char]: No printable char!" << BOLD_OFF << std::endl;
		std::cout << BOLD_ON << "[int]: " << GREEN << (int)literral[0] << BOLD_OFF << std::endl;
		std::cout << BOLD_ON << "[float]: " << GREEN << std::fixed << std::setprecision(1) <<(float)literral[0] <<  "f" << BOLD_OFF << std::endl;
		std::cout << BOLD_ON << "[double]: " << GREEN << (double)literral[0] << BOLD_OFF << std::endl;
		return;
	}

	if (!is_valid_number(literral)) {
		std::cout << BOLD_ON RED << "Erreur: invalid input!" << BOLD_OFF << std::endl;
		return;
	}
	
	double d_value = std::strtod(literral.c_str(), NULL);

	/*CHAR*/
	if (d_value > 0 && d_value < 127) {
		if ((d_value > 32 && d_value < 127))
			std::cout << BOLD_ON << "[char]: " << BOLD_OFF << "'" << BOLD_ON GREEN << (char)d_value << BOLD_OFF << "'" << std::endl;
		else
			std::cout << BOLD_ON YELLOW << "[char]: No printable char!" << BOLD_OFF << std::endl;
	}
	else
		std::cout << BOLD_ON YELLOW << "[char]: Conversion to char impossible!" << BOLD_OFF << std::endl;
	
	/*INT*/
	if (d_value < std::numeric_limits<int>::min() || d_value > std::numeric_limits<int>::max())
		std::cout << BOLD_ON YELLOW << "[int]: Conversion to int impossible!" << BOLD_OFF << std::endl;
	else if (std::isnan(d_value))
		std::cout << BOLD_ON YELLOW << "[int]: Conversion to int impossible!" << BOLD_OFF << std::endl;
	else 
		std::cout << BOLD_ON  << "[int]: " << GREEN << (int)d_value << BOLD_OFF << std::endl;

	/*FLOAT*/
	if (d_value == std::numeric_limits<float>::infinity() || d_value == -std::numeric_limits<float>::infinity())
		std::cout << BOLD_ON << "[float]: Conversion to double impossible!" << BOLD_OFF << std::endl;
	else {
		if (d_value < -std::numeric_limits<float>::max() || d_value > std::numeric_limits<float>::max())
			std::cout << BOLD_ON YELLOW << "[float]: Conversion to double impossible!" << BOLD_OFF << std::endl;
		else if (std::isnan(d_value))
			std::cout << BOLD_ON << "[float]: " << GREEN << "nanf" << BOLD_OFF << std::endl;
		else
			std::cout << BOLD_ON  << "[float]: " << GREEN << std::fixed << std::setprecision(1) << (float)d_value << "f" << BOLD_OFF << std::endl;
	}
	
	/*DOUBLE*/
	if (d_value == std::numeric_limits<double>::infinity() || d_value == -std::numeric_limits<double>::infinity())
		std::cout << BOLD_ON << "[double]: Conversion to double impossible!" << BOLD_OFF << std::endl;
	else {
		if (d_value < -std::numeric_limits<double>::max() || d_value > std::numeric_limits<double>::max())
			std::cout << BOLD_ON YELLOW << "[double]: Conversion to double impossible!" << BOLD_OFF << std::endl;
		else if (std::isnan(d_value))
			std::cout << BOLD_ON << "[double]: " << GREEN << "nan" << BOLD_OFF << std::endl;
		else
			std::cout << BOLD_ON  << "[double]: " << GREEN << d_value << BOLD_OFF << std::endl;
	}
}