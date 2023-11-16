/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:17:47 by ggosse            #+#    #+#             */
/*   Updated: 2023/11/16 16:48:08 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

#include "../includes/AWrongAnimal.hpp"

class WrongCat : public AWrongAnimal
{
	public:
		WrongCat();
		WrongCat(const WrongCat&);
		WrongCat&	operator=(const WrongCat&);
		~WrongCat();

		void	makeSound(void) const;
};

#endif