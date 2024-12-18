/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyferrei <cyferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 14:58:16 by cyferrei          #+#    #+#             */
/*   Updated: 2024/12/18 15:35:28 by cyferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main() {
	Base* obj = generate();
	std::cout << "Identify by pointer: ";
	identify(obj);

	std::cout << "Identify by reference: ";
	identify( *obj);

	delete obj;
	return 0;
}
