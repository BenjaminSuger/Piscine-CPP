/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 14:43:59 by bsuger            #+#    #+#             */
/*   Updated: 2025/12/15 15:34:10 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
  try {
    // creation of different Vogon
    Bureaucrat Boss("Vogon Boss", 1);
    Bureaucrat CTO("Vogon CTO", 3);
    Bureaucrat CFO("Vogon CFO", 2);
    Bureaucrat employee("mid carreer Vogon", 50);
    Bureaucrat employee2("junior Vogon", 80);
    Bureaucrat intern("intern Vogon", 150);

    // form
    ShrubberyCreationForm tree("TREE");
    RobotomyRequestForm chatgpt("human");
    PresidentialPardonForm macs("benjamin");

    // try to execute without signing it
    Boss.executeForm(tree);
    Boss.executeForm(chatgpt);
    Boss.executeForm(macs);
    CTO.executeForm(tree);
    CTO.executeForm(chatgpt);
    CTO.executeForm(macs);

    // signed the form
    intern.signForm(tree);
    intern.signForm(chatgpt);
    intern.signForm(macs);
    employee2.signForm(tree);
    employee2.signForm(chatgpt);
    employee2.signForm(macs);
    employee.signForm(tree);
    employee.signForm(chatgpt);
    employee.signForm(macs);
    CTO.signForm(tree);
    CTO.signForm(chatgpt);
    CTO.signForm(macs);
    Boss.signForm(tree);
    Boss.signForm(chatgpt);
    Boss.signForm(macs);

    // try to execute

    intern.executeForm(tree);
    intern.executeForm(chatgpt);
    intern.executeForm(macs);
    employee2.executeForm(tree);
    employee2.executeForm(chatgpt);
    employee2.executeForm(macs);
    employee.executeForm(tree);
    employee.executeForm(chatgpt);
    employee.executeForm(macs);
    Boss.executeForm(tree);
    Boss.executeForm(chatgpt);
    Boss.executeForm(macs);
    CTO.executeForm(tree);
    CTO.executeForm(chatgpt);
    CTO.executeForm(macs);
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
}
