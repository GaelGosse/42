/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:17:47 by ggosse            #+#    #+#             */
/*   Updated: 2023/11/10 18:21:06 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
// color
# define BLACK "\033[0;30m"
# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define BLUE "\033[0;34m"
# define PURPLE "\033[0;35m"
# define CYAN "\033[0;36m"
# define WHITE "\033[0;37m"

# define BOLD_BLACK "\033[0;40m"
# define BOLD_RED "\033[0;41m"
# define BOLD_GREEN "\033[0;42m"
# define BOLD_YELLOW "\033[0;43m"
# define BOLD_BLUE "\033[0;44m"
# define BOLD_PURPLE "\033[0;45m"
# define BOLD_CYAN "\033[0;46m"
# define BOLD_WHITE "\033[0;47m"

# define BACK_BLACK "\033[0;40m"
# define BACK_RED "\033[0;41m"
# define BACK_GREEN "\033[0;42m"
# define BACK_YELLOW "\033[0;43m"
# define BACK_BLUE "\033[0;44m"
# define BACK_PURPLE "\033[0;45m"
# define BACK_CYAN "\033[0;46m"
# define BACK_WHITE "\033[0;47m"

# define RESET "\033[0m"
# define RST "\033[0m"

class Animal
{
		public:
			Animal();
			Animal(std::string type);
			Animal(const Animal& src);
			Animal&operator=(const Animal& src);
			virtual ~Animal();

			virtual void		makeSound(void) const;

			std::string	getType(void) const;
			void		setType(std::string type);

		private:
			std::string	_type;
};

#endif