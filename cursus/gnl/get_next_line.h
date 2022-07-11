/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 15:01:22 by ggosse            #+#    #+#             */
/*   Updated: 2022/07/11 16:09:28 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GNL_H
# define GNL_H

#define BUF_SIZE 10
# include <unistd.h>
# include <stdio.h>
# include "color.h"


char			*ft_strjoin(char *s1, char *s2);
char			*get_next_line(int fd);
char			*ft_printf_save(char *s);
int				ft_is_endline(char *str);
unsigned int	ft_strlen(const char *str);

#endif