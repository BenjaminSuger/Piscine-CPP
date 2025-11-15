/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 08:19:14 by bsuger            #+#    #+#             */
/*   Updated: 2025/11/11 08:13:57 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>
# include <iomanip>

class	Contact
{
	private:
		std::string	_FirstName;
		std::string	_LastName;
		std::string	_Nickname;
		std::string	_PhoneNumber;
		std::string	_DarkestSecret;
	public:
		Contact() {};
		void	PrintTab(int i);
		int	PrintAll(void);
		int	SetUp(void);
};

#endif
