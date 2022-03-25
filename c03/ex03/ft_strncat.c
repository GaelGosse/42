/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 02:05:20 by ggosse            #+#    #+#             */
/*   Updated: 2022/03/24 15:43:59 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int	j;
	

	j = 0;
	i = ft_strlen(dest);
	while(i < nb)
	{       
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return dest;
}

int	main()
{
	char	c[100] = "hello ";
	char	d[] = "world";
	
	printf("%s\n", ft_strncat(c, d, 4));
	printf("%s\n", strncat(c, d, 4));
}
