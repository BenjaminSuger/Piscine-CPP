/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 11:46:19 by bsuger            #+#    #+#             */
/*   Updated: 2025/12/15 15:33:34 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form()
    : _name("default form"), _signed(false), _gradeToSign(150),
      _gradeToExecute(150) {}

Form::Form(std::string name, int gradeToSign, int gradeToExecute)
    : _name(name), _signed(false), _gradeToSign(gradeToSign),
      _gradeToExecute(gradeToExecute) {
  if (gradeToSign < 1 || gradeToExecute < 1)
    throw GradeTooLowException();
  if (gradeToSign > 150 || gradeToExecute > 150)
    throw GradeTooHighException();
}

Form::~Form() {}

Form::Form(const Form &copy)
    : _name(copy._name), _signed(copy._signed), _gradeToSign(copy._gradeToSign),
      _gradeToExecute(copy._gradeToExecute) {}

Form &Form::operator=(const Form &old) {
  if (this != &old)
    _signed = old._signed;
  return *this;
}

const std::string &Form::getName() const { return _name; }

bool Form::getSigned() const { return _signed; }

int Form::getGradeToSign() const { return _gradeToSign; }

int Form::getGradeToExecute() const { return _gradeToExecute; }

void Form::beSigned(Bureaucrat &employe) {
  if (_signed == true) {
    std::cout << "form is already signed\n";
    return;
  }
  if (employe.getGrade() > _gradeToSign)
    throw Form::GradeTooLowException();
  _signed = true;
}

const char *Form::GradeTooHighException::what() const throw() {
  return ("Grade Too High Exception for Form");
}

const char *Form::GradeTooLowException::what() const throw() {
  return ("Grade Too Low Exception for Form");
}

std::ostream &operator<<(std::ostream &os, const Form &obj) {
  os << "Form name ; " << obj.getName() << " grade to sign ; "
     << obj.getGradeToSign() << " grade to execute " << obj.getGradeToExecute()
     << " is signed " << obj.getSigned() << std::endl;
  return os;
}
