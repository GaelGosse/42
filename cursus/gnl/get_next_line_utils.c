/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 15:01:19 by ggosse            #+#    #+#             */
/*   Updated: 2022/07/21 15:54:56 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

unsigned int	ft_strlen(const char *str)
{
	unsigned int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i] != '\0')
			i++;
	return (i);
}

int	ft_is_endline(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			return (i);
		i++;
	}
	return (0);
}

char	*ft_strchr(const char *str, int search)
{
	size_t	i;

	i = 0;
	while (i <= ft_strlen((const char *)(str)))
	{
		if (str[i] == (unsigned char)(search))
			return ((char *)(&str[i]));
		i++;
	}
	return (NULL);
}

char	*ft_strjoin(char *un, char *deux)
{
	char			*str;
	unsigned int	i;
	unsigned int	j;

	if (!un || !deux)
		return (NULL);
	i = 0;
	j = 0;
	str = (char *)malloc((ft_strlen(un) + ft_strlen(deux) + 1) * sizeof(char));
	if (!str)
		return (free(str), NULL);
	while (un[i])
	{
		str[i] = un[i];
		i++;
	}
	free(un);
	while (deux[j])
	{
		str[i] = deux[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strdup(const char *src)
{
	char	*result;
	size_t	i;

	if (!src)
		return (0);
	i = 0;
	result = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	if (!result)
		return (NULL);
	while (src[i])
	{
		result[i] = src[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

void	ft_save(char *line, char *buf)
{
	size_t ite_l;
	size_t ite_b;

	ite_l = 0;
	while ((line[ite_l] != '\n') && (line[ite_l] != '\0'))
		ite_l++;
	if (line[ite_l] == '\n')
		ite_l++;
	ite_b = 0;
	while (line[ite_l] != '\0')
	{
		buf[ite_b] = line[ite_l];
		line[ite_l] = '\0';
		ite_l++;
		ite_b++;
	}
	buf[ite_b] = '\0';
}