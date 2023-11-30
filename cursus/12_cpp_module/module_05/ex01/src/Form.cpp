/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 20:39:24 by gael              #+#    #+#             */
/*   Updated: 2023/11/30 12:54:24 by gael             ###   ########.fr       */
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
	std::cout << "Form Constructor called" << std::endl;
}
Form::Form(std::string name, int grade_sign, int grade_exec) :
	_name(name),
	_grade_sign(grade_sign),
	_grade_exec(grade_exec),
	_isSigned(false)
{
	std::cout << "Form Constructor called" << std::endl;
}

Form::Form(const Form& src) :
	_name(src._name),
	_grade_sign(src._grade_sign),
	_grade_exec(src._grade_exec),
	_isSigned(src._isSigned)
{
	std::cout << "Copy Form constructor called" << std::endl;
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
	std::cout << "Form Destructor called" << std::endl;
}

// methods
void	beSigned(const Bureaucrat& Bureaucrat)
{
	(void)Bureaucrat;
}

// accessors
std::string	Form::getname(void) const
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
