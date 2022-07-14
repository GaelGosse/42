/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 15:01:19 by ggosse            #+#    #+#             */
/*   Updated: 2022/07/13 21:17:56 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdlib.h>

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

char	*ft_printf_save(char *str)
{
	char	*result;
	int		i;
	int		j;

	j = 0;
	i = -1;
	while (str[++i] != '\n')
		printf("%c", str[i]);
	while (str[i++] != '\0')
		j++;
	result = malloc(sizeof(char) * (j + 1));
	if (!result)
		return (NULL);
	j = 0;
	i = 0;
	while (str[i] != '\n')
		i++;
	while (str[i] != '\0')
	{
		result[j++] = str[++i];
	}
	printf("\n\n"bold_blue"save:"blue" %s\n"reset, result);
	return (result);
}
