/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 17:08:19 by ggosse            #+#    #+#             */
/*   Updated: 2023/12/02 18:19:30 by ggosse           ###   ########.fr       */
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
		ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm&src);
		ShrubberyCreationForm&operator=(const ShrubberyCreationForm&src);
		~ShrubberyCreationForm();

		// other constructor
		ShrubberyCreationForm(std::string filename);


		// methods
		void	execute(Bureaucrat const & bureaucrat) const;

		// accessor

		// operator

	private:
		std::string	_target;
};

#endif
