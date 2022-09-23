# include "scalar.hpp"
# include <string>

int    infinity_cases(std::string str)
{
   std::string infs[5] = {"-inff", "+inff", "nanf", "-inf", "nan"};
   for (int i = 0; i < 5; i++)
   {
        if (infs[i] == str)
        {
            std::cout << "char: impossible" << std::endl;
            std::cout << "int: impossible" << std::endl;
            std::cout << "float: nanf" << std::endl;
            std::cout << "char: nan" << std::endl;
            return (1);
        }
   }
   return (0);
}

int is_char(std::string str)
{
    if (str.length() == 1)
    {
        if (isdigit(str[0])
        {
            
        }
    }

}
void    covert(std::string type)
{
    (void)type;
    //std::cout << isFloat(type) << std::endl;
}


