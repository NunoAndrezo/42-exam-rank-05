/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bigint.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuno <nuno@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 12:03:22 by nuno              #+#    #+#             */
/*   Updated: 2026/01/22 12:32:50 by nuno             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BIGINT_HPP
#define BIGINT_HPP

#include <iostream>

class bigint
{
	private:
		std::string value;
		void trim();
	public:
		bigint();
		bigint(unsigned long long val);
		bigint(const bigint &other);
		~bigint();
		bigint &operator=(const bigint &other);

		std::string getValue() const;

};

std::ostream &operator<<(std::ostream &out, const bigint &other);

#endif
