/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jsala@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 08:23:41 by jsala             #+#    #+#             */
/*   Updated: 2023/10/30 08:29:50 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_sqrt(int val);

int	main(int argc, char *argv[])
{
	int	i;
	int	val;
	int	res;

	i = 1;
	if (argc < 2)
		return (0);
	while (argv[i])
	{
		val = atoi(argv[i]);
		res = ft_sqrt(val);
		printf("Entry argument: %d, SPQR: %d", val, res);
		i++;
	}
	return (0);
}
