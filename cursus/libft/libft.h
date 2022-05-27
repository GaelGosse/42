/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:28:51 by ggosse            #+#    #+#             */
/*   Updated: 2022/05/26 22:39:21 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT
#define LIBFT

#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int         ft_atoi(const char *str);
void        ft_bzero(void *str, size_t n);
void    *calloc(size_t nmemb, size_t size);
int	ft_isalnum(int	c);
int	ft_isalpha(int	c);
int	ft_isascii(int	c);
int	ft_isdigit(int c);
int	ft_isprint(int	c);
char *ft_itoa(int n);
void *memchr(const void *b, int c, size_t len);



char		*ft_strrchr(const char *str, int search);
size_t		ft_strlen(const char *str);
void        *ft_memcpy(void *destination, const void *source, size_t size);
void		*ft_memset(void	*str, int value, size_t len);
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
char		*ft_strjoin(char const *s1, char const *s2);
int			ft_tolower(int	chr);
int			ft_toupper(int	chr);

// ft_atoi.c
// ft_itoa.c
// ft_bzero.c
// ft_isalpha.c
// ft_isprint.c
// ft_isascii.c
// ft_isalnum.c
// ft_isdigit.c
// ft_memset.c
// ft_putchar_fd.c
// ft_putstr_fd.c
// ft_strtrim.c
// ft_strchr.c
// ft_strlen.c 
// ft_strrchr.c
// ft_strjoin.c

#endif