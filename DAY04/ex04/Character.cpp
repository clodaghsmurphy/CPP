# include "Character.hpp"

Character::Character(std::string name) : ICharacter(name)
{
    //std::cout << "Character constructor called for " << this->name << std::endl;
	this->name = name;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = 0;
}

Character::~Character()
{
    //std::cout << "Character destructor called for" << this->name << std::endl;
	int	i = 0;

	while (i < 4 )
	{
		if (this->inventory[i])
			delete this->inventory[i];
		i++;
	}
	i = 0;
	for (size_t i = 0; i < this->trash.size(); i++ ) 
    {       
        delete this->trash[i];    
    }    
    this->trash.clear(); 


 }

Character::Character(const Character &obj) : ICharacter(obj.name)
{
	std::cout << "Character copy constructor called" << std::endl;
	*this = obj;
}

Character &Character::operator=(const Character &rhs)
{

	std::cout << "Character copy assingmeent operator called" << std::endl;
	for (int i = 0; i < 4 ; i++)
		this->inventory[i] = rhs.inventory[i];
	this->trash = rhs.trash;
	return *this;
}

std::string	const &Character::getName() const
{
	return this->name;
}

void	Character::equip(AMateria *m)
{
	int i = 0;

	
	while (i < 4 && this->inventory[i] != 0)
	{
		i++;
		if (this->inventory[i] == 0)
			break;
	}
	if (i >= 4)
	{
		std::cout << "No Materia space available" << std::endl;
		delete m;
		return ;
	}
	std::cout << m->getType() << " put at invertory position " << i <<std::endl;
	this->inventory[i] = m;
}

void	Character::unequip(int idx)
{
	AMateria *tmp;
	if (idx < 0 || idx >= 4)
	{
		std::cout << "Invalid inventory space" << std::endl;
		return ;
	}
	if (this->inventory[idx] == 0)
	{
		std::cout << "Nothing to unequip in the invetory space" << std::endl;
		return ;
	}
	
	std::cout << "Unequipped Materia " << this->inventory[idx]->getType() << " from invetory slot "
	<< idx << std::endl;
	tmp = this->inventory[idx];
	this->trash.push_back(this->inventory[idx]);
	this->inventory[idx] = 0;
}

void	Character::use(int idx, ICharacter &target)
{
	if (this->inventory[idx] == 0)
		std::cout << "No Materia in this invetory position" << std::endl;
	else
		this->inventory[idx]->use(target);
}
