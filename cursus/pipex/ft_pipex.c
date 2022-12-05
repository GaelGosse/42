/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pipex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 10:32:56 by ggosse            #+#    #+#             */
/*   Updated: 2022/12/05 17:35:34 by ggosse           ###   ########.fr       */
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

void	ft_error(void)
{
	write(1, "Error\n", 6);
}

void	ft_check(char **argv)
{
	printf("ft_check\n");
	
	// check first arg as file

	// while ()
	//		check second arg as command (exist in path)
	//		check third arg as command (exist in path)
	//		check ... args as command ...

	// check last arg as file
	(void)argv;
}

void	ft_pipex(char **argv)
{
	ft_check(argv);
	printf("ft_pipex\n");
	(void)argv;
}

int main(int argc, char **argv){
	char	*str;
	int		nbr;

	if (argc < 5)
		return (ft_error(), 1);
	ft_pipex(argv);
	(void)argc;
	(void)argv;
	(void)str;
	(void)nbr;
}