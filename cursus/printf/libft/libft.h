/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:28:51 by ggosse            #+#    #+#             */
/*   Updated: 2022/07/05 00:04:07 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <ctype.h>
# include <stddef.h>

int		ft_putnbr_base_low(unsigned long long int nbr);
int		ft_putnbr_base_up(unsigned long long int nbr);
int		ft_putchar_fd(char c, int fd);
int		ft_putstr_fd(char *s, int fd);
int		ft_putunbr(unsigned long long int nbr);
int		ft_putnbr_fd(int n, int fd);

#endif