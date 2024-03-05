#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include "Contact.class.hpp"

class PhoneBook
{
	public:
		PhoneBook( void );
		~PhoneBook( void );
		void addContact( void );
	private:
		Contact _contacts[8];
};

#endif
