/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 11:45:43 by bsuger            #+#    #+#             */
/*   Updated: 2025/12/15 09:58:25 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class AForm {
	private:
		const std::string _name;
		bool		  _signed;
		const int	  _gradeToSign;
		const int	  _gradeToExecute;
	public:
		AForm();
		AForm(std::string name, int _gradeToSign, int _gradeToExecute);
		virtual ~AForm();
		AForm(const AForm& copy);
		AForm& operator=(const AForm& old);

		const std::string&	getName() const;
		bool			getSigned() const;
		int			getGradeToSign() const;
		int			getGradeToExecute() const;
		void			beSigned(Bureaucrat& employe);
		virtual void 			execute(Bureaucrat const & executor) const = 0;//new function virtual
		
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:

				virtual const char *what() const throw();
		};
		class FormNotSignedException: public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

};

std::ostream& operator<<(std::ostream& os, const AForm& obj);

#endif
