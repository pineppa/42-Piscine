/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jsala@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:07:50 by jsala             #+#    #+#             */
/*   Updated: 2023/11/04 09:27:10 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	range = NULL;
	i = 0;
	if (min < max)
	{
		range = (int *)malloc((max - min + 1) * sizeof(int));
		if (range == NULL)
			return (NULL);
		while (i < max - min)
		{
			range[i] = min + i;
			i++;
		}
	}
	return (range);
}
