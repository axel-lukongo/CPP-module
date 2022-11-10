#ifndef ClapTrap_H
#define ClapTrap_H
#include <iostream>

class ClapTrap{

	public:
		ClapTrap(void);
		ClapTrap(std::string);
		ClapTrap(const ClapTrap & ins);
		ClapTrap & operator =(const ClapTrap & ins);
		virtual ~ClapTrap(void);

		virtual	void attack(const std::string& target);
		virtual	void takeDamage(unsigned int amount);
		virtual	void beRepaired(unsigned int amount);
		
		std::string get_name(void);

	protected:
		std::string _Name;
		unsigned int _Hit_point;
		unsigned int _Energy;
		unsigned int _Attack;

};

#endif // !ClapTrap_H