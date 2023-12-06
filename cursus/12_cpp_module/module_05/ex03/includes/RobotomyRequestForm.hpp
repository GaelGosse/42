/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 17:08:38 by ggosse            #+#    #+#             */
/*   Updated: 2023/12/04 15:53:25 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class AForm;

class RobotomyRequestForm : public AForm
{
	public:
		// canonical form
		RobotomyRequestForm(std::string name);
		RobotomyRequestForm(const RobotomyRequestForm&src);
		RobotomyRequestForm&operator=(const RobotomyRequestForm&src);
		~RobotomyRequestForm();

		// methods
		void	execute(Bureaucrat const & bureaucrat) const;

		// accessor
		void		setTarget(std::string target);
		std::string	getTarget(void) const;

		// operator

	private:
		RobotomyRequestForm();
		std::string	_target;
};

#endif
