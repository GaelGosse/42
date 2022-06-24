/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 17:56:33 by ggosse            #+#    #+#             */
/*   Updated: 2022/06/24 18:22:37 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "libftprintf.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stddef.h>
#include <stdarg.h>

int	count_var(const char *str)
{
	int	nbr_var;
	int	i;

	i = 0;
	nbr_var = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			if (str[i + 1] == 'c' || str[i + 1] == 's' || str[i + 1] == 'p'
				|| str[i + 1] == 'd' || str[i + 1] == 'i' || str[i + 1] == 'u'
				|| str[i + 1] == 'x' || str[i + 1] == 'X' || str[i + 1] == '%')
			{
				nbr_var++;
			}
		}
		i++;
	}
	return (nbr_var);
}

int	ft_printf(const char *str, ...)
{
	va_list ptr;
	int	i;
	va_start (ptr, str);
	
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			if (str[i + 1] == 'c')
			{
				// printf("\n\n---[c]");
				ft_putchar_fd(va_arg(ptr, int), 1);
			}
			else if (str[i + 1] == 's') 
			{
				// printf("\n\n---[s]");
				ft_putstr_fd(va_arg(ptr, char *), 1);
			}
			else if (str[i + 1] == 'p') 
			{
				// printf("\n\n---[p]");
				ft_putptr(va_arg(ptr, long long int));
			}
			else if (str[i + 1] == 'd') 
			{
				// printf("\n\n---[d]");
				ft_putnbr_fd(va_arg(ptr, int), 1);
			}
			else if (str[i + 1] == 'i') 
			{
				// printf("\n\n---[i]");
				ft_putnbr_fd(va_arg(ptr, int), 1);
			}
			else if (str[i + 1] == 'u') 
			{
				// printf("\n\n---[u]");
				ft_putnbr_fd(va_arg(ptr, unsigned int), 1);
			}
			else if (str[i + 1] == 'x') 
			{
				// printf("\n\n---[x]");
				ft_putnbr_base_low(va_arg(ptr, unsigned int));
			}
			else if (str[i + 1] == 'X') 
			{
				// printf("\n\n---[X]");
				ft_putnbr_base_low(va_arg(ptr, unsigned int));
			}
			else if (str[i + 1] == '%')
			{
				// printf("\n\n---[%%]");
				ft_putchar_fd(va_arg(ptr, int), 1);
			}
			i++;
		}
		else {
			ft_putchar_fd(str[i],1);
		}
		i++;
	}
	va_end(ptr);
	return (1);
}


int main(){
	char	*str = "def";

	// ft_printf("abc %s xyz\n", str);
	printf("%p\n", &str);
	ft_printf("%p\n", &str);
	// ft_printf("abc %c %s %p %d %i %u %x %X %% www\n", ite, dx);
	// printf("abc %i %i www\n", ite, dx);
}
