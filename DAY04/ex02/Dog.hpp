#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
public:
	Dog();
	virtual ~Dog();
	Dog &operator=(const Dog &rhs);
	Dog(const Dog &obj);
	void	makeSound() const;
	private:
	Brain *_brain;
};

#endif