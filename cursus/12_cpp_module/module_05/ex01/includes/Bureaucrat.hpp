/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:18:58 by ggosse            #+#    #+#             */
/*   Updated: 2023/12/01 15:42:29 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

// color
# define BLACK "\033[0;30m"
# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define BLUE "\033[0;34m"
# define PURPLE "\033[0;35m"
# define CYAN "\033[0;36m"
# define WHITE "\033[0;37m"

# define BOLD_BLACK "\033[1;30m"
# define BOLD_RED "\033[1;31m"
# define BOLD_GREEN "\033[1;32m"
# define BOLD_YELLOW "\033[1;33m"
# define BOLD_BLUE "\033[1;34m"
# define BOLD_PURPLE "\033[1;35m"
# define BOLD_CYAN "\033[1;36m"
# define BOLD_WHITE "\033[1;37m"

# define DIM_BLACK "\033[2;30m"
# define DIM_RED "\033[2;31m"
# define DIM_GREEN "\033[2;32m"
# define DIM_YELLOW "\033[2;33m"
# define DIM_BLUE "\033[2;34m"
# define DIM_PURPLE "\033[2;35m"
# define DIM_CYAN "\033[2;36m"
# define DIM_WHITE "\033[2;37m"

# define ITALIC_BLACK "\033[3;30m"
# define ITALIC_RED "\033[3;31m"
# define ITALIC_GREEN "\033[3;32m"
# define ITALIC_YELLOW "\033[3;33m"
# define ITALIC_BLUE "\033[3;34m"
# define ITALIC_PURPLE "\033[3;35m"
# define ITALIC_CYAN "\033[3;36m"
# define ITALIC_WHITE "\033[3;37m"

# define UNDER_BLACK "\033[4;30m"
# define UNDER_RED "\033[4;31m"
# define UNDER_GREEN "\033[4;32m"
# define UNDER_YELLOW "\033[4;33m"
# define UNDER_BLUE "\033[4;34m"
# define UNDER_PURPLE "\033[4;35m"
# define UNDER_CYAN "\033[4;36m"
# define UNDER_WHITE "\033[4;37m"

# define BLINK_BLACK "\033[5;30m"
# define BLINK_RED "\033[5;31m"
# define BLINK_GREEN "\033[5;32m"
# define BLINK_YELLOW "\033[5;33m"
# define BLINK_BLUE "\033[5;34m"
# define BLINK_PURPLE "\033[5;35m"
# define BLINK_CYAN "\033[5;36m"
# define BLINK_WHITE "\033[5;37m"

# define BACK_BLACK "\033[0;40m"
# define BACK_RED "\033[0;41m"
# define BACK_GREEN "\033[0;42m"
# define BACK_YELLOW "\033[0;43m"
# define BACK_BLUE "\033[0;44m"
# define BACK_PURPLE "\033[0;45m"
# define BACK_CYAN "\033[0;46m"
# define BACK_WHITE "\033[0;47m"

# define RESET "\033[0m"
# define RST "\033[0m"

#include <string>
#include <cstdlib>
#include <iomanip>
#include <csignal>
#include <iostream>
#include "Form.hpp"

class Form;

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
		void	signForm(Form& form);
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
