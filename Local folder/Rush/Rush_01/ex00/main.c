/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 11:10:00 by simarcha          #+#    #+#             */
/*   Updated: 2023/10/30 09:59:43 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_check_input(char *input);
void	ft_solve_puzzle(int board[4][4], int out_val[4][4]);
void	ft_init_input(char *str, int out_val[4][4]);
void	ft_init_board(int size, int board[4][4]);

int	main(int argc, char *argv[])
{
	int		board[4][4];
	int		out_val[4][4];
	int		is_valid;

	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	is_valid = ft_check_input(argv[1]);
	if (!is_valid)
		return (1);
	ft_init_input(argv[1], out_val);
	ft_init_board(4, board);
	ft_solve_puzzle(board, out_val);
	return (0);
}

void	ft_init_board(int size, int board[4][4])
{
	int		x;
	int		y;

	y = 0;
	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			board[y][x] = 0;
			x++;
		}
		y++;
	}
}

void	ft_init_input(char *str, int out_val[4][4])
{
	int	n;

	n = 0;
	while (*str && n < 16)
	{
		out_val[n / 4][n % 4] = *str - '0';
		n++;
		str = str + 2;
	}
}
