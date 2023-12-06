/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 18:33:52 by ggosse            #+#    #+#             */
/*   Updated: 2023/12/06 18:51:40 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <string>
#include <cstdlib>
#include <iomanip>
#include <csignal>
#include <iostream>

#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"

class Intern
{
	public:
		// canonical form
		Intern();
		Intern(const Intern&src);
		Intern&operator=(const Intern&src);
		~Intern();

		// methods
		AForm	*makeForm(form_name, form_target);

		// accessor

		// operator

		// exceptions

	private:

};

#endif
