/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jsala@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 12:56:51 by jsala             #+#    #+#             */
/*   Updated: 2023/10/20 13:33:11 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main(void)
{
	int a;
	int	b;
	int d;
	int m;

	a = 20094;
	b = 100;
	d = 55;
	m = 60;
	ft_div_mod(a, b, &d, &m);
	write(1, &d, 1);
	write(1, &m, 1);
	return (0);
}
*/
