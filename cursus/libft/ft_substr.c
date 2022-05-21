/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 10:28:53 by gael              #+#    #+#             */
/*   Updated: 2022/05/21 12:17:18 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t		i;
	size_t		j;

	i = start;
	j = 0;
	result = (char	*)malloc(len * sizeof(char) + 1);
	while (i < (start + len))
	{
		result[j] = s[i];
		i++;
		j++;
	}

    return (result);
}

// int	main()
// {
//     char    a[] = "abc def gh ijkl mnop";
//     // char    b[] = "abc def gh ijkl mnop";

// 	printf("substr: %s", ft_substr(a, 4, 3));

// 	return (0);
// }
