/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jsala@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:33:25 by jsala             #+#    #+#             */
/*   Updated: 2023/10/25 16:12:53 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strupcase(char *str)
{
	char	*str_start;

	str_start = str;
	while (*str)
	{
		if (*str >= 97 && *str <= 122)
			*str = *str - 32;
		str++;
	}
	return (str_start);
}
/*
int main(void)
{
	char	arr[6] = "iA.nd\0";
	char	*res;

	res = ft_strupcase(arr);
	printf("%s", res);
	return (0);
}
*/
