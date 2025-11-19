/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 13:49:13 by bsuger            #+#    #+#             */
/*   Updated: 2025/11/19 08:23:41 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>
# include <climits>
# include <cstdlib>
# include <cstdio>
# include <cstring>

class Harl
{
	private:
		void	debug(void);
		void	info(void);
		void	warning (void);
		void	error(void);
		void	other(void);
		void	(Harl::*_functionptr[5])(void);
	public:
		Harl();
		void	Complain(std::string level);
};

#endif
