
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

int		ft_test(void)
{
	pid_t id;
	pid_t id2;

	id = fork();
	if(id == 0 )
	{
		printf("Child\n");
		exit(2);
	}
	id2 = fork();
	if(id2 == 0)
	{
		waitpid(id, NULL, 0);
		printf("second child\n");
		exit(3);
	}
	else if (id != 0)
	{

		else
		{
			waitpid(id, NULL, 0);
			waitpid(id2, NULL, 0);
			printf("Dad\n");
			return(1);
		}
	}
	return (0);
}

int main(int argc, char **argv)
{
	char	*str;
	int		nbr;

	printf("%d\n",ft_test());
	(void)argc;
	(void)argv;
	(void)str;
	(void)nbr;
}

/*

(1) looking for command in path split
path exist ?
execve

*/