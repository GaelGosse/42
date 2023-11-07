/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:48:07 by ggosse            #+#    #+#             */
/*   Updated: 2023/11/07 19:48:31 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <string>
#include <cstdlib>
#include <iomanip>
#include <csignal>
#include <iostream>
#include "Animal.hpp"

class Cat : Animal
{
	public:
		Cat();
		Cat(const Cat&src);
		Cat&operator=(const Cat&src);
		~Cat();

	private:
		std::string	name;
};

#endif
