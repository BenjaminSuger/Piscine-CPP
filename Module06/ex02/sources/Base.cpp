/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 17:50:37 by bsuger            #+#    #+#             */
/*   Updated: 2025/12/21 17:50:38 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base() {}

Base *generate(void) {
  int value = std::rand() % 3;
  if (value == 0) {
    std::cout << "class A generated\n";
    return new A();
  } else if (value == 1) {
    std::cout << "class B generated\n";
    return new B();
  } else {
    std::cout << "class C generated\n";
    return new C();
  }
}

void identify(Base *p) {
  if (p == 0) {
    std::cout << "this is a NULL ptr\n";
  } else {
    if (dynamic_cast<A *>(p))
      std::cout << "this is a A object\n";
    else if (dynamic_cast<B *>(p))
      std::cout << "this is a B object\n";
    else if (dynamic_cast<C *>(p))
      std::cout << "this is a C object\n";
    else
      std::cout << "this is not a A, B or C object\n";
  }
}

void identify(Base &p) {
  try {
    dynamic_cast<A &>(p);
    std::cout << "this is a A object\n";
    return;
  } catch (std::exception &e) {
  }
  try {
    dynamic_cast<B &>(p);
    std::cout << "this is a B object\n";
    return;
  } catch (std::exception &e) {
  }
  try {
    dynamic_cast<C &>(p);
    std::cout << "this is a C object\n";
    return;
  } catch (std::exception &e) {
  }
  std::cout << "this is not a A, B or C object\n";
}
