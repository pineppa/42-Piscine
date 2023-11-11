/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jsala@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:22:50 by jsala             #+#    #+#             */
/*   Updated: 2023/10/26 08:54:48 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

void	ft_print_hex(char nbr);
char	*ft_strcpy(char *dest, char *src);

void	ft_print_hex(char nbr)
{
	char	hex[18];

	ft_strcpy(hex, "0123456789abcdef");
	write(1, "\\", 2);
	write(1, &hex[nbr / 16], 1);
	write(1, &hex[nbr % 16], 1);
}

char	*ft_strcpy(char *dest, char *src)
{
	char	*ini_pos;

	ini_pos = dest;
	while (*src != '\0')
		*dest++ = *src++;
	*dest = 0;
	return (ini_pos);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str < 32 || *str > 126)
			ft_print_hex(*str);
		else
			write(1, str, 1);
		str++;
	}
}
/*
int	main(void)
{
	char	str[30] = "nnodsfol \n 34\t End of Array\0";
	char	ehmbeh[54] = "Some\nrandom\ttext\x0Fwith\nnon-printable\rcharacters";
	
	printf("%s\n", str);
	ft_putstr_non_printable(str);
	printf("\n");
	printf("%s\n", ehmbeh);
	ft_putstr_non_printable(ehmbeh);
	return (0);
}
*/
