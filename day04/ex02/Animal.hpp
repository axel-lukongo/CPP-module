/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 20:48:31 by alukongo          #+#    #+#             */
/*   Updated: 2022/11/14 01:36:18 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_Animal_H
#define A_Animal_H

#include <iostream>

class A_Animal{
	public:
		virtual void makeSound() const = 0;
		std::string getType();
		virtual const std::string & getType() const = 0;
	protected:
		std::string _type;
};
#endif // !A_Animal_H