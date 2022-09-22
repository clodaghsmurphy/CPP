#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

# include "Bureaucrat.hpp"
# include "Form.hpp"

class Bureaucrat;

class ShrubberyCreationForm : public Form{
    private:
    std::string target;
    public:
    /*---------CANONICAL ShrubberyCreationForm -----------------*/
    ShrubberyCreationForm(const std::string target);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm(const ShrubberyCreationForm &obj);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs);
    /*---------CANONICAL ShrubberyCreationForm -----------------*/
    void                executeForm(Bureaucrat const &executor) const;
};

#endif