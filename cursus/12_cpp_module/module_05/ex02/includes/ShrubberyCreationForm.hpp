/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 17:08:19 by ggosse            #+#    #+#             */
/*   Updated: 2023/12/01 18:30:05 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <string>
#include <cstdlib>
#include <iomanip>
#include <csignal>
#include <iostream>

class ShrubberyCreationForm : public AForm
{
	public:
		// canonical form
		ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm&src);
		ShrubberyCreationForm&operator=(const ShrubberyCreationForm&src);
		~ShrubberyCreationForm();

		// methods
		void	execute(Bureaucrat const & bureaucrat) const;

		// accessor

		// operator

	private:
		std::string	name;
};

#endif
