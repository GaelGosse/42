/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 21:35:46 by gael              #+#    #+#             */
/*   Updated: 2023/10/12 20:49:23 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "color.hpp"

PhoneBook::PhoneBook()
{
}

void	PhoneBook::add_contact(int i_contact)
{
	std::string	answer;
	int			i_letter = 0;
	int			not_accept = 1;

	std::getline(std::cin, answer);
	not_accept = 1;
	while (not_accept == 1)
	{
		std::cout << RESET BOLD_WHITE "  what is the first_name ?" RESET << std::endl;
		std::getline(std::cin, answer);
		i_letter = 0;
		not_accept = 0;
		while (answer[i_letter])
		{
			if (!std::isalpha(answer[i_letter]) && !std::isspace(answer[i_letter]))
			{
				std::cout << " `" << answer[i_letter] << "` is not accepted as a character" << std::endl;
				not_accept = 1;
			}
			i_letter++;
		}
		if (i_letter == 0)
			not_accept = 1;
	}
	this->contact[i_contact % 8].set_first_name(answer);
	std::cout << std::endl;

	not_accept = 1;
	while (not_accept == 1)
	{
		std::cout << RESET BOLD_WHITE "  what is the last_name ?" RESET << std::endl;
		std::getline(std::cin, answer);
		i_letter = 0;
		not_accept = 0;
		while (answer[i_letter])
		{
			if (!std::isalpha(answer[i_letter]) && !std::isspace(answer[i_letter]))
			{
				std::cout << " `" << answer[i_letter] << "` is not accepted as a character" << std::endl;
				not_accept = 1;
			}
			i_letter++;
		}
		if (i_letter == 0)
			not_accept = 1;
	}
	this->contact[i_contact % 8].set_last_name(answer);
	std::cout << std::endl;

	not_accept = 1;
	while (not_accept == 1)
	{
		std::cout << RESET BOLD_WHITE "  what is the nick_name ?" RESET << std::endl;
		std::getline(std::cin, answer);
		i_letter = 0;
		not_accept = 0;
		while (answer[i_letter])
		{
			if (!std::isalpha(answer[i_letter]) && !std::isspace(answer[i_letter]) && !std::isdigit(answer[i_letter]))
			{
				std::cout << " `" << answer[i_letter] << "` is not accepted as a character" << std::endl;
				not_accept = 1;
			}
			i_letter++;
		}
		if (i_letter == 0)
			not_accept = 1;
	}
	this->contact[i_contact % 8].set_nick_name(answer);
	std::cout << std::endl;;

	not_accept = 1;
	while (not_accept == 1)
	{
		std::cout << RESET BOLD_WHITE "  what is the phone_number ?" RESET << std::endl;
		std::getline(std::cin, answer);
		i_letter = 0;
		not_accept = 0;
		while (answer[i_letter])
		{
			if (!std::isdigit(answer[i_letter]))
			{
				std::cout << " `" << answer[i_letter] << "` is not a number" << std::endl;
				not_accept = 1;
			}
			i_letter++;
		}
		if (i_letter == 0)
			not_accept = 1;
	}
	this->contact[i_contact % 8].set_phone_number(answer);
	std::cout << std::endl;;

	not_accept = 1;
	while (not_accept == 1)
	{
		std::cout << RESET BOLD_WHITE "  what is the secret ?" RESET << std::endl;
		std::getline(std::cin, answer);
		i_letter = 0;
		not_accept = 0;
		while (answer[i_letter])
		{
			if (!std::isalpha(answer[i_letter]) && !std::isspace(answer[i_letter]) && !std::isdigit(answer[i_letter]))
			{
				std::cout << " `" << answer[i_letter] << "` is not accepted as a character" << std::endl;
				not_accept = 1;
			}
			i_letter++;
		}
		if (i_letter == 0)
			not_accept = 1;
	}
	this->contact[i_contact % 8].set_secret(answer);
	std::cout << std::endl;;

}

void	PhoneBook::display_contact(int i_display)
{
	std::cout << RESET "";
	std::cout << "first name   :  " << this->contact[i_display].get_first_name() << std::endl;
	std::cout << "last name    :  " << this->contact[i_display].get_last_name() << std::endl;
	std::cout << "nick name    :  " << this->contact[i_display].get_nick_name() << std::endl;
	std::cout << "phone number :  " << this->contact[i_display].get_phone_number() << std::endl;
	std::cout << "secret       :  " << this->contact[i_display].get_secret() << std::endl;
	std::cout << std::endl;
}

void	PhoneBook::display_phonebook(int i_actual)
{
	std::string	prpt;
	int			i_display = 0;

	std::cout << std::endl;
	std::cout << std::right << std::setw(11) << "index" << "|";
	std::cout << std::right << std::setw(11) << "first name" << "|";
	std::cout << std::right << std::setw(11) << "last name" << "|";
	std::cout << std::right << std::setw(11) << "nick name" << "|";
	std::cout << std::endl;
	if (i_actual >= 8)
		i_actual = 8;
	while (i_display < i_actual)
	{
		std::cout << std::right << std::setw(11) << i_display + 1 << "|";

		if (this->contact[i_display].get_first_name().size() > 10)
			std::cout << std::right << std::setw(10) << this->contact[i_display].get_first_name().substr(0, 9) << ".|";
		else
			std::cout << std::right << std::setw(11) << this->contact[i_display].get_first_name().substr(0, 10) << "|";

		if (this->contact[i_display].get_last_name().size() > 10)
			std::cout << std::right << std::setw(10) << this->contact[i_display].get_last_name().substr(0, 9) << ".|";
		else
			std::cout << std::right << std::setw(11) << this->contact[i_display].get_last_name().substr(0, 10) << "|";

		if (this->contact[i_display].get_nick_name().size() > 10)
			std::cout << std::right << std::setw(10) << this->contact[i_display].get_nick_name().substr(0, 9) << ".|";
		else
			std::cout << std::right << std::setw(11) << this->contact[i_display].get_nick_name().substr(0, 10) << "|";

		i_display++;
		std::cout << std::endl;
	}

	std::cout << std::endl;
	prpt = "9";
	std::cout << "Which one do you want to see ? (1-8)" << std::endl;
	while (atoi(prpt.c_str()) < 1 || atoi(prpt.c_str()) > 8)
	{
		std::cin >> prpt;
		if (atoi(prpt.c_str()) < 1 || atoi(prpt.c_str()) > 8)
			std::cout << RED "must be " << prpt << " a digit between (1-8)" RESET << std::endl;
	}
	if (atoi(prpt.c_str()) > 0 && atoi(prpt.c_str()) > i_display)
		std::cout << RED "contact does not exist" RESET << std::endl;
	else
		this->display_contact(atoi(prpt.c_str()) - 1);
}
