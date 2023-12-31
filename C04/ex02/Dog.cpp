#include "Dog.hpp"
#include <iostream>

Dog::Dog(){
	std::cout << "Default Dog constructor " << std::endl;
	this->type = "Dog";
	this->brains = new Brain();
}

Dog::Dog(const Dog &inst){
	std::cout << "Copy Dog constructor " << std::endl;
	*this = inst;
}

Dog::~Dog(){
	std::cout << "Dog destructor" << std::endl;
	delete this->brains;
}

Dog& Dog::operator=(const Dog &rhs){
	// std::cout << "Dog operator = overide" << std::endl;
	if (this != &rhs){
		this->type = rhs.type;
		this->brains = new Brain(*rhs.brains);
	}
	return *this;
}

void Dog::makeSound(void) const{
	cout << "WOOF" << endl;
}

const string &Dog::getType(void) const{
	return (this->type);
}

void Dog::giveIdea(string idea){
	this->brains->setIdea(idea);
}

string Dog::printIdea(unsigned int i){
	return this->brains->getIdea(i);
}