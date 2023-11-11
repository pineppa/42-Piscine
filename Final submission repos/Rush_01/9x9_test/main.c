/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 11:10:00 by simarcha          #+#    #+#             */
/*   Updated: 2023/10/29 18:54:31 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_check_input(char *input);
void	ft_solve_puzzle(int board[4][4], int out_val[4][4]);
void	ft_init_input(char *input, int size, int out_val[4][4]);
void	ft_init_board(int size, int board[4][4]);
int		ft_input_size(char *input);

int	main(int argc, char *argv[])
{
	int	board[4][4];
	int	out_val[4][4];
	int	is_valid;
	int	size;

	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	is_valid = ft_check_input(argv[1]);
	size = ft_input_size(argv[1]);
	if (!is_valid)
		return (1);
	ft_init_input(argv[1], size, out_val);
	ft_init_board(size, board);
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

void	ft_init_input(char *input, int size, int out_val[4][4])
{
	int	n;
	int i;

	n = 0;
	i = 0;
	while (input[i] && n < 4 * size)
	{
		out_val[n / size][n % size] = input[i] - '0';
		n++;
		i = i + 2;
	}
}

int	ft_input_size(char *input)
{
	int	size;
	int	i;

	size = 0;
	i = 0;
	while (input[i])
	{
		if ('0'	<= input[i] && input[i] <= '9')
		   	size++;
		input++;
	}
	return (size / 4);
}
