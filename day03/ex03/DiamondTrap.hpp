#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap{
	public:
		DiamondTrap();
		DiamondTrap(const std::string );
		// attack() (Scavtrap);
		void attack(const std::string& target);
		void whoAmI();
	public:
		std::string _name;
};


#endif // DIAMONDTRAP_H