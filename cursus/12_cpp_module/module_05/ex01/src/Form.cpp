/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 20:39:24 by gael              #+#    #+#             */
/*   Updated: 2023/12/01 15:40:08 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Form.hpp"

// canonical form
Form::Form() :
	_name("unknown"),
	_grade_sign(150),
	_grade_exec(150),
	_isSigned(false)
{
	std::cout << GREEN << "Form Constructor called" << RST << std::endl;
}
Form::Form(std::string name, int grade_sign, int grade_exec) :
	_name(name),
	_grade_sign(grade_sign),
	_grade_exec(grade_exec),
	_isSigned(false)
{
	checkGrade(grade_sign);
	checkGrade(grade_exec);
	std::cout << GREEN << "Form Constructor called" << RST << std::endl;
}

Form::Form(const Form& src) :
	// _name(src._name),
	_grade_sign(src._grade_sign),
	_grade_exec(src._grade_exec),
	_isSigned(src._isSigned)
{
	std::cout << GREEN << "Copy Form constructor called" << RST << std::endl;
	*this = src;
}
Form& Form::operator=(const Form& src)
{
	std::cout << "Overload Form operator called" << std::endl;
	(void)src;
	return (*this);
}
Form::~Form(void)
{
	std::cout << RED << "Form Destructor called" << RST << std::endl;
}

// methods
void	Form::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() <= this->getGradeSign())
	{
		if (this->getSigned())
		{
			std::cout << "The form " << BOLD_WHITE << this->getName() << RST << " has been already signed." << std::endl;
		}
		else
		{
			this->_isSigned = true;
			std::cout << "The form " << BOLD_WHITE << this->getName() << RST << " has been signed by " << BOLD_WHITE << bureaucrat.getName() << RST << std::endl;
		}
	}
	else
		throw Form::GradeTooLowException();
}
void	Form::checkGrade(int new_grade)
{
	if (new_grade < 1)
		throw Form::GradeTooHighException();
	else if (new_grade > 150)
		throw Form::GradeTooLowException();
}

// accessors
std::string	Form::getName(void) const
{
	return (this->_name);
}
int	Form::getGradeSign(void) const
{
	return (this->_grade_sign);
}
int	Form::getGradeExec(void) const
{
	return (this->_grade_exec);
}
bool	Form::getSigned(void) const
{
	return (this->_isSigned);
}

// operators
std::ostream &operator<<(std::ostream &out, Form const &src)
{
	out << "The form " << BOLD_WHITE << src.getName() << RST << "," << std::endl;
	out << " has sign grade " << src.getGradeSign() << "," << std::endl;
	out << " have exec grade " << src.getGradeExec() << "," << std::endl;
	out << " and sign status is : " << src.getSigned();
	return (out);
}

