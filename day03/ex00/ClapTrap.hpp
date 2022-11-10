#ifndef ClapTrap_H
#define ClapTrap_H
#include <iostream>

class ClapTrap{

	private:
		std::string _Name;
		int _Hit_point;
		int _Energy;
		int _Attack;
	public:
		ClapTrap(void);
		ClapTrap(std::string );
		ClapTrap(const ClapTrap & ins);
		ClapTrap & operator=(const ClapTrap & ins);
		~ClapTrap(void);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif // !ClapTrap_H