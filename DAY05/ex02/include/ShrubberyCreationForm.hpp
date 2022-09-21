#ifndef SHRUBBERYREQUESTFORM_HPP
#define SHRUBBERYREQUESTFORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class ShrubberyRequestForm {
    private:
    const std::string name;
    bool    fsigned;
    const unsigned int grade_sign;
    const unsigned int  grade_exec;
    public:
    /*---------CANONICAL ShrubberyRequestForm -----------------*/
    ShrubberyRequestForm(std::string &target);
    ~ShrubberyRequestForm();
    ShrubberyRequestForm(const ShrubberyRequestForm &obj);
    ShrubberyRequestForm &operator=(const ShrubberyRequestForm &rhs);
};

#endif