# include "iter.hpp"
# include <string.h>

int main()
{
    int int_array[5] = {1, 2, 3, 4, 5};
    const char ch_array[6] = "hello";
    float fl_array[3] = {2.5f, 3.4f, 4.0f};

    std::cout << "\033[1m\033[36m INT ARRAY " << std::endl;
    ::iter(int_array, sizeof(int_array) / sizeof(int), &print);
    std::cout << "\033[1m\033[36m CHAR ARRAY " << std::endl;
    ::iter(ch_array, strlen(ch_array), &print);
    std::cout << "\033[1m\033[36m FLOAT ARRAY " << std::endl;
    ::iter(fl_array, sizeof(fl_array) / sizeof(int), &print);
}