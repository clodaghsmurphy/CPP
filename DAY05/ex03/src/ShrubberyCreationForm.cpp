
# include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : Form(target, 145, 137), target(target)
{
    //std::cout << "Shrubbery constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
  //std::cout << "Shrubbery destructor called" << std::endl;
  return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj) : Form(obj)
{
    *this = obj;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
    this->target = rhs.target;
    return *this;
}

void  ShrubberyCreationForm::executeForm(Bureaucrat const &executor) const
{

    if (executor.getGrade() > this->Form::getGradeExec())
    {
        std::cout << "❌ Form Execute Form Error : ";
        throw GradeTooLow();
    }
    if (this->Form::getFsigned() == 0)
    {
        std::cout << "❌ Execute Form Error : ";
        throw ExecNotSign();
    } 
    const std::string fname = target + "_shubbery"; 
    std::ofstream res(fname.c_str());
    if (!res)
      throw FileOpen();
    std::cout << "🌳🌳 CREATING SHRUBBERY 🌳🌳" << std::endl;
    res << "               ,@@@@@@@," << std::endl
      << "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl
      << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl
      << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl
      << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl
      << "   %&&%/ %&\%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl
      << "   `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl
      << "       |o|        | |         | |" << std::endl
      << "       |.|        | |         | |" << std::endl
      << "    \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_" << std::endl;
}