#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP

#include "Contact.class.hpp"
#include "InputHandler.class.hpp"

#define CONTACTS 8

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"

class PhoneBook : public InputHandler
{
public:
	PhoneBook(void);
	~PhoneBook(void);
	void welcome(void) const;
	void addContact(void);
	void searchContact(void) const;

private:
	Contact _contacts[CONTACTS];
	bool _hasContacts(void) const;
	void _showContacts(void) const;
};

#endif
