/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_format.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthimoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 15:03:47 by jthimoni          #+#    #+#             */
/*   Updated: 2022/03/27 20:22:31 by jthimoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	check_format(char *str)
{
	int	i;

	i = 0;
	while (str[i] == 32)
		i++;
	if (str[i] == '-')
      return (0);
	else if (str[i] == '+')
		i++;
	while ('0' <= str[i] && str[i] <= '9')
      i++;
    if (!('0' <= str[i - 1] && str[i - 1] <= '9'))
      return (0);
	while (str[i] == 32)
      i++;
    if (str[i] != ':') 
      return (0);
    i++;
	while (str[i] == 32)
      i++;
    while ('a' <= str[i] && str[i] <= 'z')
      i++;
    if (!('a' <= str[i - 1] && str[i - 1] <= 'z'))
      return (0);
    return (1);
}

int cut_in_lines(char *str)
{
  int   i;
  int   j;
  char  *line;

  line = malloc(sizeof(char) * 100);
  i = 0;
  j = 0;
  while (str[i])
  {
    while (str[i] != '\n')
    {
      line[j] = str[i];
      i++;
      j++;
    }
    line[j] = 0;
    if (check_format(line) == 0)
      return (0);
    free(line);
    i++;
  }
  return (1);
}


int	main(int argc, char **argv)
{
	(void) argc;

	printf("%i", cut_in_lines(argv[1]));
	return (0);
}
