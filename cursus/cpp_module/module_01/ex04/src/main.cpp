/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 17:24:06 by gael              #+#    #+#             */
/*   Updated: 2023/10/30 14:22:05 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

// color
# define BLACK "\033[0;30m"
# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define BLUE "\033[0;34m"
# define PURPLE "\033[0;35m"
# define CYAN "\033[0;36m"
# define WHITE "\033[0;37m"

# define BACK_BLACK "\033[0;40m"
# define BACK_RED "\033[0;41m"
# define BACK_GREEN "\033[0;42m"
# define BACK_YELLOW "\033[0;43m"
# define BACK_BLUE "\033[0;44m"
# define BACK_PURPLE "\033[0;45m"
# define BACK_CYAN "\033[0;46m"
# define BACK_WHITE "\033[0;47m"

# define RESET "\033[0m"
# define RST "\033[0m"

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		std::ifstream	file(argv[1]);
		std::string		search = argv[2];
		std::string		replace = argv[3];
		int				i_read = 0;
		int				i_search = 0;
		int				i_word = 0;

		if (file.is_open()) {
			std::string line;
			while (std::getline(file, line))
			{
				i_read = 0;
				while (line[i_read])
				{
					i_search = 0;
					i_word = i_read;
					while (search[i_search] && search[i_search] == line[i_read])
					{
						i_search++;
						i_read++;
					}
					if (search[i_search] == '\0')
					{
						std::cout << BACK_RED << line.substr(i_word, i_search) << RST;
					}
					i_read++;
				}
			}
			file.close();
		}

		// ifs.close();
	}
	(void)argc;
	(void)argv;
}
