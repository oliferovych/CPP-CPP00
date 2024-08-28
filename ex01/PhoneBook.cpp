/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 02:43:54 by dolifero          #+#    #+#             */
/*   Updated: 2024/08/28 03:33:54 by dolifero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : contactCount(0), oldestContactIndex(0) {}

void	PhoneBook::addContact()
{
	Contact	newContact;
	std::string	input;

	std::cout << "Enter first name: ";
	std::getline(std::cin, input);
	newContact.setFirstName(input);

	std::cout << "Enter last name: ";
	std::getline(std::cin, input);
	newContact.setLastName(input);

	std::cout << "Enter nickname: ";
	std::getline(std::cin, input);
	newContact.setNickname(input);

	std::cout << "Enter phone number: ";
	std::getline(std::cin, input);
	newContact.setPhoneNumber(input);

	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, input);
	newContact.setDarkestSecret(input);

	if (contactCount < 8)
	{
		contacts[contactCount] = newContact;
		contactCount++;
	}
	else
	{
		contacts[oldestContactIndex] = newContact;
		oldestContactIndex = (oldestContactIndex + 1) % 8;
	}
}

void PhoneBook::searchContacts() const
{
	std::cout << std::setw(10) << "Index " << "|";
	std::cout << std::setw(10) << "First Name " << "|";
	std::cout << std::setw(10) << "Last Name " << "|";
	std::cout << std::setw(10) << "Nickname " << std::endl;
	std::cout << "-------------------------------------------" << std::endl;

	for (int i = 0; i < contactCount; ++i)
	{
		std::cout << std::setw(10) << i + 1 << "|";
		std::cout << std::setw(10) << (contacts[i].getFirstName().length() > 10 ? contacts[i].getFirstName().substr(0, 9) + "." : contacts[i].getFirstName()) << "|";
		std::cout << std::setw(10) << (contacts[i].getLastName().length() > 10 ? contacts[i].getLastName().substr(0, 9) + "." : contacts[i].getLastName()) << "|";
		std::cout << std::setw(10) << (contacts[i].getNickname().length() > 10 ? contacts[i].getNickname().substr(0, 9) + "." : contacts[i].getNickname()) << std::endl;
	}

	int	index;
	std::cout << "Enter index to view contact details: ";
	std::cin >> index;
	std::cin.ignore(100, '\n');

	if (index < 1 || index > contactCount)
		std::cout << "Invalid index!" << std::endl;
	else
		displayContact(index - 1);
}

void PhoneBook::displayContact(int index) const
{
	std::cout << "First Name: " << contacts[index].getFirstName() << std::endl;
	std::cout << "Last Name: " << contacts[index].getLastName() << std::endl;
	std::cout << "Nickname: " << contacts[index].getNickname() << std::endl;
	std::cout << "Phone Number: " << contacts[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << contacts[index].getDarkestSecret() << std::endl;
}
