/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 12:05:06 by ggosse            #+#    #+#             */
/*   Updated: 2022/03/23 12:36:25 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
        unsigned int    i;

        i = 0;
        while(i < size)
        {
                dest[i] = src[i];
                i++;
        }
        while(i < ft_strlen(src))
        {
                dest[i] = '\0';
                i++;
        }
        dest[i] = '\0';
	return size;
}
int	main()
{
	char	c[] = "hello";
	char	dest[20];
	printf("%i", ft_strlcpy(dest, c, 4));
}
