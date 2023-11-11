/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jsala@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:29:03 by jsala             #+#    #+#             */
/*   Updated: 2023/10/31 20:27:53 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	srclen;

	i = 0;
	srclen = 0;
	while (src[srclen] != '\0')
	{
		srclen++;
	}
	if (size == 0)
		return (srclen);
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (srclen);
}
/*
int	main(void)
{
	char	arr1[10] = "CiaortCiao";
	char	arr2[17] = "Ennfe";
	char	arr3[10] = "CiaortCiao";
	char	arr4[17] = "Ennfe";
	unsigned int	n;
	unsigned int	n_ft;

	printf("What should do: ");
	n = strlcpy(arr4, arr3, 10);
	printf("%d", n);
	printf("%s", arr4);

	n_ft = ft_strlcpy(arr2, arr1, 10);
	printf("\nWhat I do: ");
	printf("%d", n_ft);
	printf("%s", arr2);
	return (0);
}
*/
