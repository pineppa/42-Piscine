/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jsala@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:47:09 by jsala             #+#    #+#             */
/*   Updated: 2023/11/07 16:41:42 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <libgen.h>
#include <errno.h>
#include <string.h>

void	ft_putstr(char *str, int output);
void	ft_handle_dir_err(char *arg);

void	ft_cat(char *file)
{
	int		fd;
	int		size;
	char	str[30000];

	size = 1;
	fd = open(file, O_RDONLY);
	if (fd < 0)
	{
		ft_handle_dir_err(file);
		return ;
	}
	while (size)
	{
		size = read(fd, &str, 30000);
		if (size != 0)
			ft_putstr(str, 1);
	}
	close(fd);
}

int	main(int argc, char **argv)
{
	int		c;
	char	buffer;

	c = 0;
	if (argc < 2)
	{
		while (read(0, &buffer, 1) != 0)
			write(1, &buffer, 1);
	}
	while (++c < argc)
		ft_cat(argv[c]);
	return (0);
}
