# include "Harl.hpp"

Harl::Harl()
{
    return ;
}

Harl::~Harl()
{
    return ;
}
void    Harl::debug(){
    std::cout << "[ DEBUG ]" <<std::endl;
    std::cout <<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. "<< std::endl;
    std::cout << "I really do!" << std::endl;
    std::cout <<std::endl;
}

void    Harl::info(){
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
    std::cout << "You didn't put enough bacon in my burger!" << std::endl;
    std::cout << "If you did, I woudln't be asking for more!" << std::endl;
    std::cout << std::endl;
}

void    Harl::warning(){
    std::cout << "[ WARNING ]" << std::endl;
    std::cout <<"I think I deserve to have some extra bacon for free." << std::endl;
    std::cout << "I've been coming for years whereas you started working here since last month" << std::endl;
    std::cout << std::endl;
}

void    Harl::error(){
    std::cout << "[ ERROR ]" << std::endl;
    std::cout <<"This is unacceptable! I want to speak to the manager now." << std::endl;
    std::cout << std::endl;
}

void    Harl::complain(std::string string_level)
{
    switch(get_int(string_level))
    {
        case 1:
            this->debug();
            // fall through
        case 2:
            this->info();
            // fall through
        case 3:
            this->warning();
            // fall through
        case 4:
            this->error();
            break ;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl; 
    }
}

int get_int(std::string string_level)
{
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i= 0; i < 4; i++)
    {
        if (levels[i] == string_level)
            return (i + 1);
    }
    return (0);
}
