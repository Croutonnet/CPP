#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA() {
	std::cout << "HumanA constructor called" << std::endl;
}

HumanA::HumanA(std::string name, Weapon &weapon): name(name), weapon(&weapon){
	std::cout << "HumanA constructor called" << std::endl;
}

HumanA::~HumanA() {
	std::cout << "HumanA destructor called" << std::endl;
}

void HumanA::attack(){
	std::cout << this->name + " attacks with their " + this->weapon->getType() << std::endl;
}
