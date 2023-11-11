/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jsala@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 08:47:13 by jsala             #+#    #+#             */
/*   Updated: 2023/11/06 14:51:47 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(long n);
int		ft_atoi(char *c);

long	ft_do_op(int a, int b, char op)
{
	if (op == '+')
		return (a + b);
	if (op == '-')
		return (a - b);
	if (op == '*')
		return (a * b);
	if (op == '/')
		return (a / b);
	if (op == '%')
		return (a % b);
	return (0);
}

int	main(int argc, char **argv)
{
	long	val;

	val = 0;
	if (argc != 4)
		return (0);
	if (*argv[2] == '%' && argv[3][0] == '0')
	{
		write(1, "Stop : modulo by zero\n", 23);
		return (0);
	}
	if (*argv[2] == '/' && argv[3][0] == '0')
	{
		write(1, "Stop : division by zero\n", 24);
		return (0);
	}
	val = ft_do_op(ft_atoi(argv[1]), ft_atoi(argv[3]), *argv[2]);
	ft_putnbr(val);
	write(1, "\n", 1);
	return (0);
}
