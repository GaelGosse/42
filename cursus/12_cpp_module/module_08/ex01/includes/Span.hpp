/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 01:40:53 by gael              #+#    #+#             */
/*   Updated: 2024/01/09 21:27:49 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

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
		Span(int n);
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

		// operators

		// exceptions

	private:
		Span();
		int					_N;
		std::vector<int>	_v;
};

#endif
