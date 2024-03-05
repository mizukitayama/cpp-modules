#include <iostream>
#include "PhoneBook.class.hpp"

int main() {
	PhoneBook phoneBook;
	
	std::string input = "";

	while (true) {
		std::cin >> input;
		if (input.compare("ADD") == 0) {
			phoneBook.addContact();
		} else {

		}
	}
	return 0;
}
