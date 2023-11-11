/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jsala@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 14:16:33 by jsala             #+#    #+#             */
/*   Updated: 2023/10/21 17:57:24 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	c_x;
	int	c_y;

	c_y = 0;
	while (c_y < y) // Cycle through the lines
	{
		c_x = 0;
		while (c_x < x) // Cycle through the same line
		{
			if ((c_y == 0 || c_y == y - 1) && (c_x == 0 || c_x == x - 1)) // Corners
				ft_putchar('o');
			else if (c_y == 0 || c_y == y - 1) // First and ending line
				ft_putchar('-');
			else if (c_x == 0 || c_x == x - 1) // First and ending columns
				ft_putchar('|');
			else if (c_x != 0 && c_x != x - 1 && c_y != 0 && c_y != y - 1) // All the rest aka center
				ft_putchar(' ');
			}
			c_x++; // Increment position horizontally by 1
		}
		ft_putchar('\n'); // Go to new line at the end of the right column
		c_y++; // Increment postion vertically by 1
	}
}
