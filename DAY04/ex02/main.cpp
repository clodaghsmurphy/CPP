# include "Animal.hpp"
# include "Dog.hpp"
# include "Cat.hpp"
# include "WrongCat.hpp"
# include "WrongAnimal.hpp"

int main()
{
	
	const Animal *j[100];

	for(int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
		{
			j[i] = new Dog();
			std::cout << "Dog mem address : " << &j[i] << std::endl;
		}
		else
		{
			j[i] = new Cat();
			std::cout << "Cat mem address : " << &j[i] << std::endl;
		}
	}
	for (int i = 0; i < 10; i++)
		delete j[i];
	return (0);
}