# include "scalar.hpp"

void printBits(size_t const size, void const *const ptr)
{
    unsigned char *b = (unsigned char *)ptr;
    unsigned char byte;
    int i, j;

    for (i = size - 1; i >= 0; i--)
    {
        for (j = 7; j >= 0; j--)
        {
            byte = (b[i] >> j) & 1;
            printf("%u", byte);
        }
    }
    puts("");
}

void    Scalar::check_overflows(std::string str)
{
    //double res = std::strtod(str.c_str(), NULL); 
    if (this->is_char == 1)
    {
        char res = static_cast<char>(str[0]);
        std::cout << "bits :" ;
        printBits(1, &res);
         print_char(res);
        print_int(static_cast<int>(res));
        std::cout << "bits :";
        printBits(4, &res);
        print_float(static_cast<float>(res));
        std::cout << "bits :";
        printBits(4, &res);
        print_double(static_cast<double>(res));
        std::cout << "bits :";
        printBits(8, &res);
    }
    if (this->is_int == 1)
    {
        double res = std::strtod(str.c_str(), NULL);
        std::cout << "bits :";
        printBits(4, &res);
        print_char(static_cast<char>(res));
        if (res > std::numeric_limits<int>::max() \
        || res < std::numeric_limits<int>::min())
            std::cout << "int : impossible" << std::endl;   
        else
            print_int(static_cast<int>(res));
         if (res > std::numeric_limits<float>::max() \
        || res < -std::numeric_limits<float>::max())
        {
            std::cout << "float : impossible" << std::endl;
        }
        else
            print_float(static_cast<float>(res));
        if (res > std::numeric_limits<double>::max() || res < -std::numeric_limits<double>::max())
        {
             std::cout << "double : impossible" << std::endl;
         }
        else
            print_double(static_cast<double>(res));
    }
    if (this->is_float == 1)
    {
        double res = std::strtod(str.c_str(), NULL);
        print_char(static_cast<char>(res));
        if (res > std::numeric_limits<int>::max() \
        || res < std::numeric_limits<int>::min())
            std::cout << "int : impossible" << std::endl; 
        else
            print_int(static_cast<int>(res));

        if (res > std::numeric_limits<float>::max() \
        || res < -std::numeric_limits<float>::max())
        {
            std::cout << "float : impossible" << std::endl;
        }
        else
            print_float(static_cast<float>(res));
        if (res > std::numeric_limits<double>::max() || res < -std::numeric_limits<double>::max())
        {
             std::cout << "double : impossible" << std::endl;
         }
        else
            print_double(static_cast<double>(res));
    }
    if (this->is_double == 1)
    {
        double res = std::strtold(str.c_str(), NULL);
        print_char(static_cast<char>(res));
        if (res > std::numeric_limits<int>::max() \
        || res < std::numeric_limits<int>::min())
            std::cout << "int : impossible" << std::endl; 
        else
            print_int(static_cast<int>(res));

        if (res > std::numeric_limits<float>::max() \
        || res < -std::numeric_limits<float>::max())
        {
            std::cout << "float : impossible" << std::endl;
        }
        else
        {
            print_float(static_cast<float>(res));
        }
        if (res > std::numeric_limits<double>::max() || res < -std::numeric_limits<double>::max())
        {
            std::cout << "double : impossible" << std::endl;
        }
        else
            print_double(static_cast<double>(res));
    }
}