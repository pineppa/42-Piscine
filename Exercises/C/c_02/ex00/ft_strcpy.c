/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jsala@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 09:14:26 by jsala             #+#    #+#             */
/*   Updated: 2023/10/25 17:40:52 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	pos;

	pos = 0;
	while (src[pos] != '\0')
	{
		dest[pos] = src[pos];
		pos++;
	}
	dest[pos] = '\0';
	return (dest);
}
/*
int		main(void)
{
	char	arr1[5] = "Ciao\0";
	char	arr2[6] = "bella\0";
	char	arr3[40];
	ft_strcpy(arr3, arr2);
	printf("%s", arr1);
	printf("%s", arr2);
	printf("%s", arr3);
	return (0);
}
*/
