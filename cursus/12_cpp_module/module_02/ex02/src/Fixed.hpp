/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:35:18 by ggosse            #+#    #+#             */
/*   Updated: 2023/11/05 16:28:28 by gael             ###   ########.fr       */
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

			// comparaison
			bool	operator>(Fixed const &nbr) const;
			bool	operator<(Fixed const &nbr) const;
			bool	operator>=(Fixed const &nbr) const;
			bool	operator<=(Fixed const &nbr) const;
			bool	operator==(Fixed const &nbr) const;
			bool	operator!=(Fixed const &nbr) const;

			// arithmetic
			Fixed	operator+(const Fixed &nbr) const;
			Fixed	operator-(const Fixed &nbr) const;
			Fixed	operator*(const Fixed &nbr) const;
			Fixed	operator/(const Fixed &nbr) const;

			// incrementation / decrementation
			Fixed&	operator++(void);
			Fixed	operator++(int);
			Fixed&	operator--(void);
			Fixed	operator--(int);

			static Fixed	min(Fixed &nbr1, Fixed &nbr2);
			static Fixed	max(Fixed &nbr1, Fixed &nbr2);
			static Fixed	min(Fixed const &nbr1, Fixed const &nbr2);
			static Fixed	max(Fixed const &nbr1, Fixed const &nbr2);

		private:
			int					_value;
			static const int	_bits = 8;
};
std::ostream	&operator<<(std::ostream &out, Fixed const &nbr);

#endif