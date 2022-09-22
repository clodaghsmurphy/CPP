# include "Bureaucrat.hpp"
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"


class Intern
{
    public:
    Intern();
    ~Intern();
    Intern(const Intern &obj);
    Intern &operator=(const Intern &rhs);

    Form *makeForm(const std::string name, std::string target);
    Form *new_robot(std::string name);
    Form *new_shrub(std::string name);
    Form *new_president(std::string name);
    int     get_num(std::string num);

    class noTarget : public std::exception{
    public:
    virtual const char * what() const throw(){
        return "❌ Wrong form name";
    }
    };

};