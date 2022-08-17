# include <iostream>
# include <string>

int main()
{
    std::string string;
    std::string *stringPTR = &string;
    std::string &stringREF = string;

    string = "HI THIS IS BRAIN";
    std::cout << "String address is " << &string << std::endl;
    std::cout << "String pointer address is " << &stringPTR << std::endl;
    std::cout << "String reference address is " << &stringREF << std::endl;
    std::cout << std::endl;
    std::cout << "String value is " << string << std::endl;
    std::cout << "String pointer value is " << *stringPTR << std::endl;
    std::cout << "String reference value is " << stringREF << std::endl;
    return (0);
}