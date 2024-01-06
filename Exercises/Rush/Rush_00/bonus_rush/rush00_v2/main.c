/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jsala@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 14:12:32 by jsala             #+#    #+#             */
/*   Updated: 2023/10/21 19:51:17 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);

int	stoi(char *str)
{
	int	n;

	n = 0;
	while (*str != '\0')
	{
		if (*str < 48 || *str > 57)
			return (-1);
		n = n * 10 + *str - '0';
		str++;
	}
	return (n);
}

int	main(int argc, char *argv[])
{
	int	x;
	int	y;

	if (argc < 2)
	{
		write(1, "Too little arguments, insert one number per argument\n", 54);
		return (1);
	}
	x = stoi(argv[1]);
	y = stoi(argv[2]);
	if (x == -1 || y == -1)
	{
		write(1, "Only include numbers as arguments\n", 35);
		return (1);
	}
	if (argc > 2)
	{
		write(1, "Too many arguments, insert one number per argument\n", 52);
		return (1);
	}
	rush(x, y);
	return (0);
}
