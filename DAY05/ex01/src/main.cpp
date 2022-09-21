# include "Bureaucrat.hpp"

void    test1(){
    try
    {
    Bureaucrat bob("Bob", 0);
    std::cout << bob;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

void test2(){
    try {
    Bureaucrat joe("Joe1", 155);
    std::cout << joe << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}


void test3(){
    try {
    Bureaucrat joe("Joe2", 150);
       std::cout << joe ;
    joe.downGrade();

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
   /* Bureaucrat *john = new Bureaucrat("John", 1);
    std::cout << john->getName() << std::endl; 
    std::cout << john->getGrade() << std::endl; ;
    john ->upGrade(); */
    return (0);
}