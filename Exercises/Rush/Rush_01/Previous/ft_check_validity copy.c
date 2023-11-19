/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_validity.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 12:11:22 by simarcha          #+#    #+#             */
/*   Updated: 2023/10/29 08:28:01 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check_validity(char *arr)
{
	int	i;

	i = 0;
	if (!ft_valid(arr) || !ft_th_one(arr))
		return (0);
	while (arr[i] != '\0')
	{
		
	}
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
			write(1, "Error\n", 6);
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
		write(1, "Error\n", 6);
		return (1);
	}
	return (0);
}

