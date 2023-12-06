/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 17:08:19 by ggosse            #+#    #+#             */
/*   Updated: 2023/12/04 15:53:30 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class AForm;

class ShrubberyCreationForm : public AForm
{
	public:
		// canonical form
		ShrubberyCreationForm(std::string name);
		ShrubberyCreationForm(const ShrubberyCreationForm&src);
		ShrubberyCreationForm&operator=(const ShrubberyCreationForm&src);
		~ShrubberyCreationForm();

		// methods
		void	execute(Bureaucrat const & bureaucrat) const;

		// accessor
		void		setTarget(std::string target);
		std::string	getTarget(void) const;

		// operator

	private:
		ShrubberyCreationForm();
		std::string	_target;
};

#endif
