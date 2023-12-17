/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 00:22:51 by ggosse            #+#    #+#             */
/*   Updated: 2023/12/17 15:56:09 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <string>
#include <cstdlib>
#include <iomanip>
#include <csignal>
#include <iostream>

template <typename T>
void	iter(T *arr, unsigned int size, void (*f)(&T))
{
	for (int i = 0; i < size; i++)
	{
		f(arr[i]);
	}
}



#endif
