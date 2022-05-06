/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 18:55:14 by ggosse            #+#    #+#             */
/*   Updated: 2022/03/28 20:27:29 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	if (str[0] >= 97 && str[0] <= 122)
	{
		str[0] -= 32;
	}
	i = 1;
	while (str[i] != '\0')
	{
		if (((str[i - 1] >= 97) && (str[i - 1] <= 122))
			|| ((str[i - 1] >= 65) && (str[i - 1] <= 90))
			|| ((str[i - 1] >= 48) && (str[i - 1] <= 57)))
		{
			if ((str[i] >= 65) && (str[i] <= 90))
				str[i] += 32;
		}
		else
		{
			if (str[i] >= 97 && str[i] <= 122)
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}
/*
int	main()
{
	char	c[] = "salut, comMent tu vas ? 42Mots quaranTE-deux; cinquante+Et+uN";
	printf("%s",ft_strcapitalize(c));
}
*/
