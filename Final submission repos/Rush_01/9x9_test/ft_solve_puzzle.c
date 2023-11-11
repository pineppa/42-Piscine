/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_puzzle.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 11:44:21 by simarcha          #+#    #+#             */
/*   Updated: 2023/10/29 19:02:08 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_pos_chk(int *pos, int size, int board[4][4], int out_val[4][4]);
int		ft_chk_lrow(int pos, int size, int board[4][4], int out_val[4][4]);
int		ft_chk_rrow(int pos, int size, int board[4][4], int out_val[4][4]);
int		ft_chk_ucol(int pos, int size, int board[4][4], int out_val[4][4]);
int		ft_chk_dcol(int pos, int size, int board[4][4], int out_val[4][4]);
int		ft_solve_pos(int *pos, int size, int board[4][4], int out_val[4][4]);
void	ft_write_error(void);
void	ft_print_sol(int board[4][4]);
int		ft_next_pos(int *pos, int size, int board[4][4], int out_val[4][4]);

void	ft_solve_puzzle(int size, int board[4][4], int out_val[4][4])
{
	int	res;
	int pos[2];

	pos[0] = 0;
	pos[1] = 0;
	res = ft_solve_pos(pos, size, board, out_val);
	if (res)
		ft_print_sol(board);
	else
		ft_write_error();
}

int	ft_solve_pos(int *pos, int size, int board[4][4], int out_val[4][4])
{
	int		val;
	int		res;

	val = 1;
	ft_print_sol(board);
	while (val <= size)
	{
		board[pos[1]][pos[0]] = val;
		if (ft_pos_chk(pos, size, board, out_val))
		{
			res = ft_next_pos(pos, size, board, out_val);
			if (res == 1)
				return (1);
		}
		board[pos[1]][pos[0]] = 0;
		val++;
	}
	return (0);
}

int	ft_pos_chk(int *pos, int size, int board[4][4], int out_val[4][4])
{
	int	n;
	int	check;

	n = 0;
	check = 1;
	while (n < size)
	{
		if (board[pos[1]][pos[0]] == board[pos[1]][n] && pos[0] != n)
			return (0);
		if (board[pos[1]][pos[0]] == board[n][pos[0]] && pos[1] != n)
			return (0);
		if (board[pos[1]][n] != 0 && !ft_chk_lrow(pos[1], size, board, out_val))
			return (0);
		if (board[n][pos[0]] != 0 && !ft_chk_ucol(pos[0], size, board, out_val))
			return (0);
		n++;
	}
	if (pos[1] == size - 1 && !ft_chk_dcol(pos[0], size, board, out_val))
		return (0);
	if (pos[0] == size - 1 && !ft_chk_rrow(pos[1], size, board, out_val))
		return (0);
	return (1);
}

int	ft_next_pos(int *pos, int size, int board[4][4], int out_val[4][4])
{
	int	next_pos[2];
	int	res;

	if (pos[0] == size - 1)
	{
		next_pos[0] = 0;
		next_pos[1] = pos[1] + 1;
	}
	else
	{
		next_pos[0] = pos[0] + 1;
		next_pos[1] = pos[1];
	}
	res = ft_solve_pos(next_pos, size, board, out_val);
	return (res);
}
