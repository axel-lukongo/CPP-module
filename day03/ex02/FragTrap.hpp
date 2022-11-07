#ifndef FragTrap_H
#define FragTrap_H

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
class FragTrap : public ScavTrap{

	public:
		FragTrap(void);
		FragTrap(std::string);
		FragTrap(FragTrap & ins);
		FragTrap & operator= (FragTrap & ins);
		~FragTrap();
		void highFivesGuys(void);

	private:

};

#endif // !FragTrap_H
