/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jsala@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 16:44:26 by jsala             #+#    #+#             */
/*   Updated: 2023/10/22 16:56:34 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

void	swap_tab(int *a, int *b)
{
	int	n;

	n = *a;
	*a = *b;
	*b = n;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	t_i;
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		t_i = tab[i];
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < tab[i])
				swap_tab(&tab[i], &tab[j]);
			j++;
		}
		i++;
	}
}
/*
void	print_array(int *arr)
{
	while (*arr)
	{
		printf("%d", *arr);
		printf("%s", ", ");
		arr++;
	}
}

int main(void) 
{
	int tab[] = {29, 43, 54, 34, 24, 145, 8, 31};
	int size = 8;
	print_array(tab);
	ft_sort_int_tab(tab, size);
	print_array(tab);
	return 0;
}
*/
