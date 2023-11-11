/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jsala@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 08:46:48 by jsala             #+#    #+#             */
/*   Updated: 2023/11/06 09:40:18 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	pos;
	int	neg;

	i = 0;
	pos = 0;
	neg = 0;
	while (i < length)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			pos++;
		else if (f(tab[i], tab[i + 1]) < 0)
			neg++;
		if (pos != 0 && neg != 0)
			return (0);
		i++;
	}
	return (1);
}
