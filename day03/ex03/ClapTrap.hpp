#ifndef ClapTrap_H
#define ClapTrap_H
#include <iostream>

class ClapTrap{

	public:
		ClapTrap(void);
		explicit ClapTrap(std::string);
		ClapTrap(ClapTrap & ins);
		ClapTrap & operator =(ClapTrap & ins);
		virtual ~ClapTrap(void);

	virtual	void attack(const std::string& target);
	virtual	void takeDamage(unsigned int amount);
	virtual	void beRepaired(unsigned int amount);
		
		std::string get_name(void);

	protected:
		std::string _Name;
		int _Hit_point;
		int _Energy;
		int _Attack;

};

#endif // !ClapTrap_H