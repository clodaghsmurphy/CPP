# include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : Form(target, 72, 45),
target(target)
{
    
};

RobotomyRequestForm::~RobotomyRequestForm()
{
    //std::cout << "Robotomy destroyed" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj) : Form(obj)
{
    *this = obj;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
    this->target = rhs.target;
    return *this;
} 

void    RobotomyRequestForm::executeForm(Bureaucrat const &executor) const
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
    std::cout << "🤖 Robotomizing ... 🤖" << std::endl;
    int randnum = (rand() % 2);

    if (randnum == 1)
        std::cout << "\033[0;32m ✅  " <<target << " has been robotomized successfuly \033[0m" << std::endl;
    else
        std::cout << "\033[0;31m ❌  " << target << " Robotomy failed '\033[0m" << std::endl;
}