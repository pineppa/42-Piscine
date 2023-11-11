/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsala <jsala@student.42barcelona>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 14:12:32 by jsala             #+#    #+#             */
/*   Updated: 2023/10/21 18:13:05 by jsala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);

int	stoi(char *str)
{
	int	n;

	n = 0; 						// Final value that is initialised with 0
	while (*str != '\0') 		// Continue the while cycle until it reaches the \"end of array\" character or null character 
	{
		n = n * 10;				// Move the value one space towards the left
		n = n + *str - '0'; 	// Sum the new number with the value in the string. *str gives the ASCII value of the current character and makes the difference with the ASCII character of 0, to obtain the int value of the current char
		str++; 					// Increment the position in the string by one and move to the next character
	}
	return (n);
}

int	main(int argc, char *argv[])
{
	int	x;
	int	y;

	x = stoi(argv[1]);  // Convert the first argument from string to integer
	y = stoi(argv[2]);  // Convert the second argument from string to integer
	rush(x, y);			// Call the rush function
	return (0);
}
