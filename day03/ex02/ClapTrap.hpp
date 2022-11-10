#ifndef ClapTrap_H
#define ClapTrap_H
#include <iostream>

class ClapTrap{

	public:
		ClapTrap(void);
		ClapTrap(std::string);
		ClapTrap(const ClapTrap & ins);
		ClapTrap & operator =(const ClapTrap & ins);
		~ClapTrap(void);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		
		std::string get_name(void);

	protected:
		std::string _Name;
		unsigned int _Hit_point;
		unsigned int _Energy;
		unsigned int _Attack;

};

#endif // !ClapTrap_H