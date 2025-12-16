/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 11:26:29 by bsuger            #+#    #+#             */
/*   Updated: 2025/12/15 15:47:44 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class	Intern
{
	public:
		Intern();
		~Intern();
		Intern(const Intern& copy);
		Intern& operator=(const Intern& old);
		AForm*	makeForm(std::string form, std::string target);
		AForm*	presidentialPardon(const std::string& target);
		AForm*	robotomyRequest(const std::string& target);
		AForm*	shrubberyCreation(const std::string& target);
		class	NotAFormException : public std::exception
		{
			public:
				const char *what() const throw();
		};
};

#endif
