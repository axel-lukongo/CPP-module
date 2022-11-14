/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 20:57:47 by alukongo          #+#    #+#             */
/*   Updated: 2022/11/14 01:36:41 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
	public:
		Cat();
		Cat(std::string);
		Cat(const Cat & ins);
		Cat & operator=(const Cat & ins);
		virtual void makeSound() const;
		virtual const std::string & getType() const;
		virtual ~Cat();
	private:
		Brain * _brain;
};
#endif // !Animal_H