/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jsala@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 09:11:09 by jsala             #+#    #+#             */
/*   Updated: 2023/11/06 16:49:51 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	char	*ptr;

	i = -1;
	while (tab[++i])
	{
		if (tab[i + 1] && (*cmp)(tab[i], tab[i + 1]) > 0)
		{
			ptr = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = ptr;
			i = -1;
		}
	}
}
