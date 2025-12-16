/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 14:43:59 by bsuger            #+#    #+#             */
/*   Updated: 2025/12/11 15:38:35 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
  try {
    Bureaucrat Benjamin("Benjamin", 1);
    Bureaucrat Eliot("Eliot", 50);
    Bureaucrat Tom("Tom", 150);

    Form form1("form 75 25", 75, 25);
    Form form2("form 1 1", 1, 1);

    std::cout << form1;
    std::cout << form2;

    Tom.signForm(form1);
    Tom.signForm(form2);
    Eliot.signForm(form1);
    Eliot.signForm(form2);
    Benjamin.signForm(form2);

    std::cout << form1;
    std::cout << form2;
  } catch (std::exception &e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }
}
