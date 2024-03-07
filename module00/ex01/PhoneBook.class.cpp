#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook( void ) {
	return ;
}

PhoneBook::~PhoneBook( void ) {
	return ;
}

void	PhoneBook::addContact( void ) {
	static int i = 0;
	this->_contacts[i % CONTACTS].initContact(i);
	i++;
	return ;
}

void	PhoneBook::searchContact( void ) const {
	while (true) {
		_showContacts();
		std::string input = InputHandler::getInput("Enter the index to display.");
		std::stringstream ss(input);
		int index;

		if (ss >> index && ss.eof()) {
			for (int i = 0; i < CONTACTS; i++) {
				if (index == this->_contacts[i].getIndex()) {
					this->_contacts[i].showDetailedContact();
					return ;
				}
			}
			std::cout << "Contact not found. Enter a valid index." << std::endl;
		} else {
			std::cin.clear();
			std::cout << "Invalid input. Enter a numeric index." << std::endl;
		}
	}
}

void	PhoneBook::_showContacts( void ) const {
	for (int i = 0; i < CONTACTS; i++) {
		this->_contacts[i].showContact();
	}
	return ;
}
