/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 13:49:13 by bsuger            #+#    #+#             */
/*   Updated: 2025/11/18 16:59:37 by bsuger           ###   ########.fr       */
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
		int	_CheckOverflow(int num, const char *arr, int len);
		void	(Harl::*_functionptr[4])(void);
	public:
		Harl();
		void	Complain(std::string level);
};

#endif
