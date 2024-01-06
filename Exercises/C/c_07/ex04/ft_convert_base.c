/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jsala@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:03:44 by jsala             #+#    #+#             */
/*   Updated: 2023/11/04 09:32:14 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_value_base(char c, char *base);
int		ft_check_base(char *base);
char	*ft_get_sign(int *sign, char *str);
int		ft_atoi_base(char *str, char *base);
char	*ft_putnbr_base(int nbr, char *nbr2, char *base);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*ini_nbr;
	int		l_base_to;
	char	*nbr2;
	int		val;

	val = ft_atoi_base(nbr, base_from);
	l_base_to = ft_check_base(base_to);
	if (l_base_to < 2)
		return (0);
	if (val < 0)
		nbr2 = malloc(sizeof(char) * (-val / l_base_to + 1));
	else
		nbr2 = malloc(sizeof(char) * (val / l_base_to + 0));
	if (nbr2 == NULL)
		return (NULL);
	ini_nbr = nbr2;
	nbr2 = ft_putnbr_base(val, nbr2, base_to);
	return (ini_nbr);
}

int	ft_value_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	l_base;
	int	res;
	int	val_unit;
	int	sign;

	res = 0;
	sign = 1;
	l_base = ft_check_base(base);
	if (l_base < 2)
		return (0);
	str = ft_get_sign(&sign, str);
	while (*str)
	{
		val_unit = ft_value_base(*str, base);
		if (val_unit == -1)
			break ;
		res = l_base * res + val_unit;
		str++;
	}
	return (res * sign);
}

char	*ft_get_sign(int *sign, char *str)
{
	while ((*str == ' ' || *str == '\f' || *str == '\n' || *str == '\r'
			|| *str == '\t' || *str == '\v') && *str)
		str++;
	while ((*str == '+' || *str == '-') && *str)
	{
		if (*str == '-')
			*sign = *sign * -1;
		str++;
	}
	return (str);
}
