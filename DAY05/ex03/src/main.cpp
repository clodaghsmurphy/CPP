# include "Bureaucrat.hpp"
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "Intern.hpp"

void    test1(){
    std::cout << std::endl;
    std::cout << "\033[1;35m////////////////TEST1 🧪//////////////\033[0m" << std::endl;
    try
    {
    Bureaucrat joe("Joe", 1);
    Intern bob;
    Form *form1 = bob.makeForm("shrubbery creation", "Tree");
    if (form1)
        std::cout << *form1;
    if (form1)
        joe.signForm(*form1);
    if (form1)
        form1->executeForm(joe);
    if (form1)
        delete form1;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

void    test2(){
    std::cout << std::endl;
    std::cout << "\033[1;35m////////////////TEST2 🧪//////////////\033[0m" << std::endl;
    try
    {
    Bureaucrat joe("Joe", 1);
    Intern bob;
    Form *form1 = bob.makeForm("Shrubbery Creation", "Tree");
    if (form1)
        std::cout << *form1;
    if (form1)
        joe.signForm(*form1);
    if (form1)
        form1->executeForm(joe);
    if (form1)
        delete form1;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

void    test3(){
    std::cout << std::endl;
    std::cout << "\033[1;35m////////////////TEST3 🧪//////////////\033[0m" << std::endl;
    try
    {
    Bureaucrat joe("Joe", 1);
    Intern bob;
    Form *form1 = bob.makeForm("robotomy request", "robot");
    if (form1)
        std::cout << *form1;
    if (form1)
        joe.signForm(*form1);
    if (form1)
    {
        form1->executeForm(joe);
        form1->executeForm(joe);
        form1->executeForm(joe);
        form1->executeForm(joe);
    }
    if (form1)
        delete form1;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

void    test4(){
    std::cout << std::endl;
    std::cout << "\033[1;35m////////////////TEST4 🧪//////////////\033[0m" << std::endl;
    try
    {
    Bureaucrat joe("Joe", 1);
    Intern bob;
    Form *form1 = bob.makeForm("my request", "robot");
    if (form1)
        std::cout << *form1;
    if (form1)
        joe.signForm(*form1);
    if (form1)
        form1->executeForm(joe);
    if (form1)
        delete form1;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

void    test5(){
    std::cout << std::endl;
    std::cout << "\033[1;35m////////////////TEST5 🧪//////////////\033[0m" << std::endl;
    try
    {
    Bureaucrat joe("Joe", 1);
    Intern bob;
    Form *form1 = bob.makeForm("presidential pardon", "robot");
    if (form1)
        std::cout << *form1;
    if (form1)
        joe.signForm(*form1);
    if (form1)
        form1->executeForm(joe);
    if (form1)
        delete form1;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}



int main()
{
    test1();
   test2();
   test3();
   test4();
   test5();

    return (0);
}