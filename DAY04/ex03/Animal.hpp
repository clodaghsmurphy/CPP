# ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal{
	protected:
	std::string type;
	public:
		Animal(std::string type);
		Animal();
		virtual ~Animal();
		Animal &operator=(const Animal &rhs);
		Animal(const Animal &obj);
		virtual void makeSound() const = 0;
		std::string	getType() const;
};

# endif