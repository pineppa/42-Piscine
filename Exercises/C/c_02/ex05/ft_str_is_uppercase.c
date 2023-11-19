/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jsala@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:23:28 by jsala             #+#    #+#             */
/*   Updated: 2023/10/25 16:09:48 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (*str < 'A' || *str > 'Z')
			return (0);
		str++;
	}
	return (1);
}
/*
int main(void)
{
	char	arr[5] = "HELLO";
	int		res;

	res = ft_str_is_uppercase(arr);
	if (res == 0)
		write(1, "0", 2);
	else if (res == 1)
		write(1, "1", 2);
	else
		write(1, "5", 2);
	return (0);
}
*/
