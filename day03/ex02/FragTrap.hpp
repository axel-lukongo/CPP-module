#ifndef FragTrap_H
#define FragTrap_H

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
class FragTrap : public ClapTrap{

	public:
		FragTrap(void);
		FragTrap(std::string);
		FragTrap(const FragTrap & ins);
		FragTrap & operator= (const FragTrap & ins);
		~FragTrap();
		void highFivesGuys(void);

	private:

};

#endif // !FragTrap_H
