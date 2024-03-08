#include "PhoneBook.class.hpp"
#include "InputHandler.class.hpp"

int main() {
	PhoneBook phoneBook;

	phoneBook.welcome();
	while (true) {
		std::string input = phoneBook.getInput("Enter command");
		if (input.compare("ADD") == 0) {
			phoneBook.addContact();
		} else if (input.compare("SEARCH") == 0) {
			phoneBook.searchContact();
		} else if (input.compare("EXIT") == 0) {
			std::cout << GREEN << "BYE !" << RESET << std::endl;
			break ;
		} else {
			std::cout << RED << "No such command :(" << RESET << std::endl;
		}
	}
	return (0);
}
