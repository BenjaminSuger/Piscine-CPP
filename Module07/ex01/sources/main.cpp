/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 19:30:11 by bsuger            #+#    #+#             */
/*   Updated: 2025/12/22 19:30:12 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

// function to illustrate with const and no const
void func1(const int &value) { std::cout << value << "\n"; }

void func2(int &value) { value++; };

int main(void) {

  int array[5] = {1, 1, 1, 1, 1};
  ::iter(array, 5, func1);
  ::iter(array, 5, func2);
  ::iter(array, 5, func1);

  void (*null_func)(int &) = 0;
  ::iter(array, 5, null_func);
}
