/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:18:58 by ggosse            #+#    #+#             */
/*   Updated: 2024/04/18 16:13:45 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

// canonical form
Bureaucrat::Bureaucrat(void) : _name("no one"), _grade(150)
{
	std::cout << "Bureaucrat Constructor called for '" << _name << "' at grade " << _grade << std::endl;
}
Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	checkGrade(grade);
	this->_grade = grade;
	std::cout << "Bureaucrat Constructor called for '" << _name << "' at grade " << _grade << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& src)
{
	std::cout << "Copy Bureaucrat Constructor called for '" << _name << "' at grade " << _grade << std::endl;
	*this = src;
}
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& src)
{
	std::cout << "Overload Bureaucrat operator called" << std::endl;
	// this->_name = src.getName(); // cannot set because _name is const string
	this->_grade = src.getGrade();
	return (*this);
}
Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat Destructor called for '" << _name << "' at grade " << _grade << std::endl;
}

// operator
std::ostream &operator<<(std::ostream &out, Bureaucrat const &src)
{
	out << src.getName() << ", bureaucrat grade " << src.getGrade();
	return (out);
}

// methods
void	Bureaucrat::checkGrade(int new_grade)
{
	if (new_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (new_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}
void	Bureaucrat::upgrade(void)
{
	try
	{
		checkGrade(this->_grade - 1);
		this->_grade--;
		std::cout << this->_name << " upgrade to " << this->_grade << " grade" << std::endl;
	}
	catch (BureaucratException &e)
	{
		std::cout << e.what() << std::endl;
	}
}
void	Bureaucrat::downgrade(void)
{
	try
	{
		checkGrade(this->_grade + 1);
		this->_grade++;
		std::cout << this->_name << " downgrade to " << this->_grade << " grade" << std::endl;
	}
	catch (BureaucratException &e)
	{
		std::cout << e.what() << std::endl;
	}
}

// accessor
const std::string	Bureaucrat::getName(void) const
{
	return (this->_name);
}
int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}
