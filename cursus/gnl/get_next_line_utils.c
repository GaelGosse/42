/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 15:01:19 by ggosse            #+#    #+#             */
/*   Updated: 2022/07/15 14:53:35 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

unsigned int	ft_strlen(const char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
			i++;
	return (i);
}

int	ft_is_endline(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			return (i);
		i++;
	}
	return (0);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char			*str;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	str = (char *)malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char) + 1);
	if (!str)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strdup(const char *src)
{
	char	*result;
	int		i;

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