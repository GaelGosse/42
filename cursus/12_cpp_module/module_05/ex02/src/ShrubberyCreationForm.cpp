/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 17:08:19 by ggosse            #+#    #+#             */
/*   Updated: 2023/12/02 19:08:37 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ShrubberyCreationForm.hpp"

// canonical form
ShrubberyCreationForm::ShrubberyCreationForm(void) :
	AForm(), _target("unknown")
{
	std::cout << "ShrubberyCreationForm Constructor called" << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string filename) :
	AForm("Shrubbery Creation", 145, 137), _target(filename)
{
	std::cout << GREEN << "ShrubberyCreationForm Constructor called" << RST << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& src)
{
	std::cout << "Copy ShrubberyCreationForm constructor called" << std::endl;
	*this = src;
}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& src)
{
	std::cout << "Overload ShrubberyCreationForm operator called" << std::endl;
	(void)src;
	return (*this);
}
ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "ShrubberyCreationForm Destructor called" << std::endl;
}

// methods
void	ShrubberyCreationForm::execute(Bureaucrat const & bureaucrat) const
{
	if (Bureaucrat.getSigned() == 1 && Bureaucrat.getGrade() >= this->getGradeExec())
	{
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
	}
}

// accessor

// operator
