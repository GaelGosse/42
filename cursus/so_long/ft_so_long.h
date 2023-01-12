/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_so_long.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 18:20:27 by gael              #+#    #+#             */
/*   Updated: 2023/01/12 15:08:37 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// free, perror,
#include <stdio.h>
#include <errno.h>

// open, malloc
#include <stdlib.h>

// fork, wait, waitpid
#include <sys/types.h>
#include <sys/stat.h>

// wait, waitpid
#include <sys/wait.h>

// access, read, close, write, access, dup(2), execve, exit, fork, pipe, unlink
#include <unistd.h>

// strerror
#include <string.h>

// pipe, unlink
#include <fcntl.h>

#include "color.h"
#include "libft/libft.h"

#define SUCCESS 1
#define FAIL 0

typedef struct map
{
	char	**map_original;
	char	**map_check_path;
	int		height;
	int		width;
	int		fd_map;
}			t_map;

// ft_check_filemap.c
int	ft_read_file(int fd);
int	ft_existing_file(char *file);
int	ft_check_ext(char *filename);

// ft_so_long.c
int	parsing(int argc, char **argv, char **envp);
