/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 15:40:20 by ggosse            #+#    #+#             */
/*   Updated: 2023/12/20 20:33:53 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Array.hpp"


// canonical form
template <typename T>
Array<T>::Array(void)
{
	this->_arr = NULL;
	this->_len = 0;
	// std::cout << "Array Constructor called" << std::endl;
}
template <typename T>
Array<T>::Array(const Array<T>& src)
{
	*this = src;
	// std::cout << "Copy Array constructor called" << std::endl;
}
template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& src)
{
	delete [] this->_arr;
	this->_arr = NULL;
	this->_arr = new T(this->_len);
	this->_len = this->_len;
	for (unsigned int i = 0; i < this->_len; i++)
	{
		this->_arr[i] = src[i];
	}
	// std::cout << "Overload Array operator called" << std::endl;
	return (*this);
}
template <typename T>
Array<T>::~Array(void)
{
	// std::cout << "Array Destructor called" << std::endl;
}

// others constructors
template <typename T>
Array<T>::Array(unsigned int n)
{
	this->_len = n;
	this->_arr = new T[n];
	for (unsigned int i = 0; i < _len; i++)
	{
		this->_arr[i] = 0;
		std::cout << "_arr[i]: " << _arr[i] << std::endl;
	}
	// std::cout << "Array Constructor called" << std::endl;
}

// methods
template <typename T>
unsigned int	Array<T>::size(void)
{
	return (this->_len);
}

// accessor

// operator
template <typename T>
T& Array<T>::operator[](unsigned int index)
{
	if (index < 0 || index >= this->_len)
	{
		throw std::out_of_range("Index out of range");
	}
	return (this->_arr[index]);
}

// exceptions
