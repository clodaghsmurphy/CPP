#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFROM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class PresidentialPardonForm {
    private:
    const std::string name;
    bool    fsigned;
    const unsigned int grade_sign;
    const unsigned int  grade_exec;
    public:
    /*---------CANONICAL PresidentialPardonForm -----------------*/
    PresidentialPardonForm(std::string name, unsigned int gsign, unsigned int gexec);
    ~PresidentialPardonForm();
    PresidentialPardonForm(const PresidentialPardonForm &obj);
    PresidentialPardonForm &operator=(const PresidentialPardonForm &rhs);
};

#endif