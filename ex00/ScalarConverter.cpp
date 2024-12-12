/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyferrei <cyferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 17:16:50 by cyferrei          #+#    #+#             */
/*   Updated: 2024/12/12 14:42:12 by cyferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include "colors.hpp"
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

void	ScalarConverter::convert(const std::string &literral) {
	double d_value = std::strtod(literral.c_str(), NULL);

	/*INT*/
	if (d_value < std::numeric_limits<int>::min() || d_value > std::numeric_limits<int>::max())
		std::cout << BOLD_ON YELLOW << "[int]: Conversion to int impossible!" << BOLD_OFF << std::endl;
	else 
		std::cout << BOLD_ON  << "[int]: " << GREEN << (int)d_value << BOLD_OFF << std::endl;

	/*CHAR*/
	if (d_value > 0 && (d_value > 32 && d_value < 127))
		std::cout << BOLD_ON << "[char]: " << GREEN << (char)d_value << BOLD_OFF << std::endl;
	else
		std::cout << BOLD_ON YELLOW << "[char]: Conversion to char impossible!" << BOLD_OFF << std::endl;

	/*FLOAT*/
	if (d_value < -std::numeric_limits<float>::max() || d_value > std::numeric_limits<float>::max())
		std::cout << BOLD_ON YELLOW << "[float]: Conversion to int impossible!" << BOLD_OFF << std::endl;
	else
		std::cout << BOLD_ON  << "[float]: " << GREEN << (float)d_value << BOLD_OFF << std::endl;

	/*DOUBLE*/
}