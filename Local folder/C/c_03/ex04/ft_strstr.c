/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jsala@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 13:02:12 by jsala             #+#    #+#             */
/*   Updated: 2023/10/25 17:38:37 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int		ft_strlen(char *arr);
int		ft_strcmp(char *s1, char *s2);

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	n;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		n = 0;
		while (str[i + n] && str[i + n] == to_find[n])
		{
			if (!to_find[n + 1])
				return (&str[i]);
			n++;
		}
		i++;
	}
	return (0);
}

/*
int	main(void)
{
	char	desc[44] = "Find a substring in the middle of a string";
	char	str[52] = "42 Barna Network 2023 piscine Great person and good";
	char	find[8] = "piscine";
	char	*res;

	res = ft_strstr(str, find);
	printf("%s", res);
}
*/
