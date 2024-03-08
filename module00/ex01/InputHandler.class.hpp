#ifndef INPUTHANDLER_CLASS_HPP
# define INPUTHANDLER_CLASS_HPP
#include <iostream>

#define RED     "\033[31m"
#define RESET   "\033[0m"

class InputHandler {
	public:
		std::string	getInput( std::string prompt ) const;
};

#endif
