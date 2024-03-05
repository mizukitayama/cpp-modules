#include "PhoneBook.class.hpp"
#include <iostream>

PhoneBook::PhoneBook( void ) {
	return ;
}

PhoneBook::~PhoneBook( void ) {
	return ;
}

void	PhoneBook::addContact( void ) {
	static int i = 0;
	this->_contacts[i % 8].initContact();
	i++;
	return ;
}
