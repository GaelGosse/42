/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pipex.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 15:26:59 by ggosse            #+#    #+#             */
/*   Updated: 2022/12/15 19:08:16 by ggosse           ###   ########.fr       */
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

typedef struct dt
{
	char	**path
}			t_dt;

// ft_pipex.c
void	ft_error(void);
void	ft_check(int argc, char **argv, char **envp);
void	ft_pipex(int argc, char **argv, char **envp);

// ft_exec.c
int	ft_exec_cmd(char *cmd_with_flags, char **envp);
