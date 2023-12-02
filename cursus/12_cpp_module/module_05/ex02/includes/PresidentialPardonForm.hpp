/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 17:08:51 by ggosse            #+#    #+#             */
/*   Updated: 2023/12/02 18:19:16 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class AForm;

class PresidentialPardonForm
{
	public:
		// canonical form
		PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm&src);
		PresidentialPardonForm&operator=(const PresidentialPardonForm&src);
		~PresidentialPardonForm();

		// methods

		// accessor

		// operator

	private:
		std::string	name;
};

#endif
