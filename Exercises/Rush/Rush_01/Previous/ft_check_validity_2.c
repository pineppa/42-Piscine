/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_validity.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 12:11:22 by simarcha          #+#    #+#             */
/*   Updated: 2023/10/29 09:21:17 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_check_input(char *arr);
int		ft_valid(char *arr);
int		ft_check_sum(char *arr);
int		ft_th_one(char *arr);
void	ft_write_error(void);

int	ft_check_input(char *arr)
{
	int	i;

	i = 0;
	if (!ft_valid(arr) || !ft_th_one(arr))
		return (0);
	if (!ft_check_sum(arr))
		return (0);
	return (1);
}

int	ft_valid(char *arr)
{
	int	i;

	i = 0;
	while (arr[i] != '\0')
	{
		if (arr[i] < '1' || arr[i] > '4' || arr[i] != " ")
			write(1, "Error\n", 6);
		i++;
	}
	return (0);
}

int	ft_check_sum(char *arr)
{
	int	i;

	i = 0;
	if ((arr[0] + arr[2] + arr[4] + arr[6] > 10)
		|| (arr[8] + arr[10] + arr[12] + arr[14] > 10)
		|| arr[16] + arr[18] + arr[20] + arr[22] > 10)
		|| (arr[24] + arr[26] + arr[28] + arr[30] > 10)
			ft_write_error();
	if ((arr[0] + arr[2] + arr[4] + arr[6] < 7)
		|| (arr[8] + arr[10] + arr[12] + arr[14] < 7)
		|| arr[16] + arr[18] + arr[20] + arr[22] < 7)
		|| (arr[24] + arr[26] + arr[28] + arr[30] < 7)
			ft_write_error();
	while (i < 7)
	{
		if ((arr[i] + arr[i + 8] - '0') > '5'
			|| arr[i + 16] + arr[i + 24] - '0' > '5'
			|| arr[i] + arr[i + 8] - '0' < '3'
			|| arr[i + 16] + arr[i + 24] - '0' < '3')
			ft_write_error();
		i = i + 2;
	}
}

int	ft_th_one(char *arr)
{
	int	i;
	int	space;
	int	digit;
	int	result;

	i = 0;
	space = 0;
	digit = 0;
	while (arr[i] != '\0')
	{
		if ((arr[i] == " " && space == 1)
			|| ((arr[i] > '0' && arr[i] < '5') && digit == 1))
		{
			ft_write_error();
			return (1);
		}
		if (arr[i] == " ")
			space = 1;
		else
			space = 0;
		i++;
	}
	if (i != 31)
	{
		ft_write_error();
		return (1);
	}
	return (0);
}

void	ft_write_error(void)
{
	write(1, "Error\n", 6);
}
