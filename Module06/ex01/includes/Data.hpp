/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 14:21:57 by bsuger            #+#    #+#             */
/*   Updated: 2025/12/21 14:21:59 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <string>

class	Data {
	private:
		std::string _name;
		std::string _surname;
	public:
		Data(std::string name, std::string surname);
		~Data();
		Data(const Data& copy);
		Data& operator=(const Data& old);
		std::string getName() const;
		std::string getSurname() const;
};

#endif
