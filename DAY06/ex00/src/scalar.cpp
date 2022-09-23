# include "scalar.hpp"
# include <string>


bool isFloat(std::string str) {
    try {
        float floatCheck = std::stof(str);
        return true;
    }
    catch (...) {
        return false;
    }
}
void    covert(std::string type)
{

    std::cout << isFloat(type) << std::endl;
}


