/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 15:01:22 by ggosse            #+#    #+#             */
/*   Updated: 2022/07/09 23:59:08 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GNL_H
# define GNL_H

#define BUF_SIZE 10
# include <unistd.h>
# include <stdio.h>


int		ft_is_endline(char *str);
char    *ft_strjoin(char *s1, char *s2);
char	*get_next_line(int fd);

#endif