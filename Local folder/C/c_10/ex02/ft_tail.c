/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jsala@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:05:24 by jsala             #+#    #+#             */
/*   Updated: 2023/11/06 18:01:38 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

void	ft_putstr(char *str, int output);
int		ft_atoi(char *str);

int	ft_count_chars(char *file)
{
	int		size;
	int		bytes;
	int		fd;
	char	str[30000];

	size = 0;
	bytes = 0;
	fd = open(file, O_RDONLY);
	if (fd < 0)
		ft_putstr("Cannot read file.\n", 2);
	while (1)
	{
		size = read(fd, &str, 30000);
		if (size == 0)
			return (bytes);
		bytes += size;
	}
	close(fd);
	return (bytes);
}

void	ft_write_last_k(char *file, int f_size, int bytes)
{
	char	c;
	int		fd;
	int		i;
	int		size;

	i = 0;
	fd = open(file, O_RDONLY);
	if (fd < 0)
		return ;
	while (i < f_size - bytes)
	{
		size = read(fd, &c, 1);
		i += size;
	}
	while (size != 0)
	{
		size = read(fd, &c, 1);
		write(1, &c, 1);
	}
	close(fd);
}

int	main(int argc, char **argv)
{
	int	c;
	int	f_size;
	int bytes;

	c = 0;
	if (argc < 2)
	{
		ft_putstr("File name missing.\n", 2);
		return (1);
	}
	if (argv[1][0] == '-' && argv[1][1] =='c')
	{
		bytes = ft_atoi(argv[2]);
		c = 2;
	}
	while (++c < argc)
	{
		f_size = ft_count_chars(argv[c]);
		if (f_size < bytes)	
			ft_putstr("Illigal size option\n", 2);	
		else
		{
			ft_putstr("==> ");
			ft_putstr(basename(argv[c]);
			ft_putstr(" <==");
			ft_write_last_k(argv[c], f_size, bytes);		
		}
	}
	return (0);
}
