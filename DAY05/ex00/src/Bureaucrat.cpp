# include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, unsigned int grade)
{
    std::cout << "Default constructor called for " << name << std::endl;
    this->_name = name;
    try {
        this->_grade = grade;
        if (this->_grade < 1)
            throw GradeTooHigh();
        else if (this->_grade > 150)
            throw GradeTooLow();
    }
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "default destructor caleld for " << this->_name << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs)
{
	std::cout << "Bureaucrat copy assingmeent operator called" << std::endl;
    this->_grade = rhs._grade;
	//this->name = rhs.getName();
	return *this;
}
Bureaucrat::Bureaucrat(const Bureaucrat &obj)
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	*this = obj;
}

const std::string  Bureaucrat::getName()
{
    return this->_name;
}

unsigned int  Bureaucrat::getGrade()
{
    return this->_grade;
}

