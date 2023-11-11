/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jsala@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 10:06:10 by jsala             #+#    #+#             */
/*   Updated: 2023/10/25 15:31:11 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

unsigned int	ft_strlen(char *arr);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	res;
	unsigned int	l_dest;
	unsigned int	l_src;

	l_dest = ft_strlen(dest);
	l_src = ft_strlen(src);
	if (size > l_dest)
		res = l_dest + l_src;
	else
		res = l_src + size;
	l_src = 0;
	while (l_dest + 1 < size && src[l_src])
	{
		dest[l_dest] = src[l_src];
		l_dest++;
		l_src++;
	}
	dest[l_dest] = '\0';
	return (res);
}

unsigned int	ft_strlen(char *arr)
{
	unsigned int	i;

	i = 0;
	while (arr[i] != '\0')
		i++;
	return (i);
}
/*
int	main(void)
{
	char	str[13] = "Born to code";
	char	dest[8] = "42 1337";
	unsigned int	n = 10;
	unsigned int	res;
	res = ft_strlcat(dest, str, n);
	printf("%s", dest);
	printf("%d", res);
}
*/
