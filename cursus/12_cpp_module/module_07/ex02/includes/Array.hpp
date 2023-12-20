/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 15:40:20 by ggosse            #+#    #+#             */
/*   Updated: 2023/12/20 20:32:53 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <string>
#include <cstdlib>
#include <iomanip>
#include <csignal>
#include <iostream>

template <typename T>
class Array
{
	public:
		// canonical form
		Array();
		Array(const Array&src);
		Array&operator=(const Array&src);
		~Array();

		// others constructors
		Array(unsigned int n);

		// methods

		// accessor
		unsigned int	size(void);

		// operator
		T& operator[](int index);

		// exceptions

	private:
		unsigned int	_len;
		T				*_arr;

};

#endif
