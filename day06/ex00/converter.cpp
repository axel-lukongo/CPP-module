/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 17:22:52 by alukongo          #+#    #+#             */
/*   Updated: 2022/11/26 20:34:54 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "converter.hpp"

converter::converter(char *str): _str(str)
{
	// std::cout << ""
}

converter::~converter()
{

}


bool converter::check_expection()
{
	if (_str == "nan" || _str == "nanf" || _str == "inf" || _str == "inff" || _str == "-inf" || _str == "+inf" || _str == "+inff" || _str == "-inff")
		return (true);
	return (false);
}

void	converter::exec_exception()
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	if (_str == "nan" || _str == "nanf")
	{
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
	else if (_str == "+inf" || _str == "inf" || _str == "inff" || _str == "+inff")
	{
		std::cout << "float: inff" << std::endl;
		std::cout << "double: inf" << std::endl;
	}
	else if (_str == "-inf" || _str == "-inff")
	{
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
	}
}

void	converter::check_char()
{
	if (_str.length() == 3)
		if (_str[0] == '\'')
			if (_str[2] == '\'')
				return (choose_type(8));
}

void converter::is_char(char caract){
	std::cout << "\033[1;32m" << "char: " << "\033[0m" << caract << std::endl;
	std::cout << "int: " << static_cast<int>(caract) << std::endl;
	std::cout << "float: " << static_cast<float>(caract) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(caract) << ".0" << std::endl;
}

void converter::is_int(){
	int val = atoi(_str.c_str());
	if (val > 31 && val < 127)
		std::cout << "char: " << static_cast<char>(val) << std::endl;
	else
		std::cout << "char: " << "impossible" << std::endl;
	std::cout << "\033[1;32m" << "int: " << "\033[0m" << val << std::endl;
	std::cout << "float: " << static_cast<float>(val) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(val) << ".0" << std::endl;
	
}


void converter::is_float(){
	float val = atof(_str.c_str());
	int num = std::stoi(_str);
	int n = val;
		if (val - (double)n == 0) {
			std::cout.precision(1);
		}
		else
			std::cout.precision(3);
		std::cout << std::fixed;
	if (val >= 32 && val < 127)
		std::cout << "char: " << static_cast<char>(val) << std::endl;
	else
		std::cout << "char: " << "impossible" << std::endl;

	std::cout << "int: " << static_cast<int>(val) << std::endl;
	std::cout << "\033[1;32m" << "float: " << "\033[0m" << val << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(val) << std::endl;
}



void converter::is_double(){
	double val = (strtod(_str.c_str(), NULL));
	int n = val;
		if (val - (double)n == 0) {
			std::cout.precision(1);
		}
		else
			std::cout.precision(3);
		std::cout << std::fixed;
	if (val >= 32 && val < 127)
			std::cout << "char: " << static_cast<char>(val) << std::endl;
	else
		std::cout << "char: " << "impossible" << std::endl;
	std::cout << "int: " << static_cast<int>(val) << std::endl;
	std::cout << "float: " << static_cast<float>(val)<<"f" << std::endl;
	std::cout << "\033[1;32m" << "double: " << "\033[0m" << val << std::endl;
}

int converter::find_type(){
	int	point = 0;
	int	floating = 0;
	int	valid = 0;
	
	if (_str[0] != '.')
	{
		if (!isdigit(_str[0]))
			return (-1);
	}
	else
	{
		if (_str[1])
			if (!isdigit(_str[1]))
				return (-1);
	}
	for (int i = 0; _str[i]; i++)
	{
		if (!isdigit(_str[i]) && _str[i] != '.' && _str[i] != 'f')
			return (-1);
		if (_str[i] == '.')
		{
			if (point || floating)
				return (-1);
			point = 1;
		}
		if (_str[i] == 'f')
		{
			if (floating)
				return (-1);
			floating = 2;
		}
		if (isdigit(_str[i]))
		{
			if (point && _str[i] != '0')
				valid = 4;
			if (floating)
				return (-1);
		}
	}
	return (point + floating + valid);
}

void converter::print_impossible(){
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: impossible" << std::endl;
	std::cout << "double: impossible" << std::endl;
}


void converter::choose_type(int i){
// int i = find_type(_str);

switch (i)
{
	case 0:
		is_int();
		break;
	case 1:
		is_double();
		break;
	case 3:
		is_float();
		break;
	case 5:
		is_double();
		break;
	case 6:
		is_float();
		break;
	case 7:
		is_float();
		break;
	case 8:
		is_char(_str[1]);
		break;
	default:
		print_impossible();
		break;

}
}