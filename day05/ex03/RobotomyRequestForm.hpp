/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:55:48 by alukongo          #+#    #+#             */
/*   Updated: 2022/11/16 18:27:16 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H
#include "Form.hpp"

class RobotomyRequestForm: public Form
{
private:
	RobotomyRequestForm();
	std::string _target;
public:
	RobotomyRequestForm(std::string);
	RobotomyRequestForm(const RobotomyRequestForm &in);
	RobotomyRequestForm & operator=(const RobotomyRequestForm &in);
	virtual ~RobotomyRequestForm();
	void execute(Bureaucrat const & executor) const;
};



#endif // !ROBOTOMYREQUESTFORM_H