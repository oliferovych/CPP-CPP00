/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 03:06:18 by dolifero          #+#    #+#             */
/*   Updated: 2024/08/28 03:16:35 by dolifero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook PhoneBook;
	std::string	command;

	std::cout << "Behold the Grand PhoneBook software!" << std::endl;
	while (1)
	{
		std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
		std::getline(std::cin, command);

		if (command == "ADD")
		{
			PhoneBook.addContact();
		}
		else if (command == "SEARCH")
		{
			PhoneBook.searchContacts();
		}
		else if (command == "EXIT")
		{
			std::cout << "Exiting the program. Goodbye!" << std::endl;
			break;
		}
		else
		{
			std::cout << "Unknown command." << std::endl;
			std::cout << "Valid commands are: ADD, SEARCH, EXIT." << std::endl;
		}
	}
	return (0);
}
