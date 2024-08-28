/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 02:38:56 by dolifero          #+#    #+#             */
/*   Updated: 2024/08/28 02:42:52 by dolifero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "contact.hpp"
#include <iostream>
#include <iomanip>

class PhoneBook
{
	private:
		Contact	contacts[8];
		int		contactCount;
		int		oldestContactIndex;

	public:
		PhoneBook();

		void	addContact();
		void	searchContacts() const;
		void	displayContact(int index) const;
};

#endif
