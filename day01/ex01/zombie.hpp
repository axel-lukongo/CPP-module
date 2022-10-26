/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 21:32:23 by alukongo          #+#    #+#             */
/*   Updated: 2022/10/26 12:52:30 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

class Zombie{
	private:
		std::string _name;
	public:
		Zombie(void);
		~Zombie(void);
		void announce(void);
		void set_name(std::string n);
};

Zombie* zombieHorde( int N, std::string name );

// void randomChump( std::string name );
// Zombie* newZombie( std::string name );
