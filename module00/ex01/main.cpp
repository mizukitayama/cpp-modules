#include <iostream>
#include "PhoneBook.class.hpp"
#include "InputHandler.class.hpp"

int main() {
	PhoneBook phoneBook;

	while (true) {
		std::string input = phoneBook.getInput("Enter command");
		if (input.compare("ADD") == 0) {
			phoneBook.addContact();
		} else if (input.compare("SEARCH") == 0) {
			phoneBook.searchContact();
		} else if (input.compare("EXIT") == 0) {
			break;
		}
	}
	return 0;
}
