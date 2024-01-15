/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:40:25 by gael              #+#    #+#             */
/*   Updated: 2024/01/15 17:20:39 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <string>
#include <cstdlib>
#include <iomanip>
#include <csignal>
#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		// canonical form
		MutantStack<T>();
		MutantStack<T>(const MutantStack& src);
		MutantStack<T>&operator=(const MutantStack& src);
		~MutantStack<T>();

		// add *_iterator in MutantStack with real stack
		typedef typename MutantStack<T>::stack::container_type::iterator iterator;
		typedef typename MutantStack<T>::stack::container_type::reverse_iterator reverse_iterator;
		typedef typename MutantStack<T>::stack::container_type::const_iterator const_iterator;
		typedef typename MutantStack<T>::stack::container_type::const_reverse_iterator const_reverse_iterator;

		// methods
		iterator	begin(void);
		reverse_iterator	begin(void);
		const_iterator	begin(void);
		const_reverse_iterator	begin(void);

		// accessors

		// operators

		// exceptions

};

#endif
