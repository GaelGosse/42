/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:39:08 by gael              #+#    #+#             */
/*   Updated: 2023/12/13 18:57:24 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Serializer.hpp"

int main(void)
{
	Data *Bob = new Data;
	Bob->str = "Bob";

	std::cout << "Bob is               : " << Bob->getStr() << std::endl;

	uintptr_t ser = Serializer::serialize(Bob);

	std::cout << "The string serialize : " << ser << std::endl;

	Data *Patrick = Serializer::deserialize(ser);

	std::cout << "Patrick will be now  : " << Patrick->getStr() << std::endl;

	delete Bob;
}