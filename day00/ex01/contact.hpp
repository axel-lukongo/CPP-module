#ifndef CONTACT_H
#define CONTACT_H

#include<iostream>
#include<iomanip>

class contact {

public:
	void set_contact(void);
	std::string set_user(int i);

private:
	std::string user_data[5];
};

#endif