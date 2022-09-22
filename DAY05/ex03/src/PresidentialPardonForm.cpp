# include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : Form(target, 25, 5),
target(target)
{
    //std::cout << "Default Presidential constructor called" << std::endl;
};

PresidentialPardonForm::~PresidentialPardonForm()
{
    //std::cout << "Robotomy destroyed" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj) : Form(obj)
{
    *this = obj;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
    this->target = rhs.target;
    return *this;
} 

void    PresidentialPardonForm::executeForm(Bureaucrat const &executor) const
{
     if (executor.getGrade() > this->Form::getGradeExec())
    {
        std::cout << "❌ Exec Form Error : ";
        throw GradeTooLow();
    }
    if (this->Form::getFsigned() == 0)
    {
        std::cout << "❌ Exec Form Error : ";
        throw ExecNotSign();
    }
    std::cout << "🎩 "<< target << " has been pardoned by Zaphod Breeblebrox" << std::endl;
}