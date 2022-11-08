#ifndef FragTrap_H
#define FragTrap_H

#include "ScavTrap.hpp"
// #include "ClapTrap.hpp"
class FragTrap : virtual public ClapTrap{

	public:
		FragTrap(void);
		explicit FragTrap(std::string);
		FragTrap(const FragTrap & ins);
		FragTrap & operator= (FragTrap & ins);
		virtual ~FragTrap();
		void highFivesGuys(void);

	private:

};

#endif // !FragTrap_H
