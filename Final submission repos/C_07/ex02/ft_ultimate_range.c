/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jsala@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:08:06 by jsala             #+#    #+#             */
/*   Updated: 2023/11/04 09:15:11 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*vals;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	vals = malloc((max - min) * sizeof(int));
	i = 0;
	while (i < max - min)
	{
		vals[i] = min + i;
		i++;
	}
	*range = vals;
	return (i);
}
/*
int	main(void)
{
	char	str[] = "Hello";
	char	*copy;

	copy = ft_strdup(str);
	printf("Here's the original string: %s, with size: %d\n", str, sizeof(str));
	printf("Here's the new string: %s\n", copy);
	free(copy);
	return(0);
}*/
