# include "Form.hpp"

Form::Form(std::string name, unsigned int gsign, unsigned int gexec) : name(name), fsigned(0), grade_sign(gsign), grade_exec(gexec)
{
    return ;
}

Form::~Form()
{
    std::cout << "Form destructor called for " << this->name << std::endl;
}

Form::Form(const Form &obj): name(obj.name), fsigned(obj.fsigned), grade_sign(obj.grade_sign), grade_exec(obj.grade_exec){
    return ;
}

Form    &Form::operator=(const Form &rhs)
{
    this->fsigned = rhs.fsigned;
    return *this;
}

void    Form::beSigned(Bureaucrat _bt)
{
    try {
        if (_bt.getGrade() <= 0)
            throw GradeTooHigh();
    }
    catch (std::exception &e){
        std::cout << "❌ " <<  _bt.getName() << " couldn't sign " << this->name << " because " << e.what() << std::endl;
        return ;
    }
    try {
        if (_bt.getGrade() > 150)
            throw GradeTooLow();
    }
    catch (std::exception &e){
        std::cout <<  "❌ " << _bt.getName() << " couldn't sign " << this->name << " because " << e.what() << std::endl;
        return ;
    }
      try {
        if (_bt.getGrade() > this->grade_sign)
            throw GradeTooLow();
    }
    catch (std::exception &e){
        std::cout <<  "❌ " << _bt.getName() << " couldn't sign " << this->name << " because " << e.what() << std::endl;
        return ;
    }
    this->fsigned = 1;
    std::cout << "✅ " << _bt.getName() << " signed" << this->name << std::endl;
}

unsigned int     Form::getGradeSign() const
{
    return this->grade_sign;
}

unsigned int     Form::getGradeExec() const
{
    return this->grade_exec;
}

const std::string Form::getName() const {
    return this->name;
}

bool    Form::getFsigned() const
{
    return this->fsigned;
}

void    Form::setFsigned(bool sign)
{
    this->fsigned = sign;
}

std::ostream& operator<<(std::ostream& os, const Form& form)
{
    std::cout << "      📝FORM STATS📝      " << std::endl;
    os << "Form " <<  form.getName() << std::endl;
    os << "signed " << form.getFsigned() << std::endl;
    os << "grade sign  " << form.getGradeSign() << std::endl;
    os << "grade exec " << form.getGradeExec() << std::endl;
    std::cout << std::endl;

    return (os);
}