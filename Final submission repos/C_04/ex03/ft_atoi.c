/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jsala@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 10:41:05 by jsala             #+#    #+#             */
/*   Updated: 2023/10/30 13:05:10 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>

int	ft_atoi(char *str);

int	ft_atoi(char *str)
{
	int	val;
	int	sign;

	val = 0;
	sign = 1;
	if (!*str)
		return (0);
	while ((*str == ' ' || *str == '\f' || *str == '\n' || *str == '\r'
			|| *str == '\t' || *str == '\v') && *str)
		str++;
	while ((*str == '+' || *str == '-') && *str)
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while ((*str >= '0' && *str <= '9') && *str)
	{
		val = 10 * val + (*str - '0');
		str++;
	}
	return (val * sign);
}
/*
int main(int argc, char *argv[])
{
	int		i;
	int		c;
	char	text[] = "\t\n\v\f\r      23";
		
	c = 1;
	i = ft_atoi(text);
	printf("      My result:	%d;\n", i);
	printf("Atoi's function:	%d;\n", atoi(text));
	while (argv[c])
	{
		printf("      My result:	%d;\n", ft_atoi(argv[c]));
		printf("Atoi's function:	%d;\n", atoi(argv[c]));
		c++;
	}
	return (0);
}
*/
