/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 21:05:16 by gael              #+#    #+#             */
/*   Updated: 2024/01/09 00:53:27 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <string>
#include <cstdlib>
#include <iomanip>
#include <csignal>
#include <iostream>
#include <algorithm>

#include <vector>
#include <list>

template <typename T>
typename T::iterator	easyfind(T& container, int value)
{
	return (std::find(container.begin(), container.end(), value));
}

#endif
