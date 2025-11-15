/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 09:45:25 by bsuger            #+#    #+#             */
/*   Updated: 2025/11/12 09:45:28 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <limits>
#include <cstdlib>
#include <cstdio>
#include <cstring>

int CheckOverflow(int num, const char *arr, int len)
{
    char buf[len + 1];

    std::sprintf(buf, "%d", num);
    if(std::strcmp(buf, arr) == 0)
            return (0);
    return (-1);
}

int	PhoneBook::Search(void)
{
	int		number;
	int		j = 1;
	std::string	input;

	std::cout << std::setw(10) << std::right << "Index" << "|";
	std::cout << std::setw(10) << std::right << "First Name" << "|";
	std::cout << std::setw(10) << std::right << "Last Name" << "|";
	std::cout << std::setw(10) << std::right << "Nickname" << "|";
	std::cout << std::endl;
	for (std::vector<Contact>::iterator it = _Contacts.begin(); it != _Contacts.end(); it++)
	{
		it -> PrintTab(j);
		j++;
	}
	std::cout << "Enter a number: ";
	getline(std::cin, input);
	if (std::cin.eof() == 1)
		return (1);
	number = std::atoi(input.c_str());
	if (CheckOverflow(number, input.c_str(), input.size()) == -1)
	{
		std::cout << "Not a valid value" << std::endl;
		return (0);
	}
	if (number < 1 || number > _i) 
	{
		std::cout << "Wrong Index" << std::endl;
		return (0);
	}
	_Contacts[number - 1].PrintAll();
	return (0);
}

void	PhoneBook::Presentation(void)
{
	std::cout << "Type one of the following command; \n";
	std::cout << "ADD to add a contact\n";
	std::cout << "SEARCH to search a contact\n";
	std::cout << "EXIT to exit the PhoneBook\n";
}

/*
 * my REPL for the PhoneBook
 * CTRL+D is consider like a shell => to stop it
 * we have only 3 ootions ADD, SEARCH, EXIT
 */
int	PhoneBook::Loop(void)
{
	std::string	input;
	std::vector<Contact>::iterator it = _Contacts.begin();

	Presentation();
	while (std::cout << "CMD: " && getline(std::cin, input))
	{
		if (input == "ADD")
		{
			Contact temp;
			temp.SetUp();
			_Contacts.push_back(temp);
			it++;
			_i++;
		}
		else if (input == "SEARCH")
		{
			if (Search() == 1)
				break ;
		}
		else if (input == "EXIT")
		{
			std::cout << "Exit the phonebook, have a good day 🐱" << std::endl;
			break ;
		}
		else
			std::cout << "unknown command" << std::endl;
	}
	if (std::cin.eof() == 1)
		std::cout << "\nyou press CTRL+D\nExit the phonebook" << std::endl;
	else if (std::cin.fail()) 
    		std::cerr << "Error" << std::endl; 
	else if (std::cin.bad())
    		std::cerr << "Error" << std::endl;
	return (0);
}
