#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(): number(0){
	std::cout << "Default Fixed constructor " << std::endl;
}

Fixed::Fixed(const Fixed &inst){
	std::cout << "Copy Fixed constructor " << std::endl;
	*this = inst;
}

Fixed::~Fixed(){
	std::cout << "Fixed destructor" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &rhs){
	std::cout << "Operator = Called" << std::endl;
	if (this != &rhs) {
		this->number = rhs.number;
	}
	return *this;
}

int Fixed::getRawBits() const{
	std::cout << "getRawBits called" << std::endl;
	return this->number;
}

void Fixed::setRawBits(int const raw){
	std::cout << "setRawBits called" << std::endl;
	this->number = raw;
}