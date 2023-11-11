/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_sol.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jsala@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 10:07:33 by jsala             #+#    #+#             */
/*   Updated: 2023/10/29 13:52:18 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c);

void	ft_print_sol(int board[4][4])
{
	int	i;
	int	j;
	char val;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			val = board[i][j] + '0';
			ft_putchar(val);
			if (j < 3)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
		j = 0;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
/*
int	main(void)
{
	int	board[4][4] =
	{
		{1, 2, 3, 4},
		{2, 3, 4, 1},
		{3, 4, 1, 2},
		{4, 1, 2, 3}
	};
	ft_print_sol(board);
	return 0;
}*/
