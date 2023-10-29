/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 18:56:44 by gael              #+#    #+#             */
/*   Updated: 2023/10/12 16:05:46 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include "color.hpp"

int	main(int argc, char **argv)
{
	if (argc != 1)
	{
		std::cout << "wrong argument";
		return (1);
	}
	PhoneBook	phonebook;
	Contact		newContact;
	std::string	prpt;
	int			i_contact = 0;


	std::cout << RESET "\tWhat do you want to do ? (ADD / SEARCH / EXIT)" << std::endl;;
	while (true)
	{
		std::cout << YELLOW ">";
		std::cin >> prpt;
		if (prpt == "ADD")
		{
			phonebook.add_contact(i_contact);
			i_contact++;
		}
		else if (prpt == "SEARCH")
		{
			std::cout << RESET;
			phonebook.display_phonebook(i_contact);
		}
		else if (prpt == "EXIT")
		{
			break ;
		}
		else
			std::cout << RED "Wrong input, must be ADD / SEARCH / EXIT" RESET << std::endl;
	}
	(void)argv;
	(void)argc;
	(void)phonebook;
}
