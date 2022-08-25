# ifndef WRONGWrongANIMAL_HPP
# define WRONGWrongANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal{
	protected:
	std::string type;
	public:
		WrongAnimal(std::string type);
		WrongAnimal();
		virtual ~WrongAnimal();
		WrongAnimal &operator=(const WrongAnimal &rhs);
		WrongAnimal(const WrongAnimal &obj);
		void makeSound() const;
		std::string	getType() const;
};

# endif