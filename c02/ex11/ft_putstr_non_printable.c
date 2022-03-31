/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 18:26:41 by ggosse            #+#    #+#             */
/*   Updated: 2022/03/29 20:23:34 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char str)
{
	if ((str < 32) && (str > 126))
		return (0);
	return (1);
}

void	ft_convert(unsigned char c)
{
	char	*str;

	str = "0123456789abcdef";
	write(1, &str[c / 16], 1);
	write(1, &str[c % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 32) || (str[i] > 126))
		{
			write(1, "\\", 1);
			ft_convert(str[i]);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}
/*
int	main()
{
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
}
*/
