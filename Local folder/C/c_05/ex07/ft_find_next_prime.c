/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jsala@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 19:44:28 by jsala             #+#    #+#             */
/*   Updated: 2023/10/30 18:01:36 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb);
int	ft_find_next_prime(int nb);
int	ft_sqrt(int nb);

int	ft_find_next_prime(int nb)
{
	if (nb <= 1)
		return (2);
	if (nb <= 3)
		return (nb);
	if (ft_is_prime(nb))
		return (nb);
	else
	{
		if (nb % 2 == 0)
			return (ft_find_next_prime(nb + 1));
		else
			return (ft_find_next_prime(nb + 2));
	}
}

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
