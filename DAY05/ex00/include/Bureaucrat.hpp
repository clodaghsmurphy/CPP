#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>
class GradeTooHigh : public std::exception{
    public:
   //GradeTooHigh(char *msg) {}
    virtual const char * what() const throw(){
        return "Grade too high. Please choose a grade between 1 and 150";
    }
    };
  class GradeTooLow : public std::exception {
    public:
       // GradeTooLow(char *msg) {}
        virtual const char * what() const throw(){
            return "Grade too low. Please choose a grade between 1 and 150";
        }
    };


class Bureaucrat {
    private:
    const std::string _name;
    unsigned int    _grade;
    public:
    Bureaucrat(const std::string name, unsigned int grade);
    ~Bureaucrat();
    Bureaucrat(const Bureaucrat &obj);
    Bureaucrat &operator=(const Bureaucrat &rhs);
    const std::string getName();
    unsigned int getGrade();
    GradeTooHigh ex1;


  
};


# endif