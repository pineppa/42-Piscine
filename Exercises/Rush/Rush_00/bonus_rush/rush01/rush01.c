/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jsala@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 14:18:36 by jsala             #+#    #+#             */
/*   Updated: 2023/10/21 19:53:01 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	c_x;
	int	c_y;

	c_y = 0;
	while (c_y < y)
	{
		c_x = 0;
		while (c_x < x)
		{
			if ((c_y == 0 && c_x == 0) || (c_y == y - 1 && c_x == x - 1))
				ft_putchar('/');
			else if ((c_x == 0 && c_y == y - 1) || (c_y == 0 && c_x == x - 1))
				ft_putchar('\\');
			else if (c_y == 0 || c_y == y - 1 || c_x == 0 || c_x == x - 1)
				ft_putchar('*');
			else
				ft_putchar(' ');
			c_x++;
		}
		ft_putchar('\n');
		c_y++;
	}
}
