/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jsala@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 09:53:51 by jsala             #+#    #+#             */
/*   Updated: 2023/11/04 14:16:53 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_display_file(char *file)
{
	int		fd;
	int		size;
	char	c;

	c = 'a';
	size = 1;
	fd = open(file, 0);
	if (fd < 0)
		write(2, "Cannot read file.\n", 18);
	while (size)
	{
		size = read(fd, &c, 1);
		if (size != 0)
			ft_putchar(c);
	}
	close(fd);
}

int	main(int argc, char **argv)
{
	int	c;

	c = 1;
	if (argc < 2)
	{
		write(2, "File name missing.\n", 19);
		return (0);
	}
	if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (0);
	}
	ft_display_file(argv[1]);
	return (0);
}
