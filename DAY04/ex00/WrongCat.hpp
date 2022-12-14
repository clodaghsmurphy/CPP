# ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	public:
		WrongCat();
		~WrongCat();
		WrongCat &operator=(const WrongCat &rhs);
		WrongCat(const WrongCat &obj);
		void	makeSound() const;
};

# endif