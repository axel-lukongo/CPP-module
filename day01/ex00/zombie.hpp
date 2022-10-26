/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 21:32:23 by alukongo          #+#    #+#             */
/*   Updated: 2022/10/25 18:20:17 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

class Zombie{
	private:
		std::string _name;
	public:
		Zombie(std::string n);
		~Zombie(void);
		void announce(void);
};

void randomChump( std::string name );
Zombie* newZombie( std::string name );
