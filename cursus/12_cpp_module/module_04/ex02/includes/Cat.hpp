/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:17:47 by ggosse            #+#    #+#             */
/*   Updated: 2023/11/19 16:10:38 by gael             ###   ########.fr       */
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

		void		makeSound(void) const;
		std::string	think(int idx) const;

	private:
		Brain*	_brain;
};

#endif