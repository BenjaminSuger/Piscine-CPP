/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 09:29:24 by bsuger            #+#    #+#             */
/*   Updated: 2025/11/13 11:29:01 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	text;
	std::string	*stringPTR;
	std::string&	stringREF = text;

	std::cout << "MANDATORY PART" << std::endl;
	std::cout << "==============" << std::endl;
	text = "HI THIS IS BRAIN";
	stringPTR = &text;

	std::cout << "the address of text :" << &text << std::endl;
	std::cout << "the address of stringPTR :" << stringPTR << std::endl;
	std::cout << "the address of stringREF :" << &stringREF << std::endl;

	std::cout << "the text : " << text << std::endl;
	std::cout << "the content of stringPTR :" << *stringPTR << std::endl;
	std::cout << "the content of stringREF :" << stringREF << std::endl;
}
