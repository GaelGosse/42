/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:17:47 by ggosse            #+#    #+#             */
/*   Updated: 2023/11/14 14:54:52 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "A_Animal.hpp"
#include "Brain.hpp"

class Cat : public A_Animal
{
	public:
		Cat();
		Cat(const Cat&);
		Cat&	operator=(const Cat&);
		~Cat();

		void	makeSound(void) const;
		void	think(int idx) const;

	private:
		Brain*	brain;
};

#endif