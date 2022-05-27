/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:28:51 by ggosse            #+#    #+#             */
/*   Updated: 2022/05/27 21:26:53 by ggosse           ###   ########.fr       */
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

int		ft_atoi(const char *str);
void	ft_bzero(void *str, size_t n);
void	*calloc(size_t nmemb, size_t size);
int		ft_isalnum(int	c);
int		ft_isalpha(int	c);
int		ft_isascii(int	c);
int		ft_isdigit(int c);
int		ft_isprint(int	c);
char 	*ft_itoa(int n);
void	*ft_memchr(const void *s, int c, size_t len);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *destination, const void *source, size_t size);
void	*memmove(void *destination, const void *source, size_t n);
void	*ft_memset(void	*str, int value, size_t len);
void 	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void 	ft_putnbr_fd(int n, int fd);
void 	ft_putstr_fd(char *s, int fd);
char 	**ft_split(const char *str, char sep);
char 	*strchr(const char *s, int c);
char	*ft_strdup(const char * src);
void	ft_striteri(char *str, void (*f)(unsigned int, char*));
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t 	ft_strlcpy(char * restrict dst, const	char * restrict	src, size_t dstsize);
size_t	ft_strlen(const char *str);
char 	*ft_strmapi(const char *str, char (*f)(unsigned int, char));
int		ft_strncmp( const char * first, const char * second, size_t length);
char    *ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strrchr(const char *str, int search);
char	*ft_strtrim(const char	*str, const char *set);
char    *ft_substr(char const *s, unsigned int start, size_t len);
int		ft_tolower(int	chr);
int		ft_toupper(int	chr);

#endif