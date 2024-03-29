/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 19:58:57 by myagiz            #+#    #+#             */
/*   Updated: 2024/02/06 01:58:27 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon &_weapon) : name(_name), weapon(_weapon)
{
	std::cout << "created HumanA : " << this->name << " with " << weapon.getType() << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "delete HumanA : " << this->name << std::endl;
}

void	HumanA::attack()
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}
