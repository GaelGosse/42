/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 17:12:45 by ggosse            #+#    #+#             */
/*   Updated: 2023/12/10 18:59:45 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <string>
#include <cstdlib>
#include <iomanip>
#include <csignal>
#include <iostream>

class ScalarConverter
{
	public:
		// void				setStr(std::string	str);
		static void			convert(std::string str);
		static bool			isChar(std::string str);
		static bool			isInt(std::string str);
		static bool			isFloat(std::string str);
		static bool			isDouble(std::string str);

	private:
		static std::string	_str;
		// canonical form
		ScalarConverter();
		ScalarConverter(const ScalarConverter&src);
		ScalarConverter&operator=(const ScalarConverter&src);
		~ScalarConverter();
};

#endif
