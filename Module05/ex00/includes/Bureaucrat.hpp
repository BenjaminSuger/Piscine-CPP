/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 07:34:21 by bsuger            #+#    #+#             */
/*   Updated: 2025/12/14 07:34:28 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>
# include <string>

class Bureaucrat
{
	private:
		const std::string _name;
		int	_grade;
	public:
		Bureaucrat();
		Bureaucrat(const std::string& name, int grade);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat& copy);
		Bureaucrat& operator=(const Bureaucrat& old);
		const std::string&	getName() const;
		int			getGrade() const;
		void			promote();
		void			demote();
		class GradeTooHighException : public std::exception
		{
			public:
				const char *what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:

				const char *what() const throw();
		};
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);

#endif
