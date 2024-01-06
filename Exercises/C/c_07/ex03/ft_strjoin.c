/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jsala@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:13:38 by jsala             #+#    #+#             */
/*   Updated: 2023/11/02 19:35:28 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
char	*ft_strcpy_end(char *dest, char *src);
int		ft_mat_len(char **strs, int size);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*cat_str;
	char	*icat_str;
	int		i;

	if (size <= 0)
	{
		cat_str = malloc(sizeof(char));
		*cat_str = '\0';
		return (cat_str);
	}
	cat_str = malloc(ft_mat_len(strs, size) + (size - 1) * ft_strlen(sep) + 1);
	i = 0;
	icat_str = cat_str;
	while (i < size)
	{
		cat_str = ft_strcpy_end(cat_str, strs[i]);
		if (i != size - 1)
			cat_str = ft_strcpy_end(cat_str, sep);
		i++;
	}
	return (icat_str);
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

char	*ft_strcpy_end(char *dest, char *src)
{
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (dest);
}

int	ft_mat_len(char **strs, int size)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (i < size)
	{
		count += ft_strlen(strs[i]);
		i++;
	}
	return (count);
}
