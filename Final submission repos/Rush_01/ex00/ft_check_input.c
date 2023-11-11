/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 12:11:22 by simarcha          #+#    #+#             */
/*   Updated: 2023/10/29 19:13:19 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_check_input(char *input);
int		ft_valid(char *input);
int		ft_th_one(char *input);
void	ft_write_error(void);

int	ft_check_input(char *input)
{
	int	i;

	i = 0;
	if (!ft_valid(input) || !ft_th_one(input))
		return (0);
	return (1);
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
