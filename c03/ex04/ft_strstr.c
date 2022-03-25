/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 02:31:52 by ggosse            #+#    #+#             */
/*   Updated: 2022/03/24 20:53:07 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	
	i = 0;
	if(to_find[0] == '\0')
	{
		return (str);
	}
	while(str[i] != '\0')
	{
		j = 0;
		while(str[i + j] == to_find[j])
		{
			if(to_find[j + 1] == '\0')
			{
				return &str[i];
			}
			j++;
		}
		i++;
	}	
	return (NULL);
}

int	main()
{
	char	c[] = "J'aime pom les pommes mures";

	printf("%s \n", ft_strstr(c, ""));
	printf("%s \n", strstr(c, ""));
}
