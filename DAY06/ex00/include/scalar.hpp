#ifndef SCALAR_HPP
# define SCALAR_HPP

# include <iostream>
# include <string.h>
# include <cstdlib>
# include <string>
# include <ctype.h>
# include <limits>
# include <iomanip>

class Scalar{
    public:
        /*-------------CANONICAL-------------*/
        Scalar();
        ~Scalar();
        Scalar(const Scalar &obj);
        Scalar &operator=(const Scalar &rhs);
        /*-------------MEMBERs---------------*/
        void    get_type(const std::string str);
        void    print_int(const int res);
        void    check_overflows(std::string str);
        void    print_float(const float res);
        void    print_double(const double res);
        void    print_char(const char res);
        bool    ft_is_char(const std::string str);
        bool    ft_is_float(const std::string str);
        bool    ft_is_double(const std::string str);
        bool    ft_is_int(const std::string str);
    private:
        /*-------------ATRRIBUTES----------------*/
        bool    is_char;
        bool    is_float;
        bool    is_double;
        bool    is_int;
};

int    infinity_cases(const std::string str);

#endif