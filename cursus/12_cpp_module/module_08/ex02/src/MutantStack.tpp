/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:40:25 by gael              #+#    #+#             */
/*   Updated: 2024/01/16 15:37:06 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MutantStack.hpp"

// canonical form

template <typename T>
MutantStack<T>::MutantStack(void) : std::stack<T>()
{
	std::cout << "MutantStack Constructor called" << std::endl;
}
template <typename T>
MutantStack<T>::MutantStack(const MutantStack& src) : std::stack<T>( src )
{
	std::cout << "Copy MutantStack constructor called" << std::endl;
	*this = src;
}
template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack& src)
{
	std::cout << "Overload MutantStack operator called" << std::endl;
	(void)src;
	return (*this);
}
template <typename T>
MutantStack<T>::~MutantStack(void)
{
	std::cout << "MutantStack Destructor called" << std::endl;
}

// method
template <typename T>
typename MutantStack<T>::stack::container_type::iterator	MutantStack<T>::begin(void)
{
	return (this->c.begin());
}
template <typename T>
typename MutantStack<T>::stack::container_type::iterator	MutantStack<T>::end(void)
{
	return (this->c.end());
}

template <typename T>
typename MutantStack<T>::stack::container_type::reverse_iterator	MutantStack<T>::rbegin(void)
{
	return (this->c.rbegin());
}
template <typename T>
typename MutantStack<T>::stack::container_type::reverse_iterator	MutantStack<T>::rend(void)
{
	return (this->c.rend());
}

template <typename T>
typename MutantStack<T>::stack::container_type::const_iterator	MutantStack<T>::cbegin(void) const
{
	return (this->c.begin());
}
template <typename T>
typename MutantStack<T>::stack::container_type::const_iterator	MutantStack<T>::cend(void) const
{
	return (this->c.end());
}

template <typename T>
typename MutantStack<T>::stack::container_type::const_reverse_iterator	MutantStack<T>::crbegin(void) const
{
	return (this->c.rbegin());
}
template <typename T>
typename MutantStack<T>::stack::container_type::const_reverse_iterator	MutantStack<T>::crend(void) const
{
	return (this->c.rend());
}

// accessors

// operators

// exceptions

