#ifndef CONTACT_HPP
#define CONTACT_HPP


#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
	private:
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _phone_number;
		std::string _darkest_secret;
		int			_index;
	public:
		Contact(void);
		~Contact(void);
		int 	set_fname();
		int 	set_lname();
		int 	set_nickname();
		int		set_num();
		int 	set_darkest_secret();
		void	print_contact();
		int		is_empty();
		void	set_index(int i);
		void	get_contact();
};

int is_digits(std::string str);
#endif