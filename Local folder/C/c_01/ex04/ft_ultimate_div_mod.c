/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jsala@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:37:42 by jsala             #+#    #+#             */
/*   Updated: 2023/10/20 14:01:11 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	d;
	int	m;

	d = *a / *b;
	m = *a % *b;
	*a = d;
	*b = m;
}
/*
int	main(void)
{
	int a = 3135;
	int b = 56;
	write(1, &a, 1);
	write(1, &b, 1);
	ft_ultimate_div_mod(&a, &b);
	write(1, &a, 1);
	write(1, &b, 1);
}
*/
