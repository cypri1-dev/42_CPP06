/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyferrei <cyferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 15:52:56 by cyferrei          #+#    #+#             */
/*   Updated: 2024/12/17 17:21:24 by cyferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "colors.hpp"
#include <iostream>

int main() {
	Data data;
	std::cout << BOLD_ON << "Original Data: age = " << BLUE << data._age << BOLD_OFF BOLD_ON << ", name = " << BLUE << data._name << BOLD_OFF << std::endl;

	uintptr_t raw = Serializer::serialize(&data);
	Data* deserialized = Serializer::deserialize(raw);

	std::cout << BOLD_ON << "Deserialized Data: age = " << YELLOW << deserialized->_age << BOLD_OFF BOLD_ON << ", name = " << YELLOW << deserialized->_name << BOLD_OFF << std::endl;

	if (deserialized == &data) {
		std::cout << BOLD_ON GREEN <<"Deserialization successful: pointers match!" << BOLD_OFF << std::endl;
	} else {
		std::cout << BOLD_ON RED << "Deserialization failed: pointers do not match!" << BOLD_OFF << std::endl;;
	}

	return 0;
}
