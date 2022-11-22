#ifndef CONVERT_H
#define CONVERT_H
#include<iostream>

class converter
{
private:
	char * _str;
public:
	converter(char *str);
	~converter();
	void is_char();
	void is_int();
	void is_float();
	void is_double();
	void typeconverter();
};


#endif // !CONVERT_H