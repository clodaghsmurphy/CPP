# include "Bureaucrat.hpp"
# include "Form.hpp"

class Form;

Bureaucrat::Bureaucrat(const std::string name, unsigned int grade) : _name(name)
{
    //std::cout << "Default constructor called for " << name << std::endl;
    if (grade < 1)
            throw GradeTooHigh();
   
    if (grade > 150)
            throw GradeTooLow();
    this->_grade = grade;

}

Bureaucrat::~Bureaucrat()
{
    //std::cout << "default destructor caleld for " << this->_name << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs)
{
	std::cout << "Bureaucrat copy assingmeent operator called" << std::endl;
    this->_grade = rhs._grade;
	return *this;
}
Bureaucrat::Bureaucrat(const Bureaucrat &obj) : _name(obj._name), _grade(obj._grade)
{
	//std::cout << "Bureaucrat copy constructor called" << std::endl;
}

const std::string  Bureaucrat::getName() const
{
    return _name;
}


unsigned int  Bureaucrat::getGrade() const
{
    return _grade;
}

void    Bureaucrat::upGrade()
{
    try {
        if ((this->_grade - 1) <= 0)
            throw GradeTooHigh();
    }
      catch (std::exception &e)
    {
        std::cout << " ❌ Uprade Error :";
        std::cout << e.what() << std::endl;
    }
    try {
         if ((this->_grade - 1) > 150)
            throw GradeTooLow();
    }
    catch (std::exception &e)
    {
        std::cout << " ❌ UpGRade Error :";
        std::cout << e.what() << std::endl;
    }
}

void    Bureaucrat::downGrade()
{
    try {
        if ((this->_grade + 1) <= 0)
            throw GradeTooHigh();
    }
      catch (std::exception &e)
    {
        std::cout << " ❌ Downgrade Error :";
        std::cout << e.what() << std::endl;
    }
    try {
         if ((this->_grade + 1) > 150)
            throw GradeTooLow();
    }
    catch (std::exception &e)
    {
        std::cout << "❌ DownGrade Error :";
        std::cout << e.what() << std::endl;
    }
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& _bt)
{
    std::cout << "      🤵BUREAUCRAT STATS🤵        " << std::endl;
    os << "Bureaucrat " <<  _bt.getName() << std::endl;
    os << "Grade : " << _bt.getGrade() << std::endl;
    std::cout << std::endl;
    return (os);
}

void    Bureaucrat::signForm(Form &form) const
{
    form.beSigned(*this);
}

void    Bureaucrat::executeForm(Form const &form)
{
    try {
        form.executeForm(*this);
    }
    catch (std::exception &e)
    {
        std::cout << "❌ Bureacrat execute form error : ";
        std::cout << e.what() << std::endl;
    }
}