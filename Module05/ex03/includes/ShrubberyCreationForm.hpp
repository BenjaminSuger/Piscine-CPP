/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 21:05:55 by bsuger            #+#    #+#             */
/*   Updated: 2025/12/15 09:19:15 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"

# include <fstream>

class	ShrubberyCreationForm : public AForm
{
	private:
		std::string _target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm& copy);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& old);
		void 	execute(Bureaucrat const & executor) const;

};

# define SHRUBBERY "                     .o00o\n		    o000000oo \n                  00000000000o \n                 00000000000000 \n              oooooo  00000000  o88o \n           ooOOOOOOOoo  ```''  888888 \n         OOOOOOOOOOOO'.qQQQQq. `8888' \n        oOOOOOOOOOO'.QQQQQQQQQQ/.88' \n        OOOOOOOOOO'.QQQQQQQQQQ/ /q \n         OOOOOOOOO QQQQQQQQQQ/ /QQ \n           OOOOOOOOO `QQQQQQ/ /QQ' \n             OO:F_P:O `QQQ/  /Q' \n                \\\\. \\ |  // | \n                d\\ \\|_//// \n                qP| \\ _' `|Ob \n                   \\  / \\  \\Op \n                   |  | O| | \n           _       /\\. \\_/ /\\ \\ \n            `---__/|_\\\\   //|  __ \n                  `-'  `-'`-'-' \n"

#endif
