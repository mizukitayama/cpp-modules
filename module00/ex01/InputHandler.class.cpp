#include "InputHandler.class.hpp"

std::string	InputHandler::getInput( std::string prompt ) const {
	std::string	input = "";
	while (1) {
		std::cout << prompt << ": ";
		std::getline(std::cin, input);
		if (!std::all_of(input.begin(), input.end(), isspace)) {
			return (input);
		} else {
			std::cout << RED << "Invalid input, please try again." << RESET << std::endl;
		}
	}
}
