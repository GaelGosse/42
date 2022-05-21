/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:28:51 by ggosse            #+#    #+#             */
/*   Updated: 2022/05/21 12:17:36 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT
#define LIBFT

#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>

int			ft_toupper(int	chr);
int			ft_tolower(int	chr);
char		*ft_strrchr(const char *str, int search);
size_t		ft_strlen(const char *str);
void		ft_putchar_fd(char c, int fd);
void		*ft_memset(void	*str, int value, size_t len);
void		ft_putstr_fd(char *s, int fd);
char		*ft_strjoin(char const *s1, char const *s2);

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