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
    virtual ~Form();
    Form(const Form &obj);
    Form &operator=(const Form &rhs);
    /*---------FUNCTIONS -----------------*/
    virtual void                beSigned(Bureaucrat _bt);
    virtual void                executeForm(Bureaucrat const &executor) const = 0;
    /*--------------SETTERS---------------------*/
    void                setFsigned(bool sign);
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
    class ExecNotSign : public std::exception {
    public:
        virtual const char * what() const throw(){
            return "Cannot execute form: form not signed";
        }
    };
    class FileOpen : public std::exception {
    public:
        virtual const char * what() const throw(){
            return "Could not create file";
        }
    };
};

std::ostream& operator<<(std::ostream& os, const Form& form);

#endif
