# include "Animal.hpp"
# include "Dog.hpp"
# include "Cat.hpp"
# include "WrongCat.hpp"
# include "WrongAnimal.hpp"

int main()
{
	
	//const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	//meta->makeSound();

	delete(i);
	//delete(meta);

	const WrongAnimal *meta2 = new WrongAnimal();
	const WrongAnimal *i2 = new WrongCat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i2->getType() << " " << std::endl;
	i2->makeSound();
	j->makeSound();
	meta2->makeSound();

	delete(i2);
	delete (j);
	delete(meta2);
}