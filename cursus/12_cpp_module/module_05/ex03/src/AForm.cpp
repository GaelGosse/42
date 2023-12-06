/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 20:39:24 by gael              #+#    #+#             */
/*   Updated: 2023/12/01 15:40:08 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AForm.hpp"

// canonical form
AForm::AForm() :
	_name("unknown"),
	_grade_sign(150),
	_grade_exec(150),
	_isSigned(false)
{
	std::cout << BOLD_GREEN << "AForm Constructor called" << RST << std::endl;
}
AForm::AForm(std::string name, int grade_sign, int grade_exec) :
	_name(name),
	_grade_sign(grade_sign),
	_grade_exec(grade_exec),
	_isSigned(false)
{
	checkGrade(grade_sign);
	checkGrade(grade_exec);
	std::cout << BOLD_GREEN << "AForm Constructor called" << RST << std::endl;
}
AForm::AForm(const AForm& src) :
	// _name(src._name),
	_grade_sign(src._grade_sign),
	_grade_exec(src._grade_exec),
	_isSigned(src._isSigned)
{
	std::cout << BOLD_GREEN << "Copy AForm constructor called" << RST << std::endl;
	*this = src;
}
AForm& AForm::operator=(const AForm& src)
{
	std::cout << "Overload AForm operator called" << std::endl;
	(void)src;
	return (*this);
}
AForm::~AForm(void)
{
	std::cout << BOLD_RED << "AForm Destructor called" << RST << std::endl;
}

// methods
void	AForm::checkGrade(int new_grade) const
{
	if (new_grade < 1)
		throw AForm::GradeTooHighException();
	else if (new_grade > 150)
		throw AForm::GradeTooLowException();
}
void	AForm::checkGradeSign(const Bureaucrat& bureaucrat) const
{
	if (bureaucrat.getGrade() > this->getGradeSign())
		throw AForm::GradeTooLowException();
}
void	AForm::checkGradeExec(const Bureaucrat& bureaucrat) const
{
	if (bureaucrat.getGrade() > this->getGradeExec())
		throw AForm::GradeTooLowException();
}
void	AForm::beSigned(const Bureaucrat& bureaucrat)
{
	// try
	// {
		this->checkGradeSign(bureaucrat);
		if (this->getSigned())
		{
			std::cout << "The form " << BOLD_WHITE << this->getName() << RST << " has been already signed." << std::endl;
		}
		else
		{
			this->_isSigned = true;
			std::cout << "The form " << BOLD_WHITE << this->getName() << RST << " has been signed by " << BOLD_WHITE << bureaucrat.getName() << RST << std::endl;
		}
	// }
	// catch (std::exception &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
}
void	AForm::beExecuted(Bureaucrat const & executor) const
{
	if (!this->_isSigned)
		throw AForm::UnsignedException();
	else if (executor.getGrade() > this->getGradeExec())
		throw AForm::GradeTooLowException();
}

// accessors
std::string	AForm::getName(void) const
{
	return (this->_name);
}
int	AForm::getGradeSign(void) const
{
	return (this->_grade_sign);
}
int	AForm::getGradeExec(void) const
{
	return (this->_grade_exec);
}
bool	AForm::getSigned(void) const
{
	return (this->_isSigned);
}

// operators
std::ostream &operator<<(std::ostream &out, AForm const &src)
{
	out << "The form " << BOLD_WHITE << src.getName() << RST << "," << std::endl;
	out << " has sign grade " << src.getGradeSign() << "," << std::endl;
	out << " have exec grade " << src.getGradeExec() << "," << std::endl;
	out << " and sign status is : " << src.getSigned();
	return (out);
}

