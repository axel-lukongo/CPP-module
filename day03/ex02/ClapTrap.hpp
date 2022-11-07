#ifndef ClapTrap_H
#define ClapTrap_H
#include <iostream>

class ClapTrap{

	public:
		ClapTrap(void);
		ClapTrap(std::string);
		ClapTrap(ClapTrap & ins);
		ClapTrap & operator =(ClapTrap & ins);
		~ClapTrap(void);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		
		std::string get_name(void);

	protected:
		std::string _Name;
		int _Hit_point;
		int _Energy;
		int _Attack;

};

#endif // !ClapTrap_H