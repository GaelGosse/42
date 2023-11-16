/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:18:58 by ggosse            #+#    #+#             */
/*   Updated: 2023/11/16 17:31:03 by ggosse           ###   ########.fr       */
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
		Bureaucrat(); // canonical form
		Bureaucrat(const Bureaucrat&src); // canonical form
		Bureaucrat&operator=(const Bureaucrat&src); // canonical form
		~Bureaucrat(); // canonical form

		// methods
		void	upgrade(void);
		void	downgrade(void);

		// getter
		const std::string	getName(void);
		int					getGrade(void);

		// setter
		void	setName(const std::string);
		void	setGrade(int);

	private:
		const std::string	_name;
		int					grade;
};

#endif
