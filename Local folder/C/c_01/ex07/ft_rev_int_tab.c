/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jsala@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 14:36:06 by jsala             #+#    #+#             */
/*   Updated: 2023/10/22 14:41:08 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

void	ft_rev_inv_tab(int *tab, int size)
{
	int	n;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		n = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = n;
		i++;
	}
}
/*
int main(void) 
{
    int tab[] = {52, 48, 47, 56, 96, 100, 42};
    int size = 7;
	write(1, &tab[1], 1);
    ft_rev_inv_tab (tab, size);
	write(1, &tab[1], 1);
    return (0);
}
*/
