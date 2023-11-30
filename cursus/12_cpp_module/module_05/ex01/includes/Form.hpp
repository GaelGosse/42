/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 20:39:24 by gael              #+#    #+#             */
/*   Updated: 2023/11/30 12:55:07 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <string>
#include <cstdlib>
#include <iomanip>
#include <csignal>
#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
	public:
		// canonical form
		Form();
		Form(const Form&src);
		Form&operator=(const Form&src);
		~Form();
		// other constructor
		Form(std::string name, int grade_sign, int grade_exec);

		// methods
		void	beSigned(const Bureaucrat& Bureaucrat);

		// accessors
		std::string	getname(void) const;
		int			getGradeSign(void) const;
		int			getGradeExec(void) const;
		bool		getSigned(void) const;

		// exceptions
		class FormException : public std::exception
		{
			public:
				virtual const char* what() const throw () = 0;
		};
		class GradeTooHighException : public FormException
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Grade is Too High...");
				}
		};
		class GradeTooLowException : public FormException
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Grade is Too Low...");
				}
		};

	private:
		const std::string	_name;
		const int			_grade_sign;
		const int			_grade_exec;
		bool				_isSigned;
};

#endif
