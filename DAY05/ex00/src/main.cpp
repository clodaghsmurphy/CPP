# include "Bureaucrat.hpp"

int main()
{
    Bureaucrat *bob = new Bureaucrat("Bob", 0);
    Bureaucrat *joe = new Bureaucrat("Joe", 155);

    bob->getName();
    bob->getGrade();
    joe->getName();
    joe->getGrade();
    return (0);
}