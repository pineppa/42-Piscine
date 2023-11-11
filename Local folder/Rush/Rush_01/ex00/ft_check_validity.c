/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_validity.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 12:11:22 by simarcha          #+#    #+#             */
/*   Updated: 2023/10/29 16:19:23 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_check_input(char *input);
int		ft_valid(char *input);
int		ft_check_sum(char *input);
int		ft_th_one(char *input);
void	ft_write_error(void);

int	ft_check_input(char *input)
{
	int	i;

	i = 0;
	if (!ft_valid(input) || !ft_th_one(input))
		return (0);
/*	if (!ft_check_sum(input))
		return (0);
*/	return (1);
}

int	ft_valid(char *input)
{
	int	i;

	i = 0;
	while (input[i] != '\0')
	{
		if ((input[i] < '1' || input[i] > '4') && input[i] != ' ')
		{
			ft_write_error();
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_check_sum(char *input)
{
	int	i;
	// Sum done with char type values and therefore not gooood
	i = 0;
	if ((input[0] + input[2] + input[4] + input[6] > 10)
		|| (input[8] + input[10] + input[12] + input[14] > 10)
		|| (input[16] + input[18] + input[20] + input[22] > 10)
		|| (input[24] + input[26] + input[28] + input[30] > 10))
	{
		ft_write_error();
		return (0);
	}
	if ((input[0] + input[2] + input[4] + input[6] < 7)
		|| (input[8] + input[10] + input[12] + input[14] < 7)
		|| (input[16] + input[18] + input[20] + input[22] < 7)
		|| (input[24] + input[26] + input[28] + input[30] < 7))
	{
		ft_write_error();
		return (0);
	}
	while (i < 7)
	{
		if ((input[i] + input[i + 8] - '0' > '5')
			|| (input[i + 16] + input[i + 24] - '0' > '5')
			|| (input[i] + input[i + 8] - '0' < '3')
			|| (input[i + 16] + input[i + 24] - '0' < '3'))
		{
			ft_write_error();
			return (0);
		}
		i = i + 2;
	}
	return (1);
}

int	ft_th_one(char *input)
{
	int	i;
	int	check;

	i = 0;
	check = 1;
	while (input[i + 1] != '\0')
	{
		if ((input[i] == ' ' && input[i + 1] == ' ')
			|| ((input[i] > '0' && input[i] < '5')
				&& (input[i + 1] > '0' && input[i + 1] < '5')))
			check = 0;
		i++;
	}
	if (i != 30)
		check = 0;
	if (!check)
	{
		ft_write_error();
		return (check);
	}
	return (check);
}

void	ft_write_error(void)
{
	write(1, "Error\n", 6);
}
