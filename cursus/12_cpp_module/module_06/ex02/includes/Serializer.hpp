/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 18:20:29 by ggosse            #+#    #+#             */
/*   Updated: 2023/12/13 18:46:33 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <string>
#include <cstdlib>
#include <iomanip>
#include <csignal>
#include <iostream>
#include <stdint.h>

struct Data
{
	std::string	str;
	std::string	getStr(void){ return (str); }
};

class Serializer
{
	public:
		// canonical form
		Serializer();
		Serializer(const Serializer&src);
		Serializer&operator=(const Serializer&src);
		~Serializer();

		// methods
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);

	private:
		std::string	name;
};

#endif
