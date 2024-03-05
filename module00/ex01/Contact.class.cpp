#include "Contact.class.hpp"
#include <iostream>

Contact::Contact ( void ) {
	return ;
}

Contact::~Contact ( void ) {
	return ;
}

std::string	Contact::_getInput( std::string message ) {
	std::string	input = "";
	while (1) {
		std::cout << message;
		std::getline(std::cin, input);
		if (std::cin.good() && !input.empty()) {
			return (input);
		}
		else {
			std::cin.clear();
			std::cout << "Invalid input, please try again." << std::endl;
		}
	}
}

void	Contact::initContact( void ) {
	std::cin.ignore();
	this->_first_name = _getInput("Enter first name:");
	this->_last_name = _getInput("Enter last name:");
	this->_nickname = _getInput("Enter nickname:");
	this->_phone_number = _getInput("Enter phone number:");
	this->_darkest_secret = _getInput("Enter the darkest secret:");
	return ;
}
