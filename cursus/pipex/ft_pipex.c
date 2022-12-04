/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pipex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 10:32:56 by ggosse            #+#    #+#             */
/*   Updated: 2022/12/04 12:28:31 by ggosse           ###   ########.fr       */
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
}

void	ft_pipex(void)
{
	printf("ft_pipex\n");
}

int main(int argc, char **argv){
	char	*str;
	int		nbr;

	if (argc < 5)
	{
		write(1, "Wrong args\n", 11);
		return (1);
	}
	ft_pipex(argv);
	(void)argc;
	(void)argv;
	(void)str;
	(void)nbr;
}