/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 11:22:42 by bsuger            #+#    #+#             */
/*   Updated: 2025/12/30 11:20:58 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <list>

int main(void) {
  try {
    std::cout << "CREATION SPAN WITH CAPACITY 4 ; try to add more\n";
    Span test(4);
    test.addNumber(42);
    test.addNumber(42);
    test.addNumber(42);
    test.addNumber(42);
    test.addNumber(42); // error because it's more than 4
  } catch (std::exception &e) {
    std::cout << e.what() << "\n";
  }
  try {
    std::cout << "\nUSING SPAN SECOND ADDNUMBERS\n";
    std::vector<int> toAdd;
    toAdd.push_back(42);
    toAdd.push_back(16);
    toAdd.push_back(7);
    toAdd.push_back(89798);

    Span test(4);
    test.addNumber(toAdd.begin(), toAdd.end());
    test.printContent();
    std::cout << "Longest Span: " << test.longestSpan() << "\n";
    std::cout << "Shortest Span: " << test.shortestSpan() << "\n";

  } catch (std::exception &e) {
    std::cout << e.what() << "\n";
  }
  try {
    std::cout
        << "\nUSING SPAN SECOND ADD NUMBER BUT WITH DIFFERENTS  CONTAINER\n";
    std::cout << "creation of an array with 4 elements inside\n";
    int array[4] = {1, 2, 3, 4};
    Span test(8);
    test.addNumber(&array[0], &array[3] + 1);
    test.printContent();
    std::cout << "creation of a list with 4 more elements inside\n";
    std::list<int> toAdd;
    toAdd.push_back(85);
    toAdd.push_back(1);
    toAdd.push_back(96);
    toAdd.push_back(87);
    test.addNumber(toAdd.begin(), toAdd.end());
    test.printContent();
    std::cout << "Longest Span: " << test.longestSpan() << "\n";
    std::cout << "Shortest Span: " << test.shortestSpan() << "\n";

  } catch (std::exception &e) {
    std::cout << e.what() << "\n";
  }
  try {
    std::cout << "\nTRY WITH 150K VALUES\n";
    std::vector<int> fifty(50000, 50);
    std::vector<int> hundred(50000, 100);
    std::vector<int> hundredfifty(50000, 150);
    Span test(150000);
    test.addNumber(fifty.begin(), fifty.end());
    test.addNumber(hundred.begin(), hundred.end());
    test.addNumber(hundredfifty.begin(), hundredfifty.end());
    std::cout << "Longest Span: " << test.longestSpan() << "\n";
    std::cout << "Shortest Span: " << test.shortestSpan() << "\n";

  } catch (std::exception &e) {
    std::cout << e.what() << "\n";
  }
}

/*
int main()
{
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(-3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
        return 0;
}
*/
