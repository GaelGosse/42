/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:17:47 by ggosse            #+#    #+#             */
/*   Updated: 2023/11/19 16:10:41 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
#include "A_Animal.hpp"
#include "Brain.hpp"

class Dog : public A_Animal
{
	public:
		Dog();
		Dog(const Dog& src);
		Dog&operator=(const Dog& src);
		~Dog();

		void		makeSound(void) const;
		std::string	think(int idx) const;

	private:
		Brain*	_brain;
};

#endif