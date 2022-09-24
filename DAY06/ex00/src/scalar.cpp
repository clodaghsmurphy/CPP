# include "scalar.hpp"
# include <string>

Scalar::Scalar() : is_char(0),  is_float(0), is_double(0), is_int(0)
{
    return ;
}

Scalar::~Scalar()
{

}

Scalar  &Scalar::operator=(const Scalar &rhs)
{
    this->is_char = rhs.is_char;
    this->is_float = rhs.is_float;
    this->is_int = rhs.is_int;
    this->is_double = rhs.is_double;
    return *this;
}


Scalar::Scalar(const Scalar &obj)
{
    *this = obj;
}

int    infinity_cases(const std::string str)
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

void    Scalar::get_type(const std::string str)
{
    if (ft_is_char(str) == 1)
    {
        check_overflows(str);
        return ;
    }
    if (ft_is_int(str) == 1)
   {
        check_overflows(str);
        return ;
    }
    if (ft_is_double(str) == 1)
     {
        check_overflows(str);
        return ;
    }
    if (ft_is_float(str) == 1)
    {
        check_overflows(str);
        return ;
    }
    std::cout << "Error : input must be char, float, int or double" << std::endl;
    return ;
}

void    Scalar::check_overflows(const std::string str)
{
    if (this->is_char == 1)
        print_char(static_cast<char>(str[0]));
   // print_int(str);
   // print_float(str);
   // print_double(str);
}

/* void    Scalar::print_int(const std::string str)
{
    int res = static_cast<int>(str);
    if (res > std::numeric_limits<int>::max() \
    || res < std::numeric_limits<int>::min())
        std::cout << "int : impossible" << std::endl;
    std::cout << "int : " << res << std::endl;
}
 */
void    Scalar::print_char(char res)
{

    if (res > std::numeric_limits<int>::max() \
    || res < std::numeric_limits<int>::min())
        std::cout << "char : impossible" << std::endl;
    std::cout << "char : " << res << std::endl;
}
/* 
void    Scalar::print_float(const std::string str)
{
    char res = static_cast<float>(str);
    if (res > std::numeric_limits<int>::max() \
    || res < std::numeric_limits<int>::min())
        std::cout << "int : impossible" << std::endl;
    std::cout << "int : " << res << std::endl;
}

void    Scalar::print_double(const std::string str)
{
    char res = static_cast<float>(str);
    if (res > std::numeric_limits<int>::max() \
    || res < std::numeric_limits<int>::min())
        std::cout << "int : impossible" << std::endl;
    std::cout << "int : " << res << std::endl;
}
 */

bool Scalar::ft_is_char(std::string str)
{
    std::cout << str[0][1][2]  << std::endl;
    if (str.length() == 1)
    {
        if (!isdigit(str[0]))
        {
            this->is_char = 1;
            return (1);
        }
    }
    return (0);
}

bool Scalar::ft_is_int(const std::string str)
{
    int i = 0;

    if (str[i] == '+' || str[i] == '-')
        i++;
    while (i < ((int)str.length() - 1))
    {
        if (!isdigit(str[i]))
            return (0);
        i++;
    }
    this->is_int = 1;
    return (1);
   
}

bool Scalar::ft_is_double(const std::string str)
{
    int i = 0;
    int dec = 0;

    if (str[i] == '+' || str[i] == '-')
        i++;
    while (i < ((int)str.length() - 1))
    {
        if (!isdigit(str[i]) || dec == 2)
            return (0);
        if (str[i] == '.')
            dec++;
        i++;
    }
    if (dec == 1)
    {
        this->is_double= 1;
        return (1);
    }
    else
        return (0);
}

bool    Scalar::ft_is_float(const std::string str)
{
    int dec = 0;
    int i = 0;

    if (str[i] == '+' || str[i] == '-')
        i++;
    while (i < (int)str.length() - 2)
    {
        if (!isdigit(str[i]) || dec == 2)
            return (0);
        if (str[i] == '.')
            dec++;
        i++;
    }
    if (dec == 1 && str[i] == 'f')
    {
        this->is_float = 1;
        return (1);
    }
    else
        return(0);
}

void    covert(std::string type)
{
    (void)type;
    //std::cout << isFloat(type) << std::endl;
}


