/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jsala@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 10:14:31 by jsala             #+#    #+#             */
/*   Updated: 2023/10/30 18:56:05 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_write_arr(char *arr);
void	ft_sort_params(int argc, char *argv[]);
int		ft_strcmp(char *arr1, char *arr2);

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	if (argc < 2)
		return (0);
	if (argc > 2)
		ft_sort_params(argc, argv);
	while (i < argc)
	{
		ft_write_arr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
}

void	ft_sort_params(int argc, char *argv[])
{
	int		i;
	int		n;
	int		cmp;
	char	*swap;

	i = 1;
	n = i + 1;
	while (i < argc - 1)
	{
		n = i + 1;
		while (n < argc)
		{
			cmp = ft_strcmp(argv[i], argv[n]);
			if (cmp > 0)
			{
				swap = argv[i];
				argv[i] = argv[n];
				argv[n] = swap;
			}
			n++;
		}
		i++;
	}
}

int	ft_strcmp(char *arr1, char *arr2)
{
	int	i;

	i = 0;
	while (arr1[i] != '\0' && arr2[i] != '\0' && arr1[i] == arr2[i])
		i++;
	return (arr1[i] - arr2[i]);
}

void	ft_write_arr(char *arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		write(1, &arr[i], 1);
		i++;
	}
}
