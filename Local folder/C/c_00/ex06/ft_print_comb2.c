/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jsala@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 17:14:20 by jsala             #+#    #+#             */
/*   Updated: 2023/10/26 09:14:07 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	p2d_int(int n)
{
	int	div;
	int	mod;

	mod = n % 10 + 48;
	div = n / 10 + 48;
	write(1, &div, 1);
	write(1, &mod, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 1;
	b = 0;
	while (b < 99)
	{
		while (a <= 99)
		{
			p2d_int(b);
			write(1, " ", 1);
			p2d_int(a);
			if (!(a == 99 && b == 98))
				write(1, &", ", 2);
			a++;
		}
		b++;
		a = b + 1;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/
