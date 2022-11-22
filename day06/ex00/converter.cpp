#include "converter.hpp"

converter::converter(char *str): _str(str)
{
	// std::cout << ""
}

converter::~converter()
{

}

void converter::is_char(){
	std::cout << "Char: ";
try
{
	int val = std::stoi(_str);
	if (!isascii(val))
		std::cout << "impossible" << std::endl;
	else if (!isprint(val))
		std::cout << "impossible" << std::endl;
	else
		std::cout <<static_cast<char>(val) << std::endl;
}
catch(const std::invalid_argument& e){
	std::cout << "impossible" << std::endl;
}
catch(const std::out_of_range& e){
	std::cout << "impossible" << std::endl;
}
}

void converter::is_int(){
	std::cout << "Int: ";
	try
	{
		int val = std::stoi(_str);
		std::cout<<val << std::endl; 
	}
	catch(const std::out_of_range& e)
	{
		std::cout << "impossible" << std::endl;
	}
	catch(const std::invalid_argument& e){
		std::cout <<"impossible" << std::endl;
	}
}


void converter::is_float(){
std::cout << "Float: ";
try
{
	float val = static_cast <float>(std::stof(_str));
	int num = std::stoi(_str);
	float diff = val- (float)num;
	if (diff == 0)
		std::cout.precision(1);
	else
		std::cout.precision(3);
	std::cout << std::fixed;
	std::cout << val << "f" << std::endl;
}
catch(const std::invalid_argument& e)
{
	std::cout << "impossible" << std::endl;
}
catch(const std::out_of_range & e){
	std::cout << "impossible" << std::endl;
}
}



void converter::is_double(){
std::cout << "Double: ";
try
{
	double val = static_cast <double>(std::stod(_str));
	int num = std::stoi(_str);
	float diff = val- (double)num;
	if (diff == 0)
		std::cout.precision(1);
	else
		std::cout.precision(3);
	std::cout << std::fixed;
	std::cout << val << std::endl;
}
catch(const std::invalid_argument& e)
{
	std::cout << "impossible" << std::endl;
}
catch(const std::out_of_range & e){
	std::cout << "impossible" << std::endl;
}
}

void converter::typeconverter(){
is_char();
is_int();
is_float();
is_double();
}