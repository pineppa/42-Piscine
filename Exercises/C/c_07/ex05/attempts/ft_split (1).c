/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jsala@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 09:35:27 by jsala             #+#    #+#             */
/*   Updated: 2023/11/03 12:39:17 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src, int len_str);
int		ft_chk_charset(char c, char *charset);
int		ft_count_words(char *str, char *charset);
char	**ft_split(char *str, char *charset);

char	**ft_split(char *str, char *charset)
{
	char	**split_str;
	int		words;
	int		lp_c;
	int		rp_c;
	int		word_count;

	if (!*str)
		return (0);
	lp_c = 0;
	rp_c = 0;
	word_count = 0;
	words = ft_count_words(str, charset);
	split_str = malloc((words + 1) * sizeof(char **));
	while (str[rp_c] && str[lp_c])
	{
		while (!ft_chk_charset(str[rp_c], charset))
			rp_c++;
		if (rp_c - lp_c > 0)
		{
			split_str[word_count] = ft_strdup(&str[lp_c], rp_c - lp_c);
			if (split_str[word_count] == NULL)
				return (NULL);
			word_count++;
		}
		lp_c = rp_c;
		while (ft_chk_charset(str[rp_c], charset))
		{
			rp_c++;
			lp_c++;
		}
	}
	split_str[word_count] = 0;
	return (split_str);
}

int	ft_chk_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_count_words(char *str, char *charset)
{
	int	count;
	int	words;

	words = !ft_chk_charset(str[0], charset);
	count = 0;
	while (str[count])
	{
		if (ft_chk_charset(str[count], charset) 
			&& !ft_chk_charset(str[count + 1], charset))
			words += 1;
		count++;
	}
	return (words);
}

char	*ft_strdup(char *src, int len_str)
{
	char	*copy;
	int		i;
	
	copy = malloc(len_str * sizeof(char) + 1);	
	if (copy == NULL)
		return (NULL);
	i = 0;
	while (i < len_str)
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
