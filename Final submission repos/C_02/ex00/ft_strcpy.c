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
	char	*ini_pos;

	ini_pos = dest;
	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (ini_pos);
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
