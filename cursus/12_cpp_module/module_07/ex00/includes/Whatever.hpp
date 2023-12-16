/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 17:31:01 by gael              #+#    #+#             */
/*   Updated: 2023/12/16 17:35:44 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void swap(T a, T b)
{
	T tmp = a;
	a = b;
	b = tmp;
}
template <typename T>
T min(T a, T b)
{
	if (a < b)
		return (a);
	return (b);
}
template <typename T>
T max(T a, T b)
{
	if (a > b)
		return (a);
	return (b);
}

#endif