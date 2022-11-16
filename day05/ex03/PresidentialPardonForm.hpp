/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:14:17 by alukongo          #+#    #+#             */
/*   Updated: 2022/11/16 18:27:20 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H

#include "Form.hpp"


class presidentialpardonForm: public Form
{
private:
	presidentialpardonForm();
	std::string _target;
public:
	presidentialpardonForm(std::string);
	presidentialpardonForm(const presidentialpardonForm &in);
	presidentialpardonForm & operator=(const presidentialpardonForm &in);
	virtual ~presidentialpardonForm();
	void execute(Bureaucrat const & executor) const;
};


#endif // !PRESIDENTIALPARDONFORM_H
