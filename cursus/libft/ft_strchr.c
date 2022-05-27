/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:06:54 by ggosse            #+#    #+#             */
/*   Updated: 2022/05/27 20:46:33 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while(i < ft_strlen((const char	*)(str)))
	{
		if(str[i] == search)
		{
			return ((char *)(&str[i]));
		}
		i++;
	}
	return (NULL);
}

int main()
{
	printf("%i\n", tolower('a'));
	printf("%i\n", ft_tolower('a'));
}