#ifndef FORM_HPP
#define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
    private:
    const std::string name;
    bool    fsigned;
    const unsigned int grade_sign;
    const unsigned int  grade_exec;
    public:
    /*---------CANONICAL FORM -----------------*/
    Form(std::string name, unsigned int gsign, unsigned int gexec);
    ~Form();
    Form(const Form &obj);
    Form &operator=(const Form &rhs);
    /*---------FUNCTIONS -----------------*/
    void                beSigned(Bureaucrat _bt);
    /*---------------GETTERS ------------------*/
    unsigned int        getGradeSign() const;
    unsigned int        getGradeExec() const;
    const               std::string getName() const;
    bool                getFsigned() const ;
    /*---------------EXCEPTIONS ------------------*/
    class GradeTooHigh : public std::exception{
    public:
    virtual const char * what() const throw(){
        return "Grade too high. ";
    }
    };
    class GradeTooLow : public std::exception {
    public:
        virtual const char * what() const throw(){
            return "Grade too low. ";
        }
    };
};

std::ostream& operator<<(std::ostream& os, const Form& form);

#endif
