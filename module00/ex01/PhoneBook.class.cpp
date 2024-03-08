#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook( void ) {
	return ;
}

PhoneBook::~PhoneBook( void ) {
	return ;
}

void PhoneBook::welcome( void ) const {
	std::cout << GREEN << "!! WELCOME !!" << RESET << std::endl;
	std::cout << CYAN << "====================================" << std::endl;
	std::cout << "ADD : save a new contact" << std::endl;
	std::cout << "SEARCH : display a specific contact" << std::endl;
	std::cout << "EXIT : quit the program" << std::endl;
	std::cout << "====================================" << RESET << std::endl;
	return ;
}

void	PhoneBook::addContact( void ) {

	std::cout << std::endl << GREEN << "Adding a new contact." << RESET << std::endl;
	static int i = 0;
	this->_contacts[i % CONTACTS].initContact(i % CONTACTS);
	i++;
	std::cout << GREEN << "A new contact has been added." << RESET << std::endl << std::endl;
	return ;
}

void	PhoneBook::searchContact( void ) const {
	if (!_hasContacts()) {
		std::cout << RED << "No contact to search." << RESET << std::endl;
		return ;
	}
	std::cout << std::endl << GREEN << "Searching contacts." << std::endl << CYAN;
	_showContacts();
	std::cout << RESET << std::endl;
	while (true) {
		std::string input = InputHandler::getInput("Enter the index to display");
		std::stringstream ss(input);
		int index;
		if (ss >> index && ss.eof()) {
			for (int i = 0; i < CONTACTS; i++) {
				if (index == this->_contacts[i].getIndex()) {
					std::cout << std::endl << MAGENTA;
					this->_contacts[i].showDetailedContact();
					std::cout << RESET << std::endl;
					return ;
				}
			}
			std::cout << RED << "Contact not found. Enter a valid index." << RESET << std::endl;
		} else {
			std::cout << RED << "Invalid input. Enter a numeric index." << RESET << std::endl;
		}
	}
}

bool	PhoneBook::_hasContacts( void ) const {
	return (this->_contacts[0].hasInitialized());
}

void	PhoneBook::_showContacts( void ) const {
	std::cout << "index     |first name|last name |nickname  " << std::endl; 
	std::cout << "-------------------------------------------" << std::endl;
	for (int i = 0; i < CONTACTS; i++) {
		this->_contacts[i].showContact();
	}
	return ;
}
