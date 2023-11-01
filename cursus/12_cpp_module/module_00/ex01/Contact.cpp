/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 20:04:14 by gael              #+#    #+#             */
/*   Updated: 2023/10/09 21:50:07 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// all method of class in hpp declared here
#include "Contact.hpp"
#include "color.hpp"

Contact::Contact(void)
{
	std::string first_name = "";
	std::string last_name = "";
	std::string nick_name = "";
	std::string phone_number = "";
	std::string secret = "";
	std::cout << BACK_GREEN " Instance of Contact Created " RESET << std::endl;
}

void	Contact::set_first_name(std::string str)
{
	this->first_name = str;
}

void	Contact::set_last_name(std::string str)
{
	this->last_name = str;
}

void	Contact::set_nick_name(std::string str)
{
	this->nick_name = str;
}

void	Contact::set_phone_number(std::string str)
{
	this->phone_number = str;
}

void	Contact::set_secret(std::string str)
{
	this->secret = str;
}

std::string Contact::get_first_name()
{
	std::string	res;

	res = this->first_name;
	return (res);
}

std::string Contact::get_last_name()
{
	std::string	res;

	res = this->last_name;
	return (res);
}

std::string Contact::get_nick_name()
{
	std::string	res;

	res = this->nick_name;
	return (res);
}

std::string Contact::get_phone_number()
{
	std::string	res;

	res = this->phone_number;
	return (res);
}

std::string Contact::get_secret()
{
	std::string	res;

	res = this->secret;
	return (res);
}

