/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 11:46:24 by bsuger            #+#    #+#             */
/*   Updated: 2025/12/15 15:47:38 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::~Intern() {}

Intern::Intern(const Intern &copy) { (void)copy; }

Intern &Intern::operator=(const Intern &old) {
  (void)old;
  return *this;
}

const char *Intern::NotAFormException::what() const throw() {
  return ("This kind of form does not exist");
}

// function to get an array

AForm *Intern::presidentialPardon(const std::string &target) {
  return new PresidentialPardonForm(target);
}

AForm *Intern::robotomyRequest(const std::string &target) {
  return new RobotomyRequestForm(target);
}

AForm *Intern::shrubberyCreation(const std::string &target) {
  return new ShrubberyCreationForm(target);
}

AForm *Intern::makeForm(std::string form, std::string target) {
  std::string types[3] = {"PresidentialPardonForm", "RobotomyRequestForm",
                          "ShrubberyCreationForm"};
  AForm *(Intern::*functions[3])(const std::string &) = {
      &Intern::presidentialPardon,
      &Intern::robotomyRequest,
      &Intern::shrubberyCreation,
  };
  for (int i = 0; i < 3; i++) {
    if (form == types[i]) {
      std::cout << "Intern creates " << types[i] << std::endl;
      return (this->*functions[i])(target);
    }
  }
  throw Intern::NotAFormException();
}
