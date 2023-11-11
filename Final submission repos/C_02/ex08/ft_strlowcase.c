/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jsala@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:46:45 by jsala             #+#    #+#             */
/*   Updated: 2023/10/25 16:13:40 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strlowcase(char *str)
{
	char	*str_start;

	str_start = str;
	while (*str)
	{
		if (*str >= 65 && *str <= 90)
			*str = *str + 32;
		str++;
	}
	return (str_start);
}
/*
int main(void)
{
	char	arr[6] = "iA.nd\0";
	char	*res;

	res = ft_strlowcase(arr);
	printf("%s", res);
	return (0);
}
*/
