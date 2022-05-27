/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:06:34 by ggosse            #+#    #+#             */
/*   Updated: 2022/05/27 16:32:22 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp( const char * first, const char * second, size_t length )
{
	size_t	i;

	i = 0;
	while ((first[i] || second[i]) && i < length)
	{
		if (first[i] != second[i])
		{
			return (first[i] - second[i]);
		}
		i++;
	}
	return (0);
}

int main()
{
	printf("%i\n", ft_strncmp("abc", "abd", 3));
	// printf("%i\n\n", strncmp("abc", "abd", 3));
	printf("%i\n", ft_strncmp("abd", "abc", 3));
	// printf("%i\n\n", strncmp("abd", "abc", 3));
	printf("%i\n", ft_strncmp("abc", "abc", 3));
	// printf("%i\n\n", strncmp("abc", "abc", 3));
}