/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 19:13:38 by alukongo          #+#    #+#             */
/*   Updated: 2022/11/17 19:13:39 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WrongDog_H
#define WrongDog_H
#include <iostream>
#include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal{
	public:
		WrongDog();
		WrongDog(std::string);
		WrongDog(const WrongDog & ins);
		WrongDog & operator=(const WrongDog & ins);
		void makeSound() const;
		const std::string & getType() const;
		virtual ~WrongDog();
};
#endif // !WrongAnimal_H