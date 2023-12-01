/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 17:08:38 by ggosse            #+#    #+#             */
/*   Updated: 2023/12/01 17:08:38 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <string>
#include <cstdlib>
#include <iomanip>
#include <csignal>
#include <iostream>

class RobotomyRequestForm
{
	public:
		// canonical form
		RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm&src);
		RobotomyRequestForm&operator=(const RobotomyRequestForm&src);
		~RobotomyRequestForm();

		// methods

		// accessor

		// operator

	private:
		std::string	name;
};

#endif
