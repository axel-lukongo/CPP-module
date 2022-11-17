#ifndef WrongAnimal_H
#define WrongAnimal_H

#include <iostream>

class WrongAnimal{
	public:
		WrongAnimal();
		WrongAnimal(std::string );
		WrongAnimal(const WrongAnimal & ins);
		WrongAnimal & operator = (const WrongAnimal & ins);
		virtual ~WrongAnimal();
		std::string getType();
		void makeSound() const;
		const std::string & getType() const;
	protected:
		std::string _type;
};
#endif // !WWrongAnimal_H