/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:08:09 by ggosse            #+#    #+#             */
/*   Updated: 2022/05/27 20:20:27 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memmove(void *destination, const void *source, size_t n)
{
	unsigned char	*dst;
	unsigned char	*src;
	int				i;

	dst = (unsigned char *)destination;
	src = (unsigned char *)source;
	i = 0;
	if (dst < src)
	{
		// on part du debut
		while (i < n)
		{
			dst[i] = src[i];
			i++;
		}
	}
	else
	{
		// on part de la fin
		while (i > n)
		{
			dst[n - 1] = src[n - 1];
			n--;
		}
	}
}


// int main()
// {	
// 	char s[] = {65, 66, 67, 68, 69, 0, 45};
// 	char s0[] = { 0,  0,  0,  0,  0,  0, 0};
// 	char sCpy[] = {65, 66, 67, 68, 69, 0, 45};
// 	char sResult[] = {67, 68, 67, 68, 69, 0, 45};
// 	char sResult2[] = {67, 67, 68, 68, 69, 0, 45};

// 	printf("%s \n %s \n\n", ft_memmove(s0, s, 7), memcmp(s, s0, 7));
// 	printf("%s \n %s \n\n", ft_memmove(s, s + 2, 0), memmove(s, s + 2, 0));
// 	printf("%s \n %s \n\n", ft_memmove(s0, s, 7), memcmp(s, s0, 7));
// 	printf("%s \n %s \n\n", ft_memmove(s0, s, 7), memcmp(s, s0, 7));

// 	printf("%i \n", ft_memmove(s0, s, 7) == s0 && !memcmp(s, s0, 7));
// 	printf("%i \n", ft_memmove(s, s + 2, 0) && !memcmp(s, sCpy, 7));
// 	printf("%i \n", ft_memmove(s, s + 2, 2) == s && !memcmp(s, sResult, 7));
// 	printf("%i \n", ft_memmove(sResult + 1, sResult, 2) == sResult + 1 && !memcmp(sResult, sResult2, 7));
// }