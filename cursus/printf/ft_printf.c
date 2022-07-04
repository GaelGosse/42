/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 17:56:33 by ggosse            #+#    #+#             */
/*   Updated: 2022/07/05 00:50:03 by gael             ###   ########.fr       */
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

int	ft_int(char chr, int var)
{
	int	i;

	i = 0;
	if (chr == 'c')
		i += ft_putchar_fd(var, 1);
	else if (chr == 'd')
		i += ft_putnbr_fd(var, 1);
	else if (chr == 'i')
		i += ft_putnbr_fd(var, 1);
	else if (chr == '%')
		i += ft_putchar_fd('%', 1);
	return (i);
}

int	ft_uns(char chr, unsigned long long int var)
{
	int	i;

	i = 0;
	if (chr == 'u')
		i += ft_putunbr(var);
	else if (chr == 'x')
		i += ft_putnbr_base_low(var);
	else if (chr == 'X')
		i += ft_putnbr_base_up(var);
	else if (chr == 'p')
		i += ft_putptr(var);
	return (i);
}

int	ft_conv(const char *str, int i, va_list args)
{
	int		len;

	len = 0;
	if (str[i] == 's')
		len += ft_putstr_fd(va_arg(args, char *), 1);
	else if (str[i] == 'c' || str[i] == 'd' || str[i] == 'i')
		len += ft_int(str[i], va_arg(args, int));
	else if (str[i] == '%')
		len += ft_putchar_fd('%', 1);
	else if (str[i] == 'p')
		len += ft_putptr(va_arg(args, unsigned long long int));
	else if (str[i] == 'u' || str[i] == 'x' || str[i] == 'X')
		len += ft_uns(str[i], va_arg(args, unsigned int));
	return (len);
}

int	ft_printf(const char *str, ...)
{
	int			i;
	int			len;
	va_list		ptr;

	va_start (ptr, str);
	i = -1;
	len = 0;
	while (str[++i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			len += ft_conv(str, i, ptr);
		}
		else
			len += ft_putchar_fd(str[i], 1);
	}
	return (va_end(ptr), len);
}

/*

v4
			if (str[i] == 's')
				len += ft_putstr_fd(va_arg(ptr, char *), 1);
			else if (str[i] == 'c' || str[i] == 'd' || str[i] == 'i')
				len += ft_int(str[i], va_arg(ptr, int));
			else if (str[i] == '%')
				len += ft_putchar_fd('%', 1);
			else if (str[i] == 'p') 
				len += ft_putptr(va_arg(ptr, unsigned long long int));
			else if (str[i] == 'u' || str[i] == 'x' || str[i] == 'X')
				len += ft_uns(str[i], va_arg(ptr, unsigned int));

v3
			if (str[++i] == 's')
				len += ft_putstr_fd(va_arg(ptr, char *), 1);
			else if (str[i] == 'c' || str[i] == 'd' || str[i] == 'i')
				len += ft_int(str[i], va_arg(ptr, int));
			else if (str[i] == '%')
				len += ft_putchar_fd('%', 1);
			else if (str[i] == 'p')
				len += ft_putptr(va_arg(ptr, unsigned long long int));
			else if (str[i] == 'u' || str[i] == 'x' || str[i] == 'X')
				len += ft_uns(str[i], va_arg(ptr, unsigned int));

v2
			if (str[++i] == 's')
				len += ft_putstr_fd(va_arg(ptr, char *), 1);
			else if (str[i] == 'c' || str[i] == 'd'
				|| str[i] == 'i' || str[i] == '%')
				len += ft_int(str[i], va_arg(ptr, int));
			else if (str[i] == 'p')
				len += ft_putptr(va_arg(ptr, unsigned long long int));
			else if (str[i] == 'u' || str[i] == 'x' || str[i] == 'X')
				len += ft_uns(str[i], va_arg(ptr, unsigned int));


int	ft_printf(const char *str, ...)
{
	va_list ptr;
	int	i;
	int	len;
	va_start (ptr, str);
	
	i = -1;
	len = 0;
	while (str[++i] != '\0')
	{
		if (str[i] == '%')
		{
			if (str[++i] == 's') 
				len += ft_putstr_fd(va_arg(ptr, char *), 1);
			else if (str[i] == 'c')
				len += ft_putchar_fd(va_arg(ptr, int), 1);
			else if (str[i] == 'd') 
				len += ft_putnbr_fd(va_arg(ptr, int), 1);
			else if (str[i] == 'i') 
				len += ft_putnbr_fd(va_arg(ptr, int), 1);
			else if (str[i] == '%')
				len += ft_putchar_fd('%', 1);
			else if (str[i] == 'p') 
				len += ft_putptr(va_arg(ptr, unsigned long long int));
			else if (str[i] == 'u') 
				len += ft_putunbr(va_arg(ptr, unsigned int));
			else if (str[i] == 'x') 
				len += ft_putnbr_base_low(va_arg(ptr, unsigned int));
			else if (str[i] == 'X') 
				len += ft_putnbr_base_up(va_arg(ptr, unsigned int));
		}
		else {
			ft_putchar_fd(str[i],1);
			len++;
		}
	}
	va_end(ptr);
	return (len);
}


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