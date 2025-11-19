/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 14:30:25 by bsuger            #+#    #+#             */
/*   Updated: 2025/11/19 13:10:38 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.hpp"

int	main(int argc, char *argv[])
{
	std::string	text;
	std::string	needle;
	std::string	replace;
	size_t		find;

	if (argc != 4)
		std::cout << "Wrong number of args\n";
	else
	{
		needle = argv[2];
		replace = argv[3];
		std::ifstream ReadFile(argv[1]);
		if (ReadFile.is_open() == 0)
		{
			std::cerr << "cannot open file" << std::endl;
			return (1);
		}
		std::string NewName = argv[1];
		NewName.append(".replace");
		std::ofstream WritingFile(NewName.c_str());
		if (WritingFile.is_open() == 0)
		{
			std::cerr << "cannot open the .replace file" << std::endl;
			ReadFile.close();
			return (1);
		}
		while (getline(ReadFile, text))
		{
			find = text.find(needle);
			while (find != std::string::npos)
			{
				text.erase(find, needle.size());
				text.insert(find, replace);
				find = text.find(needle);
			}
			if (ReadFile.eof())
				WritingFile << text;
			else
				WritingFile << text << "\n";
		}
		ReadFile.close();
		WritingFile.close();
	}
}
