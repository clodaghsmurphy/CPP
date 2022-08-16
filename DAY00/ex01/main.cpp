#include "Phonebook.hpp"
#include "Contact.hpp"
#include <cstdio>
#include <unistd.h>

int main(int ac, char **av)
{
	(void)ac;
	(void)av;
	Phonebook phoneBook;
	std::string input_line;
	while (input_line != "EXIT")
	{
		std::cout << "Please enter command" << std::endl;
		getline(std::cin, input_line);
		if (input_line == "EXIT")
			break ;
		if (phoneBook.index == 8)
			phoneBook.index = 0;
		if (input_line == "ADD")
		{
			if (phoneBook.add_contact() == 1)
			{
				std::cin.clear();
				break ;
			}
		}
		else if (input_line == "SEARCH")
			phoneBook.search();
	};
	return (0);
	
}