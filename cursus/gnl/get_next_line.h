/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 15:01:22 by ggosse            #+#    #+#             */
/*   Updated: 2022/06/23 15:09:05 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GNL_H
# define GNL_H

#define BUF_SIZE 4096
# include <unistd.h>
# include <stdio.h>

char	*get_next_line(int fd);

#endif