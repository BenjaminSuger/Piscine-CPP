/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 08:14:02 by bsuger            #+#    #+#             */
/*   Updated: 2025/11/11 08:14:29 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <vector>


class	PhoneBook
{
	private:
		int	_i;
		std::vector<Contact>	_Contacts;

	public:
		PhoneBook() { _i = 0; }
		int	Loop(void);
		int	Add(void);
		int	Search(void);
		void	Presentation(void);
};

#endif
