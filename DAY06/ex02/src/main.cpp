
# include "Identify.hpp"

int main()
{
    std::cout << "POINTER TEST" << std::endl;
    Base *_base;

    _base = generate();
    identify(_base);
    std::cout << std::endl;
    std::cout << "REF TEST" << std::endl;
    delete _base;
    _base = generate();
    identify(*_base);
    delete _base;
}