#ifndef CONTACT_H
#define CONTACT_H

#include<iostream>
#include<iomanip>

class contact {

public:
	void set_contact(void);
	std::string get_user(int i);

private:
	std::string user_data[5];
};

#endif