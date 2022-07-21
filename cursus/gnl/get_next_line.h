/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 15:01:22 by ggosse            #+#    #+#             */
/*   Updated: 2022/07/21 15:08:21 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GNL_H
# define GNL_H

#define BUF_SIZE 15
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stddef.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
// # include "color.h"

char			*get_next_line(int fd);
char			*ft_strdup(const char *src);
char			*ft_strjoin(char *s1, char *s2);
char			*ft_strchr(const char *str, int search);
void			ft_save(char *buf, char *line);
int				ft_is_endline(char *str);
unsigned int	ft_strlen(const char *str);

#endif