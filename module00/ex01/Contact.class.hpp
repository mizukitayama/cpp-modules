#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <iostream>

class Contact {
	public:
		Contact( void );
		~Contact( void );
		void	initContact( void );
	private:
		std::string	_getInput( std::string message );
		std::string _first_name, _last_name, _nickname, _phone_number, _darkest_secret;
};

#endif
