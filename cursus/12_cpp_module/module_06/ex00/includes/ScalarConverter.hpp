/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 17:12:45 by ggosse            #+#    #+#             */
/*   Updated: 2023/12/09 18:26:27 by ggosse           ###   ########.fr       */
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
		static void	convert(std::string str);
		static bool	isChar(char);
		static bool	isInt(int);
		static bool	isFloat(float);
		static bool	isDouble(double);

	private:
		// canonical form
		ScalarConverter();
		ScalarConverter(const ScalarConverter&src);
		ScalarConverter&operator=(const ScalarConverter&src);
		~ScalarConverter();
};

#endif
