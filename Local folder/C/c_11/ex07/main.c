/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jsala@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 09:09:05 by jsala             #+#    #+#             */
/*   Updated: 2023/11/06 09:15:24 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *));
int		ft_strcmp(char *s1, char *s2);

int		main(int argc, char **argv)
{
	int		i;

	ft_advanced_sort_string_tab(argv, ft_strcmp);
	i = 0;
	while (++i < argc)
		printf("%s\n", argv[i]);
}
