/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 18:33:52 by ggosse            #+#    #+#             */
/*   Updated: 2023/12/06 19:58:21 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Intern.hpp"

// canonical form
Intern::Intern(void)
{
	std::cout << "Intern Constructor called" << std::endl;
}

Intern::Intern(const Intern& src)
{
	std::cout << "Copy Intern constructor called" << std::endl;
	*this = src;
}
Intern& Intern::operator=(const Intern& src)
{
	std::cout << "Overload Intern operator called" << std::endl;
	(void)src;
	return (*this);
}
Intern::~Intern(void)
{
	std::cout << "Intern Destructor called" << std::endl;
}

// methods
AForm	*makeForm(form_name, form_target)
{

	std::string levels[3] = {
		"Presidential Pardon",
		"Robotomy Request",
		"Shrubbery Creation",
	};
	void(Intern::*f[3])(void) = {
		&Intern::makePresidentialForm,
		&Intern::makeRobotomyForm,
		&Intern::makeShrubberyForm
	};

	for (int i = 0; i < 3; i++)
	{
		if (levels[i] == form_name)
			(this->*f[i])();
	}

	return (form);
}
AForm	*Intern::makePresidentialForm(std::string target)
{
	return (new PresidentialPardonForm(target));
}
AForm	*Intern::makeRobotomyForm(std::string target)
{
	return (new RobotomyRequestForm(target));
}
AForm	*Intern::makeShrubberyForm(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

// accessor

// operator

// exceptions


