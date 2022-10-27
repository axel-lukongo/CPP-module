#ifndef HUMANA_H
#define HUMANA_H

#include<iostream>
#include"Weapon.hpp"
// #include<iomanip>

class HumanA{

	private:
		std::string _name;
		Weapon& _weapon;
	public:
		void attack();
		HumanA(std::string name, Weapon& weapon);
		~HumanA(void);


};

#endif