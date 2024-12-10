/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyferrei <cyferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 17:16:52 by cyferrei          #+#    #+#             */
/*   Updated: 2024/12/10 17:21:26 by cyferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

class ScalarConverter {
	public:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &other);
		ScalarConverter &operator=(const ScalarConverter &other);
		~ScalarConverter();

		static /*?*/convert(/*?*/);
};

#endif