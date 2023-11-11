/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jsala@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:03:20 by jsala             #+#    #+#             */
/*   Updated: 2023/10/25 16:07:25 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (*str < 48 || *str > 57)
			return (0);
		str++;
	}
	return (1);
}
/*
int	main(void)
{
	char arr[1] = "\0";
	int res;

	res = ft_str_is_numeric(arr);
	if (res == 0)
		write(1, "0", 2);
	else if (res == 1)
		write(1, "1", 2);
	else
		write(1, "What?", 6);
	return (0);
}
*/
