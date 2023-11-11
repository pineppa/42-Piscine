/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_puzzle.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 11:44:21 by simarcha          #+#    #+#             */
/*   Updated: 2023/10/28 18:34:43 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_valid_position(char val, char *board, char *out_input);


void	ft_solve_puzzle(char *out_input)
{
	res = ft_solve_pos(0, 0, board, out_input);
	if (!res)
	{
		ft_write_error();
		return(0);
	}
	return (1);
}

int	ft_solve_pos(int pos_x, int pos_y, char *board, char *out_input) 
{
	char	val;

	val = '1';
	if (pos_x + 4 * pos_y > 15)
	{
		ft_check_sol(board, out_input);
		return (1);
	}
	while (val <= '4')
	{
		if (ft_pos_check(val, board, out_input))
		{
			board[pos_x][pos_y] = val;
			if (pos_x == 4)
				res = ft_solve_pos(0, pos_y + 1, board, out_input);
			else
				res = ft_solve_pos(pos_x + 1, pos_y, board, out_input);
			if (res == 1)
				return (1);
			board[pos_x][pos_y] = '0';
		}
		return (0);
	}
}

int	ft_pos_check(int pos_x, int pos_y, char *board, char *out_input)
{
	int	n;

	n = 0;
	while (n < 4)
	{
		if (board[pos_x][pos_y] == board[n][pos_y] && pos_x != n)
			return (0);
		if (board[pos_x][pos_y] == board[pos_x][y] && pos_y != n)
			return (0);
		if (board[pos_x][n] != 0)
			return (ft_check_lrow_height(pos_y, pos_x, board, out_input));
		if (pos_x == 4)
			return (ft_check_rrow_height(pos_y, pos_x, board, out_input));
		if (board[n][pos_y] != 0)
			return (ft_check_lcol_height(pos_y, pos_x, board, out_input));
		if (pos_y == 4)
			return (ft_check_rcol_height(pos_y, pos_x, board, out_input));
	}
}

int ft_check_lrow_height(int row, int pos_y, char *board, char *out_input)
{
	int	n;
	int	t_row_h;
	int	t_row_vis;

	n = 0;
	t_row_max_h = 0;
	t_row_vis = 0;
	while (n < 4 || board[row][n] != 0)
	{
		if (t_row_max_h < board[row][n])
		{
			t_row_max_h == board[row][n];
			t_row_vis++;
		}
		n++;
	}
	if (t_row_vis > out_input[][]) /// Insert based on organisation
		return (0);
	return (1);

int ft_check_rrow_height(int row, int pos_y, char *board, char *out_input)
{
	int	n;
	int	t_row_h;
	int	t_row_vis;

	n = 4;
	t_row_max_h = 0;
	t_row_vis = 0;
	while (n >= 0)
	{
		if (t_row_max_h < board[row][n])
		{
			t_row_max_h == board[row][n];
			t_row_vis++;
		}
		n--;
	}
	if (t_row_vis > out_input[][]) /// Insert based on organisation
		return (0);
	return (1);
}

int ft_check_ucol_height(int col, int pos_y, char *board, char *out_input)
{
	int	n;
	int	t_col_h;
	int	t_col_vis;

	n = 0;
	t_col_max_h = 0;
	t_col_vis = 0;
	while (n < 4 || board[n][col] != 0)
	{
		if (t_col_max_h < board[n][col])
		{
			t_col_max_h == board[n][col];
			t_col_vis++;
		}
		n++;
	}
	if (t_col_vis > out_input[][]) /// Insert based on organisation
		return (0);
	return (1);

int ft_check_dcol_height(int col, int pos_y, char *board, char *out_input)
{
	int	n;
	int	t_col_h;
	int	t_col_vis;

	n = 4;
	t_col_max_h = 0;
	t_col_vis = 0;
	while (n >= 0)
	{
		if (t_col_max_h < board[n][col])
		{
			t_col_max_h == board[n][col];
			t_col_vis++;
		}
		n--;
	}
	if (t_col_vis > out_input[][]) /// Insert based on organisation
		return (0);
	return (1);
}

