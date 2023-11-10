/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:17:47 by ggosse            #+#    #+#             */
/*   Updated: 2023/11/10 18:13:46 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
		public:
			Cat();
			Cat(const Cat&);
			Cat&	operator=(const Cat&);
			~Cat();

			void	makeSound(void) const;
};

#endif