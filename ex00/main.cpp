/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyferrei <cyferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 17:16:44 by cyferrei          #+#    #+#             */
/*   Updated: 2024/12/17 12:24:49 by cyferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv) {
	(void)argc;
	
	if (!argv[1] || argv[1] == NULL || argc > 2)
		return (-1);
	ScalarConverter::convert(argv[1]);
	return 0;
}