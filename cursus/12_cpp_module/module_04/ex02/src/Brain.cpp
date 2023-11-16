/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 13:44:34 by ggosse            #+#    #+#             */
/*   Updated: 2023/11/16 16:51:15 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

Brain::Brain(void)
{
	std::cout << DIM_GREEN << "Brain Constructor called" << RST << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "I don't want to burn the world";
}

Brain::Brain(const Brain& src)
{
	std::cout << GREEN << "Copy Brain constructor called" << RST << std::endl;
	*this = src;
}

Brain& Brain::operator=(const Brain& src)
{
	std::cout << GREEN << "Overload Brain operator called" << RST << std::endl;
	(void)src;
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << DIM_RED << "Brain Destructor called" << RST << std::endl;
}

std::string	Brain::getIdea(int idx)
{
		// std::cout << this->ideas[idx] << std::endl;
	if (idx >= 0 && idx < 100)
		return (this->ideas[idx]);
	else
		return (NULL);
}

void	Brain::setIdea(int idx, std::string idea)
{
	if (idx >= 0 && idx < 100)
		this->ideas[idx] = idea;
	else
		std::cout << "Wrong index, only 100 ideas started to 0 index : must be between 0 and 99 included." << std::endl;
}
