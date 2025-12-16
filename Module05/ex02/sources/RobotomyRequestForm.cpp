/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 21:51:03 by bsuger            #+#    #+#             */
/*   Updated: 2025/12/15 11:09:53 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
    : AForm("RobotomyRequestForm", 72, 45), _target("EARTH") {}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
    : AForm("RobotomyRequestForm", 72, 45), _target(target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy)
    : AForm(copy), _target(copy._target) {}

RobotomyRequestForm &
RobotomyRequestForm::operator=(const RobotomyRequestForm &old) {
  if (this != &old) {
    AForm::operator=(old);
    _target = old._target;
  }
  return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
  if (this->getSigned() == false)
    throw AForm::FormNotSignedException();
  if (executor.getGrade() <= this->getGradeToExecute()) {
    std::srand(std::time(0));
    if (std::rand() % 2 == 0)
      std::cout << _target << " has been robotomized successfully\n";
    else
      std::cout << " robotomized fail ! He was already not that smart anyway\n";
  } else
    throw AForm::GradeTooLowException();
}
