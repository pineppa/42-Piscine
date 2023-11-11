/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jsala@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 20:09:25 by jsala             #+#    #+#             */
/*   Updated: 2023/10/30 18:05:45 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_ten_queens_puzzle(void);
int	ft_solve_pos(char *board, int col, int count);
int	ft_queens_check(char *board, char row, int col);

int	ft_ten_queens_puzzle(void)
{
	int		i;
	char	board[10];

	i = 0;
	while (board[i])
	{
		board[i] = '0';
		i++;
	}
	return (ft_solve_pos(board, 0, 0));
}

int	ft_solve_pos(char *board, int col, int count)
{
	char	row;

	row = '0';
	while (row <= '9')
	{
		if (ft_queens_check(board, row, col))
		{
			board[col] = row;
			if (col == 9)
			{
				write(1, board, 10);
				write(1, "\n", 1);
				count += 1;
			}
			else
			{
				count = ft_solve_pos(board, col + 1, count);
				board[col] = '0';
			}
		}
		row++;
	}
	return (count);
}

int	ft_queens_check(char *board, char row, int col)
{
	int	i;
	int	j;

	i = 0;
	while (i < col)
	{
		if (board[i] == row)
			return (0);
		i++;
	}
	j = 0;
	while (j < col)
	{
		if ((row - board[j]) == (col - j) || (row - board[j]) == (j - col))
			return (0);
		j++;
	}
	return (1);
}
/*
int	main(void)
{
	int	count;

	count = ft_ten_queens_puzzle();
	printf("%d", count);
	return (0);
}*/
