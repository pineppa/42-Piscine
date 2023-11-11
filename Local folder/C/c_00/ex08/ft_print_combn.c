/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jsala@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 19:11:20 by jsala             #+#    #+#             */
/*   Updated: 2023/10/24 19:53:33 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		pow_of_n(int nb);
void	ft_putnbr(int nb);
int		pow_int(int pow);

void	ft_print_combn(int n)
{
	int	pow;
	int nbr;

	pow = 1;
	while (n > 0)
	{
		pow = pow * 10;
	}
	nbr = 
	while (
}

int	pow_of_n(int nb)
{
	int	pow_ten;

	pow_ten = 1;
	while (nb > 0)
	{
		nb = nb / 10;
		pow_ten = pow_ten * 10;
	}
	return (pow_ten / 10);
}

void	ft_putnbr(int nb)
{
	int		pow_ten;
	int		div;
	char	c;

	pow_ten = pow_of_n(nb);
	while (nb > 0)
	{
		div = nb / pow_ten;
		nb = nb % pow_ten;
		pow_ten = pow_ten / 10;
		c = div + '0';
		write(1, &c, 1);
	}
}
/*
int	main(void)
{
	int	i = 3004094;

	ft_putnbr(i);
	return(0);
}
*/
