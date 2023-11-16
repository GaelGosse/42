/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:18:58 by ggosse            #+#    #+#             */
/*   Updated: 2023/11/16 17:43:35 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

// canonical form
Bureaucrat::Bureaucrat(void)
{
	std::cout << "Bureaucrat Constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& src)
{
	std::cout << "Copy Bureaucrat constructor called" << std::endl;
	*this = src;
}
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& src)
{
	std::cout << "Overload Bureaucrat operator called" << std::endl;
	(void)src;
	return (*this);
}
Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat Destructor called" << std::endl;
}

// methods
std::ostream &operator<<(std::ostream &out, Bureaucrat const &src)
{
	out << src.getName() << ", bureaucrat grade " << src.getGrade();
	return (out);
}

void	Bureaucrat::upgrade(void)
{
	try
	{

	}
	catch (std::exception& e)
	{

	}
}
void	Bureaucrat::downgrade(void)
{
	try
	{

	}
	catch (std::exception& e)
	{

	}
}

// getter
const std::string	Bureaucrat::getName(void)
{

}
int	Bureaucrat::getGrade(void)
{

}

// setter
void	Bureaucrat::setName(const std::string)
{

}
void	Bureaucrat::setGrade(int)
{

}

