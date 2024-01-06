/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jsala@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:49:01 by jsala             #+#    #+#             */
/*   Updated: 2023/10/25 16:16:22 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	num(char *str)
{
	if (*str >= '0' && *str <= '9')
		return (1);
	return (0);
}

int	up(char	*str)
{
	if (*str >= 'A' && *str <= 'Z')
		return (1);
	return (0);
}

int	low(char *str)
{
	if (*str >= 'a' && *str <= 'z')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (low(&str[0]))
		str[0] -= 32;
	while (str[i] != '\0')
	{
		if (!(num(&str[i])) && !(up(&str[i])) && !(low(&str[i])))
		{
			if (low(&str[i + 1]))
				str[i + 1] -= 32;
		}
		if (i != 0 && up(&str[i]))
			if (low(&str[i - 1]) || num(&str[i - 1]) || up(&str[i - 1]))
				str[i] += 32;
		i++;
	}
	return (str);
}
/*
int main(void)
{
	char	arr[29] = "9rb eR ft+-d ch shPhr h02  \0";
	char	*res;
	
	printf("%s", arr);
	res = ft_strcapitalize(arr);
	printf("%s", arr);
	return (0);
}
*/
