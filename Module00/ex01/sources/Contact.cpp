/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 09:45:17 by bsuger            #+#    #+#             */
/*   Updated: 2025/11/12 09:45:19 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

/*
 * function to read the input when we are in the ADD state
 * here I made experiments; 
 * -the use of goto in C++ => first time I use it (ik it's not good but hey !)
 * -pass like in C the address of private member to see how it is working
*/
int	ReadingInput(const char *text, std::string *data)
{
	std::string	input;

	back:
	std::cout << text;
	getline(std::cin, input);
	if (std::cin.eof() == 1)
		return (1);
	if (input.empty() == 1)
	{
		std::cout << "line cannot be empty\nPlease enter something" << std::endl;
		goto back;
	}
	*data = input;
	return (0);
}

int	Contact::SetUp(void)
{
	std::string	input;

	if (ReadingInput("First Name: ", &_FirstName) == 1)
		return (1);
	if (ReadingInput("Last Name: ", &_LastName) == 1)
		return (1);
	if (ReadingInput("Nickname: ", &_Nickname) == 1)
		return (1);
	if (ReadingInput("Phone Number: ", &_PhoneNumber) == 1)
		return (1);
	if (ReadingInput("Darkest Secret: ", &_DarkestSecret) == 1)
		return (1);
	_on = true;
	return (0);
}

void	PrintAttributesTabFormat(std::string data)
{
	if (data.size() > 10)
	{
		for (int i = 0; i < 9; i++)
			std::cout << data[i];
		std::cout << ".";
	}
	else
	{
		std::cout << std::setw(10) << std::right << data;
	}
	std::cout << "|";
}

int	Contact::PrintTab(int index)
{
	std::cout << std::setw(10) << index << "|";
	PrintAttributesTabFormat(_FirstName);
	PrintAttributesTabFormat(_LastName);
	PrintAttributesTabFormat(_Nickname);
	std::cout << std::endl;
	return (0);
}

int	Contact::PrintAll(void)
{
	if (_on == false)
	{
		std::cout << "Friendless ?" << std::endl;
		return (1);
	}
	std::cout << "First Name: " << _FirstName << std::endl;
	std::cout << "Last Name: " << _LastName << std::endl;
	std::cout << "Nickname: " << _Nickname << std::endl;
	std::cout << "Phone Number: "<< _PhoneNumber << std::endl;
	std::cout << "Darkest Secret: " << _DarkestSecret << std::endl;
	return (0);
}
