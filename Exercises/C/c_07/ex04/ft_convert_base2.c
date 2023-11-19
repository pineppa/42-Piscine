/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jsala@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:05:41 by jsala             #+#    #+#             */
/*   Updated: 2023/11/04 09:33:03 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_putdos(int val, int l_base, char *nbr2, char *base);
char	*ft_putnbr_base(int val, char *nbr2, char *base);
int		ft_check_base(char *base);

char	*ft_putnbr_base(int val, char *nbr2, char *base)
{
	int	l_base;
	int	count;

	count = 0;
	l_base = ft_check_base(base);
	if (l_base < 2)
		return (nbr2);
	if (val == -2147483648)
	{
		*nbr2++ = '-';
		nbr2 = ft_putnbr_base(-(val / l_base), nbr2, base);
		*nbr2++ = base[(-(val % l_base) * (-1))];
	}
	else
		nbr2 = ft_putdos(val, l_base, nbr2, base);
	return (nbr2);
}

char	*ft_putdos(int val, int l_base, char *nbr2, char *base)
{
	if (val < 0)
	{
		*nbr2++ = '-';
		val = -val;
	}
	if (val >= l_base)
		nbr2 = ft_putnbr_base((val / l_base), nbr2, base);
	*nbr2++ = base[(val % l_base)];
	return (nbr2);
}

int	ft_check_base(char *base)
{
	int	l_base;
	int	n;

	n = 1;
	l_base = 0;
	while (base[l_base])
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
