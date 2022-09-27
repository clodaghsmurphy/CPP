# include "whatever.hpp"

int main()
{
    std::cout << "\033[1m\033[35m <<<<<<<<<< 42 MAIN >>>>>>>> \033[37m" << std::endl;
    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    std::cout << "\033[1m\033[35m <<<<<<<<<<<<<< >>>>>>>>>>>>> \033[37m" << std::endl;
    std::cout << "\033[1m\033[35m <<<<<<<<<< MY MAIN >>>>>>>> \033[37m" << std::endl;
    const char *str = "helol";
    const char *str1 = "bye";
    ::swap( str,str1);
    std::cout << "j = " << str << ", i = " << str1 << std::endl;
    ::min(str, str1);

    return 0;
}