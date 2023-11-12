/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jsala@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:26:35 by jsala             #+#    #+#             */
/*   Updated: 2023/10/25 16:11:36 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str < ' ' || *str > 126)
			return (0);
		str++;
	}
	return (1);
}
/*
int main(void)
{
	char	arr[5] = "idfnd";
	int		res;

	res = ft_str_is_printable(arr);
	if (res == 0)
		write(1, "0", 2);
	else if (res == 1)
		write(1, "1", 2);
	else
		write(1, "5", 2);
	return (0);
}
*/
