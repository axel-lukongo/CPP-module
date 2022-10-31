#ifndef HARL_H
#define HARL_H

#include<iostream>

class Harl{

	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
		int get_level(std::string level);
	public:
		void complain( std::string level );
		Harl(void);
		~Harl(void);
};

#endif // !HARL_H
