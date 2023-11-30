/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:18:58 by ggosse            #+#    #+#             */
/*   Updated: 2023/11/29 20:31:22 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <cstdlib>
#include <iomanip>
#include <csignal>
#include <iostream>

class Bureaucrat
{
	public:
		// canonical form
		Bureaucrat();
		Bureaucrat(const Bureaucrat&src);
		Bureaucrat&operator=(const Bureaucrat&src);
		~Bureaucrat();

		// other constructor
		Bureaucrat(std::string name, int grade);

		// methods
		void	checkGrade(int new_grade);
		void	upgrade(void);
		void	downgrade(void);

		// accessor
		const std::string	getName(void) const;
		int					getGrade(void) const;

		// exception
		class BureaucratException : public std::exception
		{
			public:
				virtual const char* what() const throw() = 0;
		};
		class GradeTooHighException : public BureaucratException
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Grade is Too High...");
				}
		};
		class GradeTooLowException : public BureaucratException
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Grade is Too Low...");
				}
		};


	private:
		const std::string	_name;
		int					_grade;
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &src);

#endif
