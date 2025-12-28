/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 11:22:42 by bsuger            #+#    #+#             */
/*   Updated: 2025/12/28 13:25:53 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void) {
	try {
		std::cout << "CREATION SPAN WITH CAPACITY 4 ; try to add more\n"; 
		Span test(4);
		test.addNumber(42);
		test.addNumber(42);
		test.addNumber(42);
		test.addNumber(42);
		test.addNumber(42);//error because it's more than 4
	} catch (std::exception &e) {
		std::cout << e.what() << "\n"; 
	}
	try {
		std::cout << "\nUSING SPAN SECOND ADDNUMBERS\n";
		std::vector<int> toAdd;
		toAdd.push_back(42);
		toAdd.push_back(16);
		toAdd.push_back(-7);
		toAdd.push_back(0);
		
		Span test(4);
		test.addNumber(toAdd.begin(), toAdd.end());
		test.printContent();

		//ici faudra mettre en place longest span et shortestspan pour montrer que ca a marche

	} catch (std::exception &e) {
		std::cout << e.what() << "\n";
	}




	//un test ca serait de faire un Span de capacity 10 mais de mettre 3 trucs dedans et de voir si ca casse pas le shorteset span ou longestspan etc....
}
