/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 17:08:38 by ggosse            #+#    #+#             */
/*   Updated: 2023/12/04 18:25:56 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RobotomyRequestForm.hpp"

// canonical form
RobotomyRequestForm::RobotomyRequestForm(void) :
	AForm(), _target("unknown")
{
	std::cout << GREEN << "RobotomyRequestForm Constructor called" << RST << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm(std::string name) :
	AForm("Robotomy", 72, 45), _target(name)
{
	std::cout << GREEN << "RobotomyRequestForm Constructor called" << RST << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src) :
	AForm(src)
{
	std::cout << GREEN << "Copy RobotomyRequestForm constructor called" << RST << std::endl;
	*this = src;
}
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& src)
{
	std::cout << "Overload RobotomyRequestForm operator called" << std::endl;
	setTarget(src.getTarget());
	return (*this);
}
RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << RED << "RobotomyRequestForm Destructor called" << RST << std::endl;
}

// methods
void	RobotomyRequestForm::execute(Bureaucrat const & bureaucrat) const
{
	try
	{
		beExecuted(bureaucrat);
		std::cout << "Brrrrr..." << std::endl;
		if (std::rand() % 2)
			std::cout << BOLD_WHITE << bureaucrat.getName() << RST << " became robot" << std::endl;
		else
			std::cout << "operation failed" << std::endl;
	}
	catch (std::exception &e) { std::cout << e.what() << std::endl; }
}

// accessor
void	RobotomyRequestForm::setTarget(std::string target)
{
	this->_target = target;
}
std::string	RobotomyRequestForm::getTarget(void) const
{
	return (this->_target);
}

// operator

