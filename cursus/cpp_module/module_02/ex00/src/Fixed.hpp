/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:35:18 by ggosse            #+#    #+#             */
/*   Updated: 2023/10/31 15:17:06 by ggosse           ###   ########.fr       */
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
			Fixed();
			Fixed(const Fixed&);
			Fixed&operator=(const Fixed&);
			~Fixed();
			int		getRawBits(void) const;
			void	setRawBits(int const raw);

		private:
			int					_value;
			static const int	_bits = 8;
};

#endif