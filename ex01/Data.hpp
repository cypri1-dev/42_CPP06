/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyferrei <cyferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 16:48:59 by cyferrei          #+#    #+#             */
/*   Updated: 2024/12/17 17:15:47 by cyferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <string>

class Data {
	public:
		Data();
		Data(const Data &other);
		Data &operator=(const Data &other);
		~Data();

		std::string _name;
		int _age;
};

#endif