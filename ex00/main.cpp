/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyferrei <cyferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 17:16:44 by cyferrei          #+#    #+#             */
/*   Updated: 2024/12/18 13:58:18 by cyferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include "colors.hpp"

int main(int argc, char **argv) {
	(void)argc;
	
	if (!argv[1] || argv[1] == NULL || argc > 2) {
		std::cout << BOLD_ON RED << "Error: 1 argument only!" << BOLD_OFF << std::endl;
		return (-1);
	}
	ScalarConverter::convert(argv[1]);
	return 0;
}