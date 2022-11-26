/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 17:03:57 by alukongo          #+#    #+#             */
/*   Updated: 2022/11/26 20:22:53 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_H
#define CONVERT_H
#include<iostream>
#include <string>
#include <cstring>
#include <exception>
#include <cmath>
#include<limits>

class converter
{
private:
	const std::string _str;
public:
	converter(char *str);
	~converter();
	void is_char(char caract);
	void is_int();
	void is_float();
	void is_double();
	int find_type();
	bool check_expection();
	void exec_exception();
	void check_char();
	void print_impossible();
	void choose_type(int i);
};


#endif // !CONVERT_H