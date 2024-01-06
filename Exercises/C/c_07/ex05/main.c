/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jsala@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:56:16 by jsala             #+#    #+#             */
/*   Updated: 2023/11/03 09:52:13 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char **ft_split(char *str, char *charset);

int	main(int argc, char **argv)
{
	char	**result;
	int		i;

	i = 0;
	if (argc < 3)
		return (0);
	result = ft_split(argv[1], argv[2]);
	printf("%s has no results", result[0]);
	if (result == 0)
		return (0);
	while (result[i]) 
	{	
		printf("%s;\n", result[i]);
		i++;
	}
	return (0);
}
