#include "Contact.class.hpp"

Contact::Contact ( void ) {
	return ;
}

Contact::~Contact ( void ) {
	return ;
}

void	Contact::initContact( int i ) {
	this->_index = i;
	this->_first_name = InputHandler::getInput("Enter first name:");
	this->_last_name = InputHandler::getInput("Enter last name:");
	this->_nickname = InputHandler::getInput("Enter nickname:");
	this->_phone_number = InputHandler::getInput("Enter phone number:");
	this->_darkest_secret = InputHandler::getInput("Enter the darkest secret:");
	return ;
}

std::string	Contact::_resizeStr( std::string str ) const {
	if (str.size() > 10) {
		str = str.substr(0, 9) + ".";
	} else {
		str.resize(10, ' ');
	}
	return (str);
}

void	Contact::showContact( void ) const {
	if (!this->_first_name.empty()) {
		std::cout << _resizeStr(std::to_string(this->_index)) << "|"
							<< _resizeStr(this->_first_name) << "|" 
							<< _resizeStr(this->_last_name) << "|"
							<< _resizeStr(this->_nickname)  << std::endl;
	}
}

void	Contact::showDetailedContact( void ) const {
	std::cout << std::to_string(this->_index) << std::endl;
	std::cout << this->_first_name << std::endl;
	std::cout << this->_last_name << std::endl;
	std::cout << this->_nickname << std::endl;
	std::cout << this->_phone_number << std::endl;
	std::cout << this->_darkest_secret << std::endl;
}

int		Contact::getIndex( void ) const {
	return (this->_index);
}
