#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

# include "Bureaucrat.hpp"
# include "Form.hpp"

class Bureaucrat;

class PresidentialPardonForm : public Form{
    private:
    std::string target;
    public:
    /*---------CANONICAL PresidentialPardonForm -----------------*/
    PresidentialPardonForm(const std::string name);
    ~PresidentialPardonForm();
    PresidentialPardonForm(const PresidentialPardonForm &obj);
    PresidentialPardonForm &operator=(const PresidentialPardonForm &rhs);

    void                executeForm(Bureaucrat const &executor) const;

};

#endif