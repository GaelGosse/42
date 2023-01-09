/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_filemap.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 19:41:09 by gael              #+#    #+#             */
/*   Updated: 2023/01/06 20:24:44 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_read_file(int fd)
{
	char	*buf;

	buf = NULL;
	while (buf[0] != '\0' && buf[0] != '\n')
	{
		ret = read(fd, buf, 1);
		if (ret < 0)
			return (NULL);
		buf[1] = '\0';
	}
}

void	ft_check_ext(char *)
{
	
}

void	ft_existing_file(char *)
{
	int	fd; 

	fd = open(name, O_RDONLY);
	if (fd == -1)
		return (printf("open err\n"), 1);
	// ft_read_file(fd);
	if (close(fd) == -1)
		return (printf("close err\n"), 1);
	return (0);
}