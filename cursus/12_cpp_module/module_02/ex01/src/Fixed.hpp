/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:35:18 by ggosse            #+#    #+#             */
/*   Updated: 2023/11/02 13:55:36 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <string>
#include <cstdlib>
#include <iomanip>
#include <csignal>
#include <iostream>

class Fixed
{
		public:
			Fixed();						// constructor
			Fixed(const int value);
			Fixed(const float value);
			Fixed(const Fixed&);			// copy constructor
			Fixed &operator=(const Fixed&);	// overload operator
			Fixed &operator<<(const Fixed&);
			~Fixed();						// desstructor
			int		getRawBits(void) const;
			void	setRawBits(int const raw);
			float	toFloat(void) const;
			int		toInt(void) const;

		private:
			int					_value;
			static const int	_bits = 8;
};

#endif