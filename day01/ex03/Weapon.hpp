#ifndef WEAPON_H
#define WEAPON_H

#include<iostream>
// #include<iomanip>

class Weapon{
	private:
		std::string type;
	public:
		Weapon(std::string type);
		~Weapon(void);
		std::string getType(void);
		void setType(std::string n);
};

#endif // !WEAPON_H