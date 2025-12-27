/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 18:05:39 by bsuger            #+#    #+#             */
/*   Updated: 2025/12/27 08:51:59 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "Base.hpp"
#include "C.hpp"

int main(void) {
  std::srand(std::time(NULL));

  std::cout << "test with null ptr\n";
  Base *ptr_null = 0x00;
  identify(ptr_null);

  Base *ptr1 = generate();
  identify(ptr1);
  identify(*ptr1);
  Base *ptr2 = generate();
  identify(ptr2);
  identify(*ptr2);
  Base *ptr3 = generate();
  identify(ptr3);
  identify(*ptr3);

  Base &ref = *ptr1;
  identify(ref);
}
