/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 22:27:33 by dolifero          #+#    #+#             */
/*   Updated: 2024/08/26 23:10:16 by dolifero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	temp;

	if (argc == 1)
		return (write(1, "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n", 40), 0);
	i = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
			{
				temp = argv[i][j] - 32;
				write(1, &temp, 1);
			}
			else
				write(1, &argv[i][j], 1);
			j++;
		}
		i++;
	}
	write (1, "\n", 1);
	return (0);
}
