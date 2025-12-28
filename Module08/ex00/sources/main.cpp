/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 09:41:49 by bsuger            #+#    #+#             */
/*   Updated: 2025/12/28 10:05:03 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <deque>
#include <iostream>
#include <list>
#include <queue>
#include <string>
#include <vector>

int main(void) {
  try {
    std::cout << "Test with a vector of int\n";
    std::vector<int> test;
    test.push_back(42);
    test.push_back(16);
    test.push_back(36);
    test.push_back(14);
    std::cout << "Vector = { ";
    for (std::vector<int>::iterator it = test.begin(); it != test.end(); it++)
      std::cout << *it << " ";
    std::cout << "}\n";
    int toFind = 36;
    std::cout << "value to find : " << toFind << "\n";
    std::vector<int>::iterator find = easyfind(test, toFind);
    std::cout << "value found : " << *find << "\n";

    toFind = 54; // value not inside
    std::cout << "value to find : " << toFind << "\n";
    find = easyfind(test, toFind);
    std::cout << "value found : " << *find << "\n";
  } catch (std::exception &e) {
    std::cout << e.what() << "\n";
  }
  std::cout << "\n\n";
  try {
    std::cout << "Test with a list of int\n";
    std::list<int> test;
    test.push_back(42);
    test.push_back(-23);
    test.push_back(72);
    test.push_back(0);
    std::cout << "Vector = { ";
    for (std::list<int>::iterator it = test.begin(); it != test.end(); it++)
      std::cout << *it << " ";
    std::cout << "}\n";
    int toFind = 36;
    std::cout << "value to find : " << toFind << "\n";
    std::list<int>::iterator find = easyfind(test, toFind);
    std::cout << "value found : " << *find << "\n";

    toFind = 54; // value not inside
    std::cout << "value to find : " << toFind << "\n";
    find = easyfind(test, toFind);
    std::cout << "value found : " << *find << "\n";
  } catch (std::exception &e) {
    std::cout << e.what() << "\n";
  }
  std::cout << "\n\n";
  try {
    std::cout << "Test with a deque of int\n";
    std::deque<int> test;
    test.push_back(42);
    test.push_back(-23);
    test.push_back(72);
    test.push_back(0);
    std::cout << "Vector = { ";
    for (std::deque<int>::iterator it = test.begin(); it != test.end(); it++)
      std::cout << *it << " ";
    std::cout << "}\n";
    int toFind = 36;
    std::cout << "value to find : " << toFind << "\n";
    std::deque<int>::iterator find = easyfind(test, toFind);
    std::cout << "value found : " << *find << "\n";

    toFind = 54; // value not inside
    std::cout << "value to find : " << toFind << "\n";
    find = easyfind(test, toFind);
    std::cout << "value found : " << *find << "\n";
  } catch (std::exception &e) {
    std::cout << e.what() << "\n";
  }
}
