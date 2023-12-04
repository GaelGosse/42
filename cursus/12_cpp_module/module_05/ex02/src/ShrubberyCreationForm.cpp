/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 17:08:19 by ggosse            #+#    #+#             */
/*   Updated: 2023/12/04 18:26:12 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ShrubberyCreationForm.hpp"

// canonical form
ShrubberyCreationForm::ShrubberyCreationForm(void) :
	AForm(), _target("unknown")
{
	std::cout << GREEN << "ShrubberyCreationForm Constructor called" << RST << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string name) :
	AForm("Shrubbery Creation", 145, 137), _target(name)
{
	std::cout << GREEN << "ShrubberyCreationForm Constructor called" << RST << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& src) :
	AForm(src)
{
	std::cout << GREEN "Copy ShrubberyCreationForm constructor called" << RST << std::endl;
	*this = src;
}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& src)
{
	std::cout << "Overload ShrubberyCreationForm operator called" << std::endl;
	setTarget(src.getTarget());
	return (*this);
}
ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << RED << "ShrubberyCreationForm Destructor called" << RST << std::endl;
}

// methods
void	ShrubberyCreationForm::execute(Bureaucrat const & bureaucrat) const
{
	try
	{
		beExecuted(bureaucrat);
		std::string	filename(_target + "_shrubbery");
		std::ofstream ofs(filename.c_str());
		ofs << ""						<< std::endl;
		ofs << "          /\\"			<< std::endl;
		ofs << "         /__\\"			<< std::endl;
		ofs << "        /____\\"		<< std::endl;
		ofs << "       /______\\"		<< std::endl;
		ofs << "      /________\\"		<< std::endl;
		ofs << "     /__________\\"		<< std::endl;
		ofs << "         |  |"			<< std::endl;
		ofs << "_________|__|_________"	<< std::endl;
		ofs << ""						<< std::endl;

		ofs.close();
		std::cout << filename << " has been created" << std::endl;
	}
	catch (std::exception &e) { std::cout << e.what() << std::endl; }
}

// accessor
void	ShrubberyCreationForm::setTarget(std::string target)
{
	this->_target = target;
}
std::string	ShrubberyCreationForm::getTarget(void) const
{
	return (this->_target);
}

// operator
