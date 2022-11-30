/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 20:57:47 by alukongo          #+#    #+#             */
/*   Updated: 2022/11/30 17:15:27 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public A_Animal{
	public:
		Cat();
		Cat(std::string);
		Cat(const Cat & ins);
		Cat & operator=(const Cat & ins);
		virtual void makeSound() const;
		virtual const std::string & getType() const;
		virtual ~Cat();
		Brain& getBrain() const;
	private:
		Brain * _brain;
};
#endif // !A_Animal_H