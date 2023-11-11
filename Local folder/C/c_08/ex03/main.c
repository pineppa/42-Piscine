/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jsala@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 10:23:39 by jsala             #+#    #+#             */
/*   Updated: 2023/11/01 18:09:06 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_point.h"

void set_point(t_point *point)
{
	point->x = 492;
	point->y = 271;
}

int main(void)
{
	t_point point;
	set_point(&point);
	printf("(%d, %d)", point.x, point.y);
	return (0);
}
