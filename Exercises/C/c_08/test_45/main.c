/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akozin <akozin@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:55:15 by akozin            #+#    #+#             */
/*   Updated: 2023/11/02 11:32:51 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

#include "ft_stock_str.h"

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);
void 				ft_show_tab(struct s_stock_str *par);

int	main(int argc, char **argv)
{
	//if (argc <= 1)
	//	return (1);
	char	*av[argc - 1];

	for (int i = 1; i < argc; i++)
		av[i - 1] = argv[i];

	struct s_stock_str	*x;
	x = (struct s_stock_str *) malloc(argc * sizeof (struct s_stock_str));
	x = ft_strs_to_tab(argc - 1, av);
	x[0].copy = "HAHAHHAHAHAHHAH!!!!!!!!!!!!!!!!!LOOOOOLLLLLLLL HAHAHHAHA HHAHAHA%$$HHAHAHHA HUUUUEEEEEEEExxxxxxxx....\n";
	ft_show_tab(x);
	return (0);
}
