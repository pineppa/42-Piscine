/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jsala@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 09:35:27 by jsala             #+#    #+#             */
/*   Updated: 2023/11/03 13:13:21 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_strdup(char *src, int len_str, char *charset);
int		ft_chk_charset(char c, char *charset);
int		ft_count_words(char *str, char *charset);
void	**ft_cycle(char *str, char **split_str, char *charset);
char	**ft_split(char *str, char *charset);

char	**ft_split(char *str, char *charset)
{
	char	**split_str;
	int		words;

	if (!*str)
		return (0);
	words = ft_count_words(str, charset);
	split_str = malloc((words + 1) * sizeof(char *));
	split_str[words] = 0;
	ft_cycle(str, split_str, charset);
	return (split_str);
}

void	**ft_cycle(char *str, char **split_str, char *charset)
{
/*	int	i;
	int	j;
	int word_count;
	
	i = 0;
	word_count = 0;
	while (str[i])
	{
		while (ft_chk_charset(str[i], charset) == 1)
			i++;
		j = 0;
		while (ft_chk_charset(str[i + j], charset) == 0)
			j++;
		if (j > 0)
		{
			split_str[word_count] = ft_strdup(str + i, j, charset);
			if (split_str[word_count] == NULL)
				return (NULL);
			word_count++;
		}
		i += j;
	}
	return (split_str);*/
	int		i;
	int		j;
	int		word;

	word = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_chk_charset(str[i], charset) == 1)
			i++;
		else
		{
			j = 0;
			while (ft_chk_charset(str[i + j], charset) == 0)
				j++;
			split_str[word] = (char*)malloc(sizeof(char) * (j + 1));
			ft_strdup(split_str[word], str + i, charset);
			i += j;
			word++;
		}
	}
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
	if (c == '\0')
		return (1);
	return (0);
}

int	ft_count_words(char *str, char *charset)
{
	int	count;
	int	words;

	words = 0;
	count = 0;
	while (str[count] != '\0')
	{
		if (ft_chk_charset(str[count], charset) == 1
			&& ft_chk_charset(str[count + 1], charset) == 0)
			words += 1;
		count++;
	}
	return (words);
}

void	*ft_strdup(char *src, char *from, char *charset)
{
	char	*copy;
	int		i;

/*	copy = (char *)malloc((len_str + 1) * sizeof(char));
	if (copy == NULL)
		return (NULL);*/
	i = 0;
	while (ft_chk_charset(src[i], charset)) //i < len_str)
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
}
