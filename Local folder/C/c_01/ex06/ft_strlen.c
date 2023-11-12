/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jsala@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 12:58:37 by jsala             #+#    #+#             */
/*   Updated: 2023/10/22 14:22:44 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

int	ft_strlen(char *str)
{
	int	l;

	l = 0;
	while (str[l] != 0)
		l++;
	return (l);
}
/*
int	main(void)
{
	int		count;
	char	str[11] = "Hello World";
	
	count = ft_strlen(str);
	count = count * 5;
	write(1, &count, 1);
	return (0);
}
*/
