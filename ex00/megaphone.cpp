/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 22:27:33 by dolifero          #+#    #+#             */
/*   Updated: 2024/08/27 23:40:07 by dolifero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	temp;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			temp = argv[i][j];
			if (temp >= 'a' && temp <= 'z')
				temp = std::toupper(temp);
			std::cout << temp;
			j++;
		}
		i++;
	}
	std::cout << std::endl;
	return (0);
}
