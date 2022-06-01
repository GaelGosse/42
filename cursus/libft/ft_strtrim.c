/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 08:22:28 by gael              #+#    #+#             */
/*   Updated: 2022/05/31 23:16:17 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

int	ft_isset(const char c, const char	*set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
		{
			// printf("%c is set\n", c);
			return (1);
		}	
		i++;
	}
	// printf("%c is NOT set\n", c);
	return (0);
}

char	*ft_strtrim(const char *str, const char *set)
{
	size_t	start;
	size_t	end;
	char	*res;

	if (!str)
		return (NULL);
	if (!set)
		return (ft_strdup(str));
	start = 0;
	end = ft_strlen(str);
	while (ft_isset(str[start], set) && str[start])
		start++;
	if (start == ft_strlen(str))
	{
		if (!(res = ft_strdup("")))
			return (NULL);
		else
			return (res);
	}
	while (ft_isset(str[end], set) && str[end])
		end++;
	res = ft_substr(str, start, end - start);
	return (res);
}

int	main(void)
{
	char * s = ft_strtrim("   xxxtripouille", " x");
	printf("1: %i\n", strcmp(s, "tripouille"));

	s = ft_strtrim("tripouille   xxx", " x");
	printf("3: %i\n", strcmp(s, "tripouille"));

	s = ft_strtrim("   xxxtripouille   xxx", " x");
	printf("5: %i\n", strcmp(s, "tripouille"));

	s = ft_strtrim("   xxx   xxx", " x");
	printf("7: %i\n", strcmp(s, ""));

	s = ft_strtrim("", "123");
	printf("9: %i\n", strcmp(s, ""));

	s = ft_strtrim("123", "");
	printf("11: %i\n", strcmp(s, "123"));

	s = ft_strtrim("", "");
	printf("13: %i\n", strcmp(s, ""));
	
	s = ft_strtrim("abcdba", "acb");
	printf("15: %i\n", strcmp(s, "d"));

	return (0);
}
/*
char	*ft_strtrim(const char	*str, const char	*set)
{
	size_t		start;
	size_t		end;
	size_t		ite;
	char		*new_str;

	ite = 0;
	start = 0;
	end = ft_strlen((const char *)(str)) - 1;
	while (ft_isset(str[start], set) == 1 && str[start] != '\0')
		start++;
	if (start >= end)
		return ((char *)str);
	while (ft_isset(str[end], set) == 1 && str[end] != '\0')
		end--;
	printf("start: %li end: %li\n", start, end);
	new_str = (char *)malloc((end - start) * sizeof(char) + 1);
	if (!new_str)
		return (NULL);
	while (start <= end)
	{
		new_str[ite] = str[start];
		ite++;
		start++;
	}
	return (new_str);
}

char	*ft_strtrim(const char	*str, const char	*set)
{
	size_t		start;
	size_t		end;
	size_t		ite;
	char		*new_str;

	ite = 0;
	start = 0;
	end = ft_strlen((const char *)(str)) - 1;
	while (ft_isset(str[start], set) == 1 && str[start] != '\0')
		start++;
	if (start >= end)
		return ((char *)str);
	while (ft_isset(str[end], set) == 1 && str[end] != '\0')
		end--;
	new_str = malloc(((end - start) + 1) * sizeof(char));
	if (!new_str)
		return (NULL);
	while (start <= end)
	{
		new_str[ite] = str[start];
		start++;
		ite++;
	}
	new_str[ite] = '\0';
	return (new_str);
}
*/