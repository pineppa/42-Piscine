/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jsala@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 09:21:15 by jsala             #+#    #+#             */
/*   Updated: 2023/10/25 15:48:29 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_print_memory(void *addr, unsigned int size);
void	ft_print_hex(unsigned char value, int index);
void	ft_print_letters(const char *addr, int i);
void	ft_print_address(void *addr, int i);
//void	ft_putchar(char c);

void	*ft_print_memory(void *addr, unsigned int size)
{
	int				i;
	unsigned int *	byte;
	
	i = 0;
	*byte = (unsigned int) &addr;
	if (!(addr) || size <= 0)
		return (&addr[0]);
	while (i < size)
	{
		if ((i + 1) % 16 == 0 || (i + 1) == size)
			ft_print_address(addr, i);
		ft_print_hex(*(byte + i), 0);
		if (i % 2)
			write(1, " ", 2);
		if ((i + 1) % 16 == 0 || (i + 1) == size)
			ft_print_letters(addr, i);
		i++;
	}
	return (&addr[0]);
}

void	ft_print_address(void *addr, int i)
{
	int				j;
	unsigned int	mem;
	char			memory[16];

	j = 0;
	mem = (unsigned int)&addr[i];
	while (mem > 0)
	{
		memory[j] = "012345689abcdef"[mem % 16];
		mem /= 16;
		j++;
	}
	while (j < 16)
	{
		memory[j] = '0';
		j++;
	}
	j--;
	while (j >= 0)
	{
		write(1, &memory[j], 1);
		j--;
	}
	write(1, ": ", 2);
}

void	ft_print_hex(unsigned char value, int index)
{
	char	a;
	char	b;

	if (index < 2)
	{
		ft_print_hex(value / 16, index + 1);
		if (value % 16 >= 10)
		{
			a = ('0' + value % 16 % 10);
			write(1, &a, 1);
		}
		else
		{
			b = ('0' + value % 16);
			write(1, &b, 1);
		}
	}
}

void	ft_print_letters(const char *addr, int i)
{
	int	j;
	int	len;

	j = 0;
	len = (i + 1) % 16;
	if (len != 0)
		while (j < 16 - len)
		{
			write (1, "  ", 3);
			if (j % 2)
				write(1, " ", 2);
			if ((16 - len) % 2)
				write(1, " ", 2);
			j++;
		}
	else
		len = 16;
	j = 0;
	while (j < len)
	{
		if (*(addr + i / 16 * 16 + j) < 32)
			write(1, ".", 2);
		else
			write(1, (addr + i / 16 * 16 + j), 1);
		j++;
	}
	write(1, "\n", 2);
}

int	main(void)
{
	char	addr[50] = "Una mattina,\tmi son svegliato... Oh bella ciao!";
	ft_print_memory(addr, 50);
	return (0);
}

