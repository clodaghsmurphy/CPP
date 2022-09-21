#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

# include "Bureaucrat.hpp"
# include "Form.hpp"

class Bureaucrat;

class RobotomyRequestForm {
    private:
    const std::string name;
    bool    fsigned;
    const unsigned int grade_sign;
    const unsigned int  grade_exec;
    public:
    /*---------CANONICAL RobotomyRequestForm -----------------*/
    RobotomyRequestForm(std::string name, unsigned int gsign, unsigned int gexec);
    ~RobotomyRequestForm();
    RobotomyRequestForm(const RobotomyRequestForm &obj);
    RobotomyRequestForm &operator=(const RobotomyRequestForm &rhs);
};

#endif