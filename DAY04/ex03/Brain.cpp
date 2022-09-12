# include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Default Brain constructor called " << std::endl;
}

Brain::~Brain()
{
	std::cout << "Default Brain destructor called" << std::endl;
}

Brain::Brain(const Brain &obj)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = obj;
}

Brain &Brain::operator=(const Brain &rhs)
{

	std::cout << "Brain copy assingmeent operator called" << std::endl;
    (void)rhs;
	return *this;
}