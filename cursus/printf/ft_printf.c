/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 17:56:33 by ggosse            #+#    #+#             */
/*   Updated: 2022/06/25 19:32:56 by ggosse           ###   ########.fr       */
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
				// pr\n\nintf("---[\nc]");
				ft_putchar_fd(va_arg(ptr, int), 1);
			}
			else if (str[i + 1] == 's') 
			{
				// pr\n\nintf("---[\ns]");
				ft_putstr_fd(va_arg(ptr, char *), 1);
			}
			else if (str[i + 1] == 'p') 
			{
				// pr\n\nintf("---[\np]");
				ft_putptr(va_arg(ptr, long long int));
			}
			else if (str[i + 1] == 'd') 
			{
				// pr\n\nintf("---[\nd]");
				ft_putnbr_fd(va_arg(ptr, int), 1);
			}
			else if (str[i + 1] == 'i') 
			{
				// pr\n\nintf("---[\ni]");
				ft_putnbr_fd(va_arg(ptr, int), 1);
			}
			else if (str[i + 1] == 'u') 
			{
				// pr\n\nintf("---[\nu]");
				ft_putunbr(va_arg(ptr, unsigned int));
			}
			else if (str[i + 1] == 'x') 
			{
				// pr\n\nintf("---[\nx]");
				ft_putnbr_base_low(va_arg(ptr, unsigned int));
			}
			else if (str[i + 1] == 'X') 
			{
				// pr\n\nintf("---[\nX]");
				ft_putnbr_base_up(va_arg(ptr, unsigned int));
			}
			else if (str[i + 1] == '%')
			{
				// pr\n\nintf("---[\n%%]");
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

/*
int main(){
	char	*str = "def";

	
	// c 
	printf("\n\n---c\n");
	printf("le vrai: %c\n", 'c');
	ft_printf("le mien: %c\n\n", 'c');
	
	// s 
	printf("\n\n---s\n");
	printf("le vrai: %s\n", str);
	ft_printf("le mien: %s\n\n", str);
	
	// p 
	printf("\n\n---p\n");
	printf("le vrai: %p\n", &str);
	ft_printf("le mien: %p\n\n", &str);
	
	// d 
	printf("\n\n---d\n");
	printf("le vrai: %d\n", 4);
	ft_printf("le mien: %d\n\n", 4);
	
	// i 
	printf("\n\n---i\n");
	printf("le vrai: %d\n", 8);
	ft_printf("le mien: %d\n\n", 8);
	
	// u 
	printf("\n\n---u\n");
	printf("le vrai: %u\n", 8);
	ft_printf("le mien: %u\n\n", 8);
	printf("le vrai: %u\n", -8);
	ft_printf("le mien: %u\n\n", -8);
	
	// x 
	printf("\n\n---x\n");
	printf("le vrai: %x\n", 1);
	ft_printf("le mien: %x\n\n", 1);
	printf("le vrai: %x\n", 15);
	ft_printf("le mien: %x\n\n", 15);
	printf("le vrai: %x\n", 16);
	ft_printf("le mien: %x\n\n", 16);
	printf("le vrai: %x\n", 20);
	ft_printf("le mien: %x\n\n", 20);
	printf("le vrai: %x\n", 911199);
	ft_printf("le mien: %x\n\n", 911199);
		
	// X 
	printf("\n\n---X\n");
	printf("le vrai: %X\n", 1);
	ft_printf("le mien: %X\n\n", 1);
	printf("le vrai: %X\n", 15);
	ft_printf("le mien: %X\n\n", 15);
	printf("le vrai: %X\n", 16);
	ft_printf("le mien: %X\n\n", 16);
	printf("le vrai: %X\n", 20);
	ft_printf("le mien: %X\n\n", 20);
	printf("le vrai: %X\n", 911199);
	ft_printf("le mien: %X\n\n", 911199);
	
	// %
	printf("\n\n---%%\n");
	printf("le vrai: %%\n");
	ft_printf("le mien: %%\n\n");

}
*/