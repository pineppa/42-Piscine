/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jsala@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 19:22:50 by jsala             #+#    #+#             */
/*   Updated: 2023/10/30 17:34:27 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb);

int	ft_sqrt(int nb)
{
	long int	i;
	long int	lp;
	long int	rp;

	lp = 0;
	rp = nb;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (rp - lp > 1)
	{
		i = (rp + lp) / 2;
		if (i * i == nb)
			return (i);
		else if (i * i > nb)
			rp = i;
		else
			lp = i;
	}
	return (0);
}
