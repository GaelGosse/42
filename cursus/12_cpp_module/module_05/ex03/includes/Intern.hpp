/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 18:33:52 by ggosse            #+#    #+#             */
/*   Updated: 2023/12/07 13:42:17 by ggosse           ###   ########.fr       */
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
		AForm	*makeForm(std::string form_name, std::string form_target);
		AForm	*makePresidentialForm(std::string target);
		AForm	*makeRobotomyForm(std::string target);
		AForm	*makeShrubberyForm(std::string target);

		// accessor

		// operator

		// exceptions

	private:

};

#endif
