/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jsala@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 19:38:05 by jsala             #+#    #+#             */
/*   Updated: 2023/10/30 17:33:40 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb);

int	ft_is_prime(int nb)
{
	int	div;
	int	max;

	if (nb == 2 || nb == 3)
		return (1);
	if (nb <= 1 || nb % 2 == 0)
		return (0);
	div = 3;
	max = ft_sqrt(nb) + 1;
	while (div < max)
	{
		if (nb % div == 0)
			return (0);
		div = div + 2;
	}
	return (1);
}

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
	return (i);
}
