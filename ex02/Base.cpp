/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyferrei <cyferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 14:58:20 by cyferrei          #+#    #+#             */
/*   Updated: 2024/12/18 15:18:57 by cyferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "colors.hpp"

Base::~Base() {
	std::cout << BOLD_ON RED << "Destructor Base called!" << BOLD_OFF << std::endl;
}

Base* generate(void) {
	std::srand(std::time(0));
	int rand = std::rand() % 3;

	switch (rand) {
		case 0:
			return new A();
		case 1:
			return new B();
		case 2:
			return new C();
		default:
			break;
	}
	return (NULL);
}

void identify(Base* p) {
	if (dynamic_cast<A*>(p))
		std::cout << BOLD_ON GREEN << "A" << BOLD_ON << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << BOLD_ON GREEN << "B" << BOLD_ON << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << BOLD_ON GREEN << "C" << BOLD_ON << std::endl;
}

void identify(Base& p) {
	try {
		(void)dynamic_cast<A&>(p);
		std::cout << BOLD_ON GREEN << "A" << BOLD_ON << std::endl;
		return;
	}
	catch (std::exception &e) {}
	
	try {
		(void)dynamic_cast<B&>(p);
		std::cout << BOLD_ON GREEN << "B" << BOLD_ON << std::endl;
		return;
	}
	catch (std::exception &e) {}
	
	std::cout << BOLD_ON GREEN << "C" << BOLD_ON << std::endl;
}