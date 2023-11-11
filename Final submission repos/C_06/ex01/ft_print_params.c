/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jsala@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 09:20:57 by jsala             #+#    #+#             */
/*   Updated: 2023/10/30 18:44:07 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_arr(char *arr);

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	if (argc < 2)
		return (0);
	while (argv[i] != 0)
	{
		ft_write_arr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
}

void	ft_write_arr(char *arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		write(1, &arr[i], 1);
		i++;
	}
}
