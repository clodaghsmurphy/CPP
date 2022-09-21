#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <fstream>
# include <exception>
# include "Form.hpp"

class Form;

class Bureaucrat {
    private:
    const std::string _name;
    unsigned int    _grade;
    public:
    class GradeTooHigh : public std::exception{
    public:
    virtual const char * what() const throw(){
        return "Grade too high. Please choose a grade between 1 and 150";
    }
    };
    class GradeTooLow : public std::exception {
    public:
        virtual const char * what() const throw(){
            return "Grade too low. Please choose a grade between 1 and 150";
        }
    };
    Bureaucrat(const std::string name, unsigned int grade);
    ~Bureaucrat();
    Bureaucrat(const Bureaucrat &obj);
    Bureaucrat &operator=(const Bureaucrat &rhs);
    const std::string getName() const;
    void        setName(std::string name) const;
    void        upGrade();
    void        downGrade();
    unsigned int getGrade() const; 
    void        signForm(Form &form) const;
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& _bt);
# endif