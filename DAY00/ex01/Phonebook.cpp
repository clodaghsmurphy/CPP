
#include "Phonebook.hpp"

Phonebook::Phonebook(void)
{
	this->index = 0;
	return ;
}

Phonebook::~Phonebook(void)
{
	return ;
}

int	Phonebook::add_contact()
{
	std::string fname;
	std::string	lname;
	std::string num;
	std::string nick;
	std::string sec;

	if (this->contact[this->index].set_fname() == 1)
		return (1);
	if (this->contact[this->index].set_lname())
		return (1);
	if (this->contact[this->index].set_nickname())
		return (1);
	if (this->contact[this->index].set_num())
		return (1);
	if (this->contact[this->index].set_darkest_secret())
		return (1);
	this->contact[this->index].set_index(this->index);
	std::cout << "Contact created at index " << this-> index + 1 << std::endl;
	this->index++;
	return (0);
}

void Phonebook::search(){
	int	i;
	std::string index;

	i = 0;
	if (this->contact[i].is_empty())
		std::cout << "No contacts saved yet .. Please add contacts" << std::endl;
	while (!this->contact[i].is_empty() && i < 8)
	{
		this->contact[i].print_contact();
		i++;
	}
	std::cout << "Please enter index of desired contact" << std::endl;
	while (1){
		getline(std::cin, index);
		if (index.length() != 1)
		{
			std::cout << "I asked you to enter an index between 1 and 8 plz" << std::endl;
			continue; 
		}
		else if (index == "EXIT")
			exit(0);
		else if (index[0] < '1' || index[0] > '8')
		{
			std::cout << "index can only between 1 and 8" << std::endl;
			continue ;
		}
		else 
		{
			this->contact[std::stoi(index) - 1].get_contact();
			break ;
		}

	}
}
