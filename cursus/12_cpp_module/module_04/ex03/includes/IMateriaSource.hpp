/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:07:43 by ggosse            #+#    #+#             */
/*   Updated: 2023/11/20 15:50:26 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef I_MATERIASOURCE_HPP
# define I_MATERIASOURCE_HPP

#include <string>
#include <cstdlib>
#include <iomanip>
#include <csignal>
#include <iostream>

#include "AMateria.hpp"

class IMateriaSource
{
	public:
		virtual	~IMateriaSource();
		virtual void		learnMateria(AMateria *m) = 0;
		virtual AMateria	*createMateria(std::string const & type) = 0;
};

#endif
