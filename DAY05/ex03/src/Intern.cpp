# include "Intern.hpp"

Intern::Intern()
{
    //std::cout << "default constructor caleld for "  << std::endl;
}


Intern::~Intern()
{
    //std::cout << "default destructor caleld for "  << std::endl;
}

Intern &Intern::operator=(const Intern &rhs)
{
	std::cout << "Intern copy assingmeent operator called" << std::endl;
    (void)rhs;
	return *this;
}
Intern::Intern(const Intern &obj)
{
    *this = obj;
	//std::cout << "Intern copy constructor called" << std::endl;
}

Form *Intern::new_shrub(std::string name)
{
   Form *res;

    res = new ShrubberyCreationForm(name);
    return res;
}

Form *Intern::new_robot(std::string name)
{
    Form *res;

    res = new RobotomyRequestForm(name);
    return res;
}

Form *Intern::new_president(std::string name)
{
    Form *res;

    res = new PresidentialPardonForm(name);
    return res;
}

int     Intern::get_num(std::string name)
{
    std::string forms[3] = {"robotomy request", "shrubbery creation", "presidential pardon"};
    for (int i = 0; i < (int)name.length(); i++)
        name[i] = tolower(name[i]);
    for (int j = 0; j < 3; j++)
    {
        if (name == forms[j])
            return j;
    }
    return (-1);


}

Form *Intern::makeForm(const std::string name, std::string target)
{
    typedef Form*(Intern::*func)(std::string);
    Form *res = NULL;

    int i = get_num(name);
    func funcs[3] = {&Intern::new_robot, &Intern::new_shrub, &Intern::new_president};
    if (i == -1)
    {
        throw noTarget();
        return res;
    }
    res = (this->*funcs[i])(target);
    std::cout << " 📝 Intern creates " << name << " form" << std::endl;
    return res;
}