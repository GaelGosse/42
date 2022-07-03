/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 17:56:33 by ggosse            #+#    #+#             */
/*   Updated: 2022/07/03 20:37:37 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"
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

int ft_int(int i)
{
	
}
int ft_char(char *c)
{
	
}
int ft_long(long long int i)
{
	
}
int ft_uns(unsigned int i)
{
	
}

int	main_printf(char chr, int len)
{
	if (chr == 'c')
		len += ft_putchar_fd(va_arg(ptr, int), 1);
	else if (chr == 's')
		len += ft_putstr_fd(va_arg(ptr, char *), 1);
	else if (chr == 'p')
		len += ft_putptr(va_arg(ptr, long long int));
	else if (chr == 'd')
		len += ft_putnbr_fd(va_arg(ptr, int), 1);
	else if (chr == 'i')
		len += ft_putnbr_fd(va_arg(ptr, int), 1);
	else if (chr == 'u')
		len += ft_putunbr(va_arg(ptr, unsigned int));
	else if (chr == 'x')
		len += ft_putnbr_base_low(va_arg(ptr, unsigned int));
	else if (chr == 'X')
		len += ft_putnbr_base_up(va_arg(ptr, unsigned int));
	else if (chr == '%')
		len += ft_putchar_fd('%', 1);
	return (len);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		len;
	va_list	ptr;

	va_start (ptr, str);
	i = 0;
	len = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			len += main_printf(str[i + 1], len);
			i++;
		}
		else
		{
			ft_putchar_fd(str[i], 1);
			len++;
		}
		i++;
	}
	return (va_end(ptr), len);
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
	printf("%d\n",printf("le vrai: %p\n", &str));
	printf("%d\n\n",ft_printf("le mien: %p\n", &str));
	
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