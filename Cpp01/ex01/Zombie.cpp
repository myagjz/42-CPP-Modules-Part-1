/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 19:25:07 by myagiz            #+#    #+#             */
/*   Updated: 2024/02/05 11:29:00 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : name("")
{
	std::cout << "Create : no name" << std::endl;
}

Zombie::Zombie(std::string _name) : name(_name)
{
	std::cout << "Create : " << this->name << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Remove : " << this->name << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_name(std::string _name)
{
	this->name = _name;
}
