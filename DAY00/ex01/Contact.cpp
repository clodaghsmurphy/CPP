
# include "Contact.hpp"
# include "Phonebook.hpp"
# include <unistd.h>

Contact::Contact(void)
{
	this->_index = -1;
	return ;
}

Contact::~Contact(void)
{
	return ;
}

int Contact::set_fname()
{
	std::string fname;
	
	std::cout << "Enter first name"  << std::endl;
	getline(std::cin, fname);
	while (fname.length() < 1 || std::cin.eof())
	{
		if (std::cin.eof() == 1)
			return (1);
		std::cout << "Oops, name empty.. Try again !" << std::endl;
		getline(std::cin, fname);
		}
		if (fname == "EXIT")
			exit(0);
		this->_first_name = fname;
		return (0);
}

int Contact::set_lname()
{
	std::string lname;

	std::cout << "Enter last name" << std::endl;
	getline(std::cin, lname);
	while (lname.length() < 1)
	{
		if (std::cin.eof() == 1)
			return (1);
		std::cout << "Oops, last name empty.. Try again !" << std::endl;
		getline(std::cin, lname);
		}
		if (lname == "EXIT")
			exit(0);
		this->_last_name = lname;
		return (0);
}

int Contact::set_darkest_secret()
{
	std::string darkest_secret;

	std::cout << "Enter your darkest secret 😈" << std::endl;
	getline(std::cin, darkest_secret);
	while (darkest_secret.length() < 1)
	{
		if (std::cin.eof() == 1)
			return (1);
		std::cout << "Oops, last name empty.. Try again !" << std::endl;
		getline(std::cin, darkest_secret);
		}
		if (darkest_secret == "EXIT")
			exit(0);
		this->_darkest_secret = darkest_secret;
		return (0);
}

int Contact::set_nickname()
{
	std::string nick_name;

	std::cout << "Enter nickname" << std::endl;
	getline(std::cin, nick_name);
	while (nick_name.length() < 1)
	{
		if (std::cin.eof() == 1)
			return (1);
		std::cout << "Oops, nickname empty.. Try again !" << std::endl;
		getline(std::cin, nick_name);
		}
		if (nick_name == "EXIT")
			exit(0);
		this->_nickname = nick_name;
		return (0);
}

int Contact::set_num()
{
	std::string num;

	std::cout << "Enter your 06 stp" << std::endl;
	getline(std::cin, num);
	while (num.length() < 1 || is_digits(num))
	{
		if (std::cin.eof() == 1)
			return (1);
		if (is_digits(num))
			std::cout <<  "Numbers not letters genius" << std::endl;
		else
			std::cout << "I said enter your number god dammit !" << std::endl;
		getline(std::cin, num);
		}
		if (num == "EXIT")
			exit(0);
		this->_phone_number = num;
		return (0);
}
int is_digits(std::string str)
{
	for (int i = 0; i < (int)str.length(); i++)
	{
		if (!std::isdigit(str[i]))
		{
			return (1);
		}
	}
	return (0);
}
	void Contact::set_index(int i)
	{
		this->_index = i + 1;
		return;
	}

	void Contact::print_contact(void)
	{
		if (this->_first_name.length() > 10)
			this->_first_name[9] = '.';
		if (this->_last_name.length() > 10)
			this->_last_name[9] = '.';
		if (this->_nickname.length() > 10)
			this->_nickname[9] = '.';
		std::cout << std::right << std::setw(10) << this->_index << "|";
		std::cout << std::right << std::setw(10) << this->_first_name.substr(0, 10) << "|";
		std::cout << std::right << std::setw(10) << this->_last_name.substr(0, 10) << "|";
		std::cout << std::right << std::setw(10) << this->_nickname.substr(0, 10) << "|" << std::endl;
		return;
	}

	int Contact::is_empty()
	{
		if (this->_index == -1)
			return (1);
		return (0);
	}

	void Contact::get_contact()
	{
		if (this->_index == -1)
			std::cout << "No contact found at entered index" << std::endl;
		else
		{
			std::cout << std::setw(15) << "FIRST NAME : ";
			std::cout << std::setw(10) << this->_first_name << std::endl;
			std::cout << std::setw(15) << "LAST NAME : ";
			std::cout << std::setw(10) << this->_last_name << std::endl;
			std::cout << std::setw(15) << "NICKNAME : ";
			std::cout << std::setw(10) << this->_nickname << std::endl;
			std::cout << std::setw(15) << "PHONE NUMBER : ";
			std::cout << std::setw(10) << this->_phone_number << std::endl;
			std::cout << std::setw(15) << "DARKEST SECRET : ";
			std::cout << std::setw(10) << this->_darkest_secret << std::endl;
		}
	}