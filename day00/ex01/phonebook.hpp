/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:20:11 by alukongo          #+#    #+#             */
/*   Updated: 2022/10/26 16:38:49 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPERTORY_H
#define REPERTORY_H
#include<iostream>
#include<iomanip>
#include"contact.hpp"



class phonebook {

private:
	std::string tab[200][5];
	int index_user;
	int print_entire_data(void);

public:

	phonebook( void );
	~phonebook( void );
	void edit_user(void);
	void print_short_data(void);
};






// class contact {

// public:
// 	void set_contact(void);
// 	std::string set_user(int i);

// private:
// 	std::string user_data[5];
// };
#endif // !REPERTORY_H#define REPERTORY_H
