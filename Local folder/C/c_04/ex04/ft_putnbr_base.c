/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jsala@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 14:43:09 by jsala             #+#    #+#             */
/*   Updated: 2023/10/28 10:04:14 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_putnbr_base(int nbr, char *base);
int		ft_check_base(char *base);
void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	l_base;

	l_base = ft_check_base(base);
	if (l_base < 2)
		return ;
	if (nbr == -2147483648)
	{
		ft_putchar('-');
		ft_putnbr_base(-nbr / l_base, base);
		ft_putchar(base[-(nbr % l_base * -1)]);
	}
	else
	{	
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr = -nbr;
		}
		if (nbr >= l_base)
		{
			ft_putnbr_base(nbr / l_base, base);
			nbr = nbr % l_base;
		}
		if (nbr < l_base)
			ft_putchar(base[nbr]);
	}
}

int	ft_check_base(char *base)
{
	int	l_base;
	int	n;

	n = 1;
	l_base = 0;
	while (base[l_base] != '\0')
	{
		if (base[l_base] == '+' || base[l_base] == '-' || base[l_base] == ' '
			|| !(base[l_base] >= 32 && base[l_base] <= 126))
			return (-1);
		n = 1;
		while (base[l_base + n] != '\0')
		{
			if (base[l_base + n] == base[l_base])
				return (-1);
			n++;
		}
		l_base++;
	}
	return (l_base);
}

int main(int argc, char *argv[])
{
	int		n1;
	
	if (argc < 2)
		return (0);
	n1 = atoi(argv[1]);
	ft_putnbr_base(n1, argv[2]);
	return (0);
}

