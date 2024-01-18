/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:51:42 by ggosse            #+#    #+#             */
/*   Updated: 2024/01/18 16:04:09 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iomanip>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <climits>
#include <cctype>
#include <cstdlib>
#include <algorithm>
#include <sys/time.h>
#include <stack>
#include <vector>
#include <list>
#include <map>
#include <deque>
#include <set>

class BitcoinExchange
{
	public:
		// canonical form
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange&src);
		BitcoinExchange&operator=(const BitcoinExchange&src);
		~BitcoinExchange();

// others constructors

// methods

// accessor

// operator

// exceptions

	// private:
	// 	std::map<double>	_btc;
};

#endif
