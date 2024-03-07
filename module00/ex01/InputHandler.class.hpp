#ifndef INPUTHANDLER_CLASS_HPP
# define INPUTHANDLER_CLASS_HPP
#include <iostream>

class InputHandler {
	public:
		std::string	getInput( std::string prompt ) const {
			std::string	input = "";
			while (1) {
				std::cout << prompt << ":" << std::endl;
				std::getline(std::cin, input);
				if (!input.empty()) {
					return (input);
				} else {
					std::cout << "Invalid input, please try again." << std::endl;
				}
			}
		}
};

#endif
