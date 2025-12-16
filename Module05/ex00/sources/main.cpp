/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 14:43:59 by bsuger            #+#    #+#             */
/*   Updated: 2025/12/15 15:29:10 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
  try {
          Bureaucrat employe("tom", 150);
          std::cout << employe;
          employe.demote();
  }
  catch (std::exception & e) {
          std::cout << e.what() << std::endl;
  }

  //to illustrate other way of doing things
  try {
          Bureaucrat employe("benjamin", 1);
          std::cout << employe;
          employe.promote();
  }
  catch (Bureaucrat::GradeTooLowException& e) {
          std::cout << e.what() << std::endl;
  }
  catch (Bureaucrat::GradeTooHighException& e) {
          std::cout << e.what() << std::endl;
  }
  //normal case
  try {
          Bureaucrat employe("eliot", 1);
          std::cout << employe;
          employe.demote();
          std::cout << employe;
          employe.demote();
          std::cout << employe;
  }
  catch (std::exception& e) {
          std::cout << e.what();
  }
}
