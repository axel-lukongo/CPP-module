#ifndef REPERTORY_H
#define REPERTORY_H
#include<iostream>




class phonebook {

public:
	std::string tab[200][5];

	int index_user;
	
	phonebook( void );
	~phonebook( void );
	void edit_user(void);
	void print_short_data(void);
	int print_entire_data(void);
};













class contact {

public:
	void creat_contact(void);
	std::string data_user(int i);

private:
	std::string user_data[5];
};

#endif // !REPERTORY_H#define REPERTORY_H