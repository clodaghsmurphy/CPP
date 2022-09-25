#ifndef BRAIN_HPP
# define BRAIN_HPP

# include "Animal.hpp"


class Brain {
	private:
	std::string idea[100];
	public:
	Brain();
	~Brain();
	Brain &operator=(const Brain &rhs);
	Brain(const Brain &obj);
};

#endif