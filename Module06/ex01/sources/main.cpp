/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 14:15:32 by bsuger            #+#    #+#             */
/*   Updated: 2025/12/21 14:15:44 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include "Serializer.hpp"
#include <iostream>

int main(void) {

  Data object("benjamin", "suger");
  std::cout << "my object address : " << &object << "\n";

  uintptr_t basic = Serializer::serialize(&object);
  std::cout << "after serialize : " << basic << "\n";

  Data *ptr = Serializer::deserialize(basic);
  std::cout << "after deserialize : " << ptr << "\n";

  if (ptr == &object) {
    std::cout << "same thing\n";
  }
}
