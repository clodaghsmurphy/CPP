#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# define MAX_CONTACTS 8
# include "Contact.hpp"
# include <string>
# include <iostream>

class Phonebook
{
	public:
		int	index;
		Phonebook();
		~Phonebook();
		int add_contact();
		void search();
	private:
		Contact contact[MAX_CONTACTS];
};


#endif