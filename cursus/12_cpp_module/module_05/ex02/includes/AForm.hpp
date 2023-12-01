/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 20:39:24 by gael              #+#    #+#             */
/*   Updated: 2023/12/01 15:40:12 by ggosse           ###   ########.fr       */
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

class Bureaucrat;

class AForm
{
	public:
		// canonical form
		AForm();
		AForm(const AForm&src);
		AForm&operator=(const AForm&src);
		~AForm();
		// other constructor
		AForm(std::string name, int grade_sign, int grade_exec);

		// methods
		void	beSigned(const Bureaucrat& Bureaucrat);
		void	checkGrade(int new_grade);

		// accessors
		std::string	getName(void) const;
		int			getGradeSign(void) const;
		int			getGradeExec(void) const;
		bool		getSigned(void) const;

		// exceptions
		class AFormException : public std::exception
		{
			public:
				virtual const char* what() const throw () = 0;
		};
		class GradeTooHighException : public AFormException
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Grade is Too High...");
				}
		};
		class GradeTooLowException : public AFormException
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

std::ostream &operator<<(std::ostream &out, AForm const &src);

#endif
