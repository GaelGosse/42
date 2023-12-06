/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 17:08:51 by ggosse            #+#    #+#             */
/*   Updated: 2023/12/04 17:52:33 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class AForm;

class PresidentialPardonForm : public AForm
{
	public:
		// canonical form
		PresidentialPardonForm(std::string name);
		PresidentialPardonForm(const PresidentialPardonForm&src);
		PresidentialPardonForm&operator=(const PresidentialPardonForm&src);
		~PresidentialPardonForm();

		// methods
		void	execute(Bureaucrat const & bureaucrat) const;

		// accessor
		void		setTarget(std::string target);
		std::string	getTarget(void) const;

		// operator

	private:
		PresidentialPardonForm();
		std::string	_target;
};

#endif
