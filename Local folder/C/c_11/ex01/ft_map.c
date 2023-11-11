/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jsala@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 08:43:10 by jsala             #+#    #+#             */
/*   Updated: 2023/11/06 09:35:40 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*mapp;

	i = -1;
	mapp = NULL;
	mapp = (int *) malloc(sizeof(int) * length);
	if (mapp == NULL)
		return (NULL);
	while (++i < length)
		mapp[i] = f(tab[i]);
	return (mapp);
}
