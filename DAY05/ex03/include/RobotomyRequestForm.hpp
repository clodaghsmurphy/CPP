#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

# include "Bureaucrat.hpp"
# include "Form.hpp"
# include <cstdlib>

class Bureaucrat;

class RobotomyRequestForm : public Form{
    private:
    std::string target;
    public:
    /*---------CANONICAL RobotomyRequestForm -----------------*/
    RobotomyRequestForm(const std::string target);
    ~RobotomyRequestForm();
    RobotomyRequestForm(const RobotomyRequestForm &obj);
    RobotomyRequestForm &operator=(const RobotomyRequestForm &rhs);

    void                executeForm(Bureaucrat const &executor) const;

};

#endif