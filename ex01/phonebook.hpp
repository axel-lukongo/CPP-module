/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repertory.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:20:11 by alukongo          #+#    #+#             */
/*   Updated: 2022/10/25 16:28:12 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPERTORY_H
#define REPERTORY_H
#include<iostream>
#include<iomanip>
#include"contact.hpp"



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






// class contact {

// public:
// 	void set_contact(void);
// 	std::string set_user(int i);

// private:
// 	std::string user_data[5];
// };
#endif // !REPERTORY_H#define REPERTORY_H
