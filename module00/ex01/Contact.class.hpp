#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include "InputHandler.class.hpp"
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

class Contact : public InputHandler{
	public:
		Contact( void );
		~Contact( void );
		void	initContact( int i );
		void	showContact( void ) const;
		void	showDetailedContact( void ) const;
		int		getIndex( void ) const;
	private:
		std::string _resizeStr( std::string str) const;
		int	_index;
		std::string _first_name, _last_name, _nickname, _phone_number, _darkest_secret;
};

#endif
