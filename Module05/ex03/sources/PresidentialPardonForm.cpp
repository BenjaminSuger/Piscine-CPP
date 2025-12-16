/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 21:51:03 by bsuger            #+#    #+#             */
/*   Updated: 2025/12/15 11:09:12 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
    : AForm("PresidentialPardonForm", 25, 5), _target("EARTH") {}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
    : AForm("PresidentialPardonForm", 25, 5), _target(target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(
    const PresidentialPardonForm &copy)
    : AForm(copy), _target(copy._target) {}

PresidentialPardonForm &
PresidentialPardonForm::operator=(const PresidentialPardonForm &old) {
  if (this != &old) {
    AForm::operator=(old);
    _target = old._target;
  }
  return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const {
  if (this->getSigned() == false)
    throw AForm::FormNotSignedException();
  if (executor.getGrade() <= this->getGradeToExecute())
    std::cout << _target << " has been pardonned by Zaphod Beeblerox\n";
  else
    throw AForm::GradeTooLowException();
}
