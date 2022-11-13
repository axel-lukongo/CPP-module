/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 21:09:25 by alukongo          #+#    #+#             */
/*   Updated: 2022/11/13 14:23:12 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H
#include <iostream>
#include "Animal.hpp"

class Dog : public Animal{
	public:
		Dog();
		Dog(std::string);
		Dog(const Dog & ins);
		Dog & operator=(const Dog & ins);
		virtual void makeSound() const;
		virtual const std::string & getType() const;
		~Dog();
};
#endif // !Animal_H