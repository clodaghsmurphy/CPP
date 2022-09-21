#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

# include "Bureaucrat.hpp"
# include "Form.hpp"

class Bureaucrat;

class ShrubberyCreationForm : public Form{
    private:
    const std::string name;
    bool    fsigned;
    const unsigned int grade_sign;
    const unsigned int  grade_exec;
    public:
    /*---------CANONICAL ShrubberyCreationForm -----------------*/
    ShrubberyCreationForm(const std::string &target);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm(const ShrubberyCreationForm &obj);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs);
    /*---------CANONICAL ShrubberyCreationForm -----------------*/
    void    beSigned(Bureaucrat _bt);
};

#endif