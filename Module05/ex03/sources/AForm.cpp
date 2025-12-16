/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 11:46:19 by bsuger            #+#    #+#             */
/*   Updated: 2025/12/15 10:00:03 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm()
    : _name("default form"), _signed(false), _gradeToSign(150),
      _gradeToExecute(150) {}

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute)
    : _name(name), _signed(false), _gradeToSign(gradeToSign),
      _gradeToExecute(gradeToExecute) {
  if (gradeToSign < 1 || gradeToExecute < 1)
    throw GradeTooLowException();
  if (gradeToSign > 150 || gradeToExecute > 150)
    throw GradeTooHighException();
}

AForm::~AForm() {}

AForm::AForm(const AForm &copy)
    : _name(copy._name), _signed(copy._signed), _gradeToSign(copy._gradeToSign),
      _gradeToExecute(copy._gradeToExecute) {}

AForm &AForm::operator=(const AForm &old) {
  if (this != &old)
    _signed = old._signed;
  return *this;
}

const std::string &AForm::getName() const { return _name; }

bool AForm::getSigned() const { return _signed; }

int AForm::getGradeToSign() const { return _gradeToSign; }

int AForm::getGradeToExecute() const { return _gradeToExecute; }

void AForm::beSigned(Bureaucrat &employe) {
  if (_signed == true) {
    std::cout << "form is already signed\n";
    return;
  }
  if (employe.getGrade() > _gradeToSign)
    throw Bureaucrat::GradeTooLowException();
  _signed = true;
}

const char *AForm::GradeTooHighException::what() const throw() {
  return ("Grade Too High Exception for AForm");
}

const char *AForm::GradeTooLowException::what() const throw() {
  return ("Grade Too Low Exception for AForm");
}

const char *AForm::FormNotSignedException::what() const throw() {
  return ("Form is not signed");
}

std::ostream &operator<<(std::ostream &os, const AForm &obj) {
  os << "AForm name ; " << obj.getName() << " grade to sign ; "
     << obj.getGradeToSign() << " grade to execute " << obj.getGradeToExecute()
     << " is signed " << obj.getSigned() << std::endl;
  return os;
}
