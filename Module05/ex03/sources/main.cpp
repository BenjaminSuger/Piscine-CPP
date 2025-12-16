/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 14:43:59 by bsuger            #+#    #+#             */
/*   Updated: 2025/12/15 16:02:10 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
  try {
    // creation of different Vogon
    Bureaucrat Boss("Vogon Boss", 1);
    Bureaucrat nullos("tom", 150);
    // intern with no error
    Intern random;
    AForm *shrubbery = random.makeForm("ShrubberyCreationForm", "Zaphod");
    AForm *robotomy = random.makeForm("RobotomyRequestForm", "Zaphod");
    AForm *presidential = random.makeForm("PresidentialPardonForm", "Zaphod");
    // try to do things with the form
    nullos.signForm(*shrubbery);
    nullos.signForm(*robotomy);
    nullos.signForm(*presidential);
    Boss.signForm(*shrubbery);
    Boss.signForm(*robotomy);
    Boss.signForm(*presidential);

    Boss.executeForm(*shrubbery);
    Boss.executeForm(*robotomy);
    Boss.executeForm(*presidential);

    delete shrubbery;
    delete robotomy;
    delete presidential;

  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  try {
    // creation of different Vogon
    Bureaucrat Boss("Vogon Boss", 1);
    Bureaucrat nullos("tom", 150);
    // intern with error
    Intern random;
    AForm *shrubbery = random.makeForm("Shrubbery", "Zaphod");
    Boss.signForm(*shrubbery);
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
}
