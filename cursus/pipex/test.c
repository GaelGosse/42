/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 18:13:31 by ggosse            #+#    #+#             */
/*   Updated: 2022/12/20 18:26:39 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pipex.h"

// int main()
// {
// 	char ***tab = malloc(sizeof(char **) * 3);
// 	char **subtab = malloc(sizeof(char *) * 2);
// 	char **subtab2 = malloc(sizeof(char *) * 2);
// 	subtab[0] = "test";
// 	subtab[1] = NULL;
// 	subtab2[0] = "test";
// 	subtab2[1] = NULL;
// 	tab[0] = subtab;
// 	tab[1] = subtab2;
// 	tab[2] = NULL;
// 	int pid = fork();
// 	if (pid == 0)
// 		exit (127);
// 	printf("tab[0][0]: %s\n", tab[0][0]);
// 	printf("tab: %p\n", tab);
// 	free(subtab);
// 	subtab = NULL;
// 	free(subtab2);
// 	subtab2 = NULL;
// 	free(tab);
// 	tab = NULL;
// 	printf("tab: %p\n", tab);
// 	printf("tab: %p\n", tab);	
// }

int main()
{
	int *ptr = malloc(sizeof(int));
	printf("ptr = %p\n", ptr);
	free(ptr);
	ptr = NULL;
	printf("ptr = %p\n", ptr);
}