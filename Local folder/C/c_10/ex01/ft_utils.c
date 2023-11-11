/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jsala@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:27:56 by jsala             #+#    #+#             */
/*   Updated: 2023/11/07 16:32:49 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <libgen.h>
#include <errno.h>
#include <string.h>

void	ft_putstr(char *str, int output)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(output, &str[i], 1);
		i++;
	}
}

void	ft_handle_dir_err(char *file)
{
	ft_putstr("ft_cat: ", 1);
	ft_putstr(basename(file), 1);
	ft_putstr(": ", 1);
	ft_putstr(strerror(errno), 1);
	ft_putstr("\n", 1);
}
