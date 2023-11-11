/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jsala@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:08:36 by jsala             #+#    #+#             */
/*   Updated: 2023/10/25 16:06:06 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if ((*str < 65 || *str > 90) && (*str < 97 || *str > 122))
			return (0);
		str++;
	}
	return (1);
}
/*
int	main(void)
{
	char	l[5] = "dnfH\0";
	int		res;

	res = ft_str_is_alpha(l);
	if (res == 1)
		write(1, "1", 2);
	else if (res == 0)
		write(1, "0", 2);
	else
		write(1, "Not right", 9);
	return (0);
}
*/
