#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap{
	public:
		DiamondTrap();
		DiamondTrap(const DiamondTrap & ins);
		DiamondTrap & operator =(const DiamondTrap & ins);
		DiamondTrap(const std::string );
		void attack(const std::string& target);
		void whoAmI();
		~DiamondTrap();
	private:
		std::string _name;
};


#endif // DIAMONDTRAP_H