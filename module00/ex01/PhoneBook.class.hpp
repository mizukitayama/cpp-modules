#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include "Contact.class.hpp"
#include "InputHandler.class.hpp"

#define CONTACTS 8

class PhoneBook : public InputHandler {
	public:
		PhoneBook( void );
		~PhoneBook( void );
		void addContact( void );
		void searchContact( void ) const;
	private:
		Contact _contacts[CONTACTS];
		void _showContacts( void ) const;
};

#endif
