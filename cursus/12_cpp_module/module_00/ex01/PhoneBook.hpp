/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 21:40:47 by gael              #+#    #+#             */
/*   Updated: 2023/10/12 12:31:07 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <csignal>
#include "Contact.hpp"

class PhoneBook
{
	public:
		PhoneBook();
		void	add_contact(int i);
		void	display_contact(int i);
		void	display_phonebook(int i);

	private:
		Contact contact[8];
};

#endif