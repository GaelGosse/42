/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:28:51 by ggosse            #+#    #+#             */
/*   Updated: 2022/05/17 12:46:51 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT
#define LIBFT

#include <unistd.h>

int		ft_toupper(int	chr);
int		ft_tolower(int	chr);
char	*ft_strrchr(const char *str, int search);
int		ft_strlen(char *str);
void	ft_putchar_fd(char c, int fd);
void	*ft_memset(void	*str, int value, size_t len);
void	ft_putstr_fd(char *s, int fd);

#endif