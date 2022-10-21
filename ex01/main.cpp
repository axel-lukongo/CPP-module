#include"repertory.hpp"
#include<iostream>

int main()
{
	std::string data;
	phonebook t1;

	while (std::getline(std::cin, data) && data != "EXIT")
	{
		if (data == "ADD")
			t1.edit_user();
		if (data == "SEARCH")
			t1.print_data();
	}
	return 0;
}