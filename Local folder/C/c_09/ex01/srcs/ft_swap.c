/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jsala@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 12:06:30 by jsala             #+#    #+#             */
/*   Updated: 2023/10/20 13:36:20 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	n;

	n = *a;
	*a = *b;
	*b = n;
}
/*
int	main(void)
{
	int	num1;
	int	num2;

	num1 = 50;
	num2 = 53;
	write(1, &num1, 1);
	write(1, &num2, 1);
	ft_swap(&num1, &num2);
	write(1, &num1, 1);
	write(1, &num2, 1);
}
*/
