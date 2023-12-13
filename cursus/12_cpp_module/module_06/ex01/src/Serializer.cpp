/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 18:20:29 by ggosse            #+#    #+#             */
/*   Updated: 2023/12/13 19:03:07 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Serializer.hpp"

// canonical form
Serializer::Serializer(void)
{
	std::cout << "Serializer Constructor called" << std::endl;
}

Serializer::Serializer(const Serializer& src)
{
	std::cout << "Copy Serializer constructor called" << std::endl;
	*this = src;
}
Serializer& Serializer::operator=(const Serializer& src)
{
	static_cast<void>(src);
	std::cout << "Overload Serializer operator called" << std::endl;
	return (*this);
}
Serializer::~Serializer(void)
{
	std::cout << "Serializer Destructor called" << std::endl;
}

// methods
uintptr_t Serializer::serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}
