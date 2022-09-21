
# include "ShrubberyCreationForm.hpp"

ShubberyRequestFrom::ShubberyRequestFrom(const std::string &target) : grade_sign(145), grade_exec(137){
    const std::string fname = target + "_shubbery"; 
    ofstream res(fname);
    res << "                                             .
                                   .         ;
      .              .              ;%     ;;
        ,           ,                :;%  %;
         :         ;                   :;%;'     .,
,.        %;     %;            ;        %;'    ,;
  ;       ;%;  %%;        ,     %;    ;%;    ,%'
   %;       %;%;      ,  ;       %;  ;%;   ,%;'
    ;%;      %;        ;%;        % ;%;  ,%;'
     `%;.     ;%;     %;'         `;%%;.%;'
      `:;%.    ;%%. %@;        %; ;@%;%'
         `:%;.  :;bd%;          %;@%;'
           `@%:.  :;%.         ;@@%;'
             `@%.  `;@%.      ;@@%;
               `@%%. `@%%    ;@@%;
                 ;@%. :@%%  %@@%;
                   %@bd%%%bd%%:;
                     #@%%%%%:;;
                     %@@%%%::;
                     %@@@%(o);  . '
                     %@@@o%;:(.,'
                 `.. %@@@o%::;
                    `)@@@o%::;
                     %@@(o)::;
                    .%@@@@%::;
                    ;%@@@@%::;.
                   ;%@@@@%%:;;;.
               ...;%@@@@@%%:;;;;,..";
        res.close();
}

void    ShrubberyCreationForm::beSigned(Bureaucrat _bt)
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