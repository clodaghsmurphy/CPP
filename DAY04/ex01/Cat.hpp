# ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal {
	public:
		Cat();
		virtual ~Cat();
		Cat &operator=(const Cat &rhs);
		Cat(const Cat &obj);
		void	makeSound() const;
};

# endif