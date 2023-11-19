/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jsala@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 13:01:53 by jsala             #+#    #+#             */
/*   Updated: 2023/10/25 09:50:19 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *arr);
char	*ft_strncat(char *dest, const char *src, unsigned int n);

char	*ft_strncat(char *dest, const char *src, unsigned int n)
{
	unsigned int	dest_len;
	unsigned int	i;

	dest_len = ft_strlen(dest);
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

int	ft_strlen(char *arr)
{
	int	i;

	i = 0;
	while (arr[i] != '\0')
		i++;
	return (i);
}
