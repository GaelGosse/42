/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 10:27:16 by gael              #+#    #+#             */
/*   Updated: 2022/06/03 13:45:10 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count(char const *str, char sep)
{
	size_t	ite;
	size_t	count;

	ite = 0;
	count = 0;
	while (str[ite])
	{
		while (str[ite] && str[ite] == sep)
			ite++;
		if (str[ite] && str[ite] != sep)
		{
			count++;
			while (str[ite] && str[ite] != sep)
				ite++;
		}
	}
	return (count);
}

static size_t	word_len(char const *str, char sep, int ite)
{
	size_t	len;

	len = 0;
	while (str[ite] && str[ite] != sep)
	{
		len++;
		ite++;
	}
	return (len);
}

static char	**ft_freetab(char **s, size_t n)
{
	while (n > 0)
	{
		free(s[n]);
		n--;
	}
	free(s);
	return (NULL);
}

char	**ft_split(char const *str, char sep)
{
	size_t	sti;
	size_t	ite;
	size_t	ins;
	char	**res;

	res = (char **)malloc(sizeof(char *) * (word_count(str, sep) + 1));
	if (!res)
		return (NULL);
	sti = 0;
	ite = 0;
	while (ite < word_count(str, sep))
	{
		while (str[sti] && str[sti] == sep)
			sti++;
		ins = 0;
		res[ite] = (char *)malloc(sizeof(char) * (word_len(str, sep, sti) + 1));
		if (!res[ite])
			return (ft_freetab(res, ite), NULL);
		while (str[sti] && str[sti] != sep)
			res[ite][ins++] = str[sti++];
		res[ite][ins] = '\0';
		ite++;
	}
	res[ite] = 0;
	return (res);
}
