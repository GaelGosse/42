/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:35:18 by ggosse            #+#    #+#             */
/*   Updated: 2023/11/05 11:41:57 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <string>
#include <cstdlib>
#include <iomanip>
#include <csignal>
#include <iostream>
#include <ostream>
#include <cmath>

class Fixed
{
		public:
			Fixed();							// constructor
			Fixed(const int value);
			Fixed(const float value);
			Fixed(const Fixed &src);			// copy constructor
			~Fixed();							// desstructor

			Fixed &operator=(const Fixed &src);	// overload operator

			int		getRawBits(void) const;
			void	setRawBits(int const raw);
			float	toFloat(void) const;
			int		toInt(void) const;

		private:
			int					_value;
			static const int	_bits = 8;
};
std::ostream	&operator<<(std::ostream &out, Fixed const &nbr);

#endif