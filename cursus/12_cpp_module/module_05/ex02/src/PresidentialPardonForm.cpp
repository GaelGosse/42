/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 17:08:51 by ggosse            #+#    #+#             */
/*   Updated: 2023/12/05 17:03:40 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PresidentialPardonForm.hpp"

// canonical form
PresidentialPardonForm::PresidentialPardonForm(void) :
	AForm(), _target("unknown")
{
	std::cout << GREEN << "PresidentialPardonForm Constructor called" << RST << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(std::string name) :
	AForm("Presidential Form", 25, 5), _target(name)
{
	std::cout << GREEN << "PresidentialPardonForm Constructor called" << RST << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& src) :
	AForm(src)
{
	std::cout << GREEN << "Copy PresidentialPardonForm constructor called" << RST << std::endl;
	*this = src;
}
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& src)
{
	std::cout << "Overload PresidentialPardonForm operator called" << std::endl;
	setTarget(src.getTarget());
	return (*this);
}
PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << RED << "PresidentialPardonForm Destructor called" << RST << std::endl;
}

// methods
void	PresidentialPardonForm::execute(Bureaucrat const & bureaucrat) const
{
	// try
	// {
		beExecuted(bureaucrat);
		std::cout << BOLD_WHITE << this->getName() << RST << " has been pardon by Zaphod Beeblebrox" << std::endl;
	// }
	// catch (std::exception &e) { std::cout << e.what() << std::endl; }
}

// accessor
void	PresidentialPardonForm::setTarget(std::string target)
{
	this->_target = target;
}
std::string	PresidentialPardonForm::getTarget(void) const
{
	return (this->_target);
}

// operator

