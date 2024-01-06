/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jsala@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 17:58:29 by jsala             #+#    #+#             */
/*   Updated: 2023/10/30 16:59:41 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	val;

	val = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (power >= 1)
	{
		val *= nb;
		power--;
	}
	return (val);
}
