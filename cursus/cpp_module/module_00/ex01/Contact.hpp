/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 18:51:09 by gael              #+#    #+#             */
/*   Updated: 2023/10/23 16:21:45 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// declare like a struct public & private
// public constructor / destructor

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <csignal>

class Contact
{
	public:
		Contact();
		void set_first_name(std::string str);
		void set_last_name(std::string str);
		void set_nick_name(std::string str);
		void set_phone_number(std::string str);
		void set_secret(std::string str);
		std::string get_first_name();
		std::string get_last_name();
		std::string get_nick_name();
		std::string get_phone_number();
		std::string get_secret();

	private:
		std::string first_name;
		std::string last_name;
		std::string nick_name;
		std::string phone_number;
		std::string secret;
};

#endif