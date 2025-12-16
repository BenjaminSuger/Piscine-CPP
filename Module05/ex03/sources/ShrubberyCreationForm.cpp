/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 21:51:03 by bsuger            #+#    #+#             */
/*   Updated: 2025/12/15 11:34:40 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
    : AForm("ShrubberyCreationForm", 145, 137), _target("EARTH") {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
    : AForm("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy)
    : AForm(copy), _target(copy._target) {}

ShrubberyCreationForm &
ShrubberyCreationForm::operator=(const ShrubberyCreationForm &old) {
  if (this != &old) {
    AForm::operator=(old);
    _target = old._target;
  }
  return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
  if (this->getSigned() == false)
    throw AForm::FormNotSignedException();
  if (executor.getGrade() <= this->getGradeToExecute()) {
    std::ofstream outfile;
    std::string temp = _target + "_shrubbery";
    outfile.open(temp.c_str(), std::ofstream::out);
    if (outfile.is_open())
      outfile << SHRUBBERY;
    else {
      std::cout << "error opening file\n";
      return;
    }
    outfile.close();
  } else
    throw AForm::GradeTooLowException();
}
