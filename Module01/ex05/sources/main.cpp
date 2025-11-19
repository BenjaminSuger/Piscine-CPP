/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 14:17:12 by bsuger            #+#    #+#             */
/*   Updated: 2025/11/19 08:29:15 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	Karen;

	Karen.Complain("0");
	std::cout << "\n";
	Karen.Complain("1");
	std::cout << "\n";
	Karen.Complain("2");
	std::cout << "\n";
	Karen.Complain("3");
	///////wrong values/////////
	
	Karen.Complain("44555");
	std::cout << "\n";
	Karen.Complain("444444444444444444444444444444444444444444444444444444444444444444");
	std::cout << "\n";
	Karen.Complain("-444");
	std::cout << "\n";
}
