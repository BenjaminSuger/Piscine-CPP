/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 11:45:43 by bsuger            #+#    #+#             */
/*   Updated: 2025/12/14 11:46:08 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"
# include "Form.hpp"

class Form {
	private:
		const std::string _name;
		bool		  _signed;
		const int	  _gradeToSign;
		const int	  _gradeToExecute;
	public:
		Form();
		Form(std::string name, int _gradeToSign, int _gradeToExecute);
		~Form();
		Form(const Form& copy);
		Form& operator=(const Form& old);

		const std::string&	getName() const;
		bool			getSigned() const;
		int			getGradeToSign() const;
		int			getGradeToExecute() const;
		void			beSigned(Bureaucrat& employe);
		
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


std::ostream& operator<<(std::ostream& os, const Form& obj);

#endif
