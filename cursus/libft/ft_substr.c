/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 10:28:53 by gael              #+#    #+#             */
/*   Updated: 2022/05/24 15:28:19 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*result;
	size_t		i;
	size_t		j;

	i = start;
	j = 0;
	if (len > (ft_strlen(s) - start))
	{
		len = ft_strlen(s) - start;
		result = (char	*)malloc((ft_strlen(s) - start) * sizeof(char) + 1);	
	}
	else
		result = (char	*)malloc(len * sizeof(char) + 1);
	if (!result)
		return (NULL);
	while (i < (start + len))
	{
		result[j] = s[i];
		i++;
		j++;
	}

    return (result);
}

int	main()
{
    char    a[] = "abc def gh ijkl mnop";
    // char    b[] = "abc def gh ijkl mnop";

	// printf("substr: %s", ft_substr(a, 4, 30));
	printf("substr: %s", ft_substr(a, 4, 3));

	return (0);
}
