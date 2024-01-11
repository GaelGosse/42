/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 01:40:53 by gael              #+#    #+#             */
/*   Updated: 2024/01/11 16:14:37 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <algorithm>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <csignal>
#include <iostream>
#include <vector>

class Span
{
	public:
		// canonical form
		Span(unsigned int n);
		Span(const Span&src);
		Span&operator=(const Span&src);
		~Span();
		// other constructor

		// methods
		void	addNumber(int nbr);
		void	addRange(std::vector<int>::iterator const& begin, std::vector<int>::iterator const& end);
		int		shortestSpan();
		int		longestSpan();

		// accessors
		std::vector<int>	getVector() const;
		unsigned int		getSize() const;

		// operators

		// exceptions
		class FullException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Vector is full");
				}
		};
		class EmptyException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Vector is empty");
				}
		};

	private:
		Span();
		unsigned int		_size;
		std::vector<int>	_v;
};

#endif
