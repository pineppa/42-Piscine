/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jsala@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 14:16:33 by jsala             #+#    #+#             */
/*   Updated: 2023/10/21 19:19:28 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	c_x;
	int	c_y;

	c_y = 1;
	while (c_y <= y)
	{
		c_x = 1;
		while (c_x <= x)
		{
			if ((c_y == 1 && c_x == 1) || (c_y == y && c_x == 1))
				ft_putchar('A');
			else if ((c_x == x && c_y == y) || (c_y == 1 && c_x == x))
				ft_putchar('C');
			else if (c_y == 1 || c_y == y || c_x == 1 || c_x == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
			c_x++;
		}
		ft_putchar('\n');
		c_y++;
	}
}
