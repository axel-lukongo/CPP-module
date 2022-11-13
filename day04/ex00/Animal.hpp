/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 20:48:31 by alukongo          #+#    #+#             */
/*   Updated: 2022/11/13 14:28:42 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal{
	public:
		Animal();
		Animal(std::string );
		Animal(const Animal & ins);
		Animal & operator = (const Animal & ins);
		~Animal();
		std::string getType();
		virtual void makeSound() const;
		virtual const std::string & getType() const;
	protected:
		std::string _type;
};
#endif // !Animal_H