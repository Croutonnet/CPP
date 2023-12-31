#include "Dog.hpp"
#include "Animal.hpp"
#include <iostream>

Dog::Dog(){
	std::cout << "Default Dog constructor " << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog &inst){
	std::cout << "Copy Dog constructor " << std::endl;
	*this = inst;
}

Dog::~Dog(){
	std::cout << "Dog destructor" << std::endl;
}

Dog& Dog::operator=(const Dog &rhs){
	std::cout << "Dog operator = overide" << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

void Dog::makeSound(void) const{
	cout << "WOOF" << endl;
}

const string &Dog::getType(void) const{
	return (this->type);
}