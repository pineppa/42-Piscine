/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jsala@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:02:46 by jsala             #+#    #+#             */
/*   Updated: 2023/10/25 10:33:02 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != 0)
		write(1, str++, 1);
}

/*
int	main(void)
{
	char	str[5] = "Hello";

	ft_putstr(str);
	return (0);
}
*/
