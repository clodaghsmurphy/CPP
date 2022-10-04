# include "Span.hpp"

void    test1()
{
    try {
        Span _span(5);

        _span.addNumber(5);
        _span.addNumber(2);
        _span.addNumber(7);
        _span.addNumber(1);
        _span.printVec();
        std::cout << "\033[1m\033[34mSHORTEST SPAN : \033[0m\033[37m" << _span.shortestSpan() << std::endl;
       std::cout << "\033[1m\033[34mLONGEST SPAN : \033[0m\033[37m" << _span.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

void test2()
{
    try {
        Span _span(5);
        for (int i = 0; i < 5; i++)
            _span.addNumber(5);
        _span.printVec();
        std::cout << "\033[1m\033[34mSHORTEST SPAN : \033[0m\033[37m" << _span.shortestSpan() << std::endl;
        std::cout << "\033[1m\033[34mLONGEST SPAN : \033[0m\033[37m" << _span.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

void test3()
{
    try {
        Span _span(5);
        for (int i = 0; i < 6; i++)
            _span.addNumber(5);
        _span.printVec();
        std::cout << "\033[1m\033[34mSHORTEST SPAN : \033[0m\033[37m" << _span.shortestSpan() << std::endl;
        std::cout << "\033[1m\033[34mLONGEST SPAN : \033[0m\033[37m" << _span.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

void test4()
{
    try {
        Span _span(5);
        _span.addNumber(5);
        _span.printVec();
        std::cout << "\033[1m\033[34mSHORTEST SPAN : \033[0m\033[37m" << _span.shortestSpan() << std::endl;
        std::cout << "\033[1m\033[34mLONGEST SPAN : \033[0m\033[37m" << _span.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

void test5()
{
    try {
        Span _span(5);
        std::vector<int>::iterator itb;
        std::vector<int>::iterator ite;

        itb = _span.getVec().begin();
        ite = _span.getVec().end();
        _span.addRange(itb, ite);
        _span.printVec();
        std::cout << "\033[1m\033[34mSHORTEST SPAN : \033[0m\033[37m" << _span.shortestSpan() << std::endl;
        std::cout << "\033[1m\033[34mLONGEST SPAN : \033[0m\033[37m" << _span.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}


int main()
{
    srand(time(NULL));
    std::cout <<  "\033[1m\033[35m TEST 1 🧪 \033[0m\033[37m" <<std::endl;
    test1();
    std::cout << std::endl;
    std::cout <<  "\033[1m\033[35m TEST 2 🧪 \033[0m\033[37m" <<  std::endl;
    test2();
    std::cout << std::endl;
    std::cout <<  "\033[1m\033[35m TEST 3 🧪 \033[0m\033[37m" <<  std::endl;
    test3();
    std::cout << std::endl;
    std::cout <<  "\033[1m\033[35m TEST 4 🧪 \033[0m\033[37m" <<  std::endl;
    test4();
    std::cout << std::endl;
    std::cout <<  "\033[1m\033[35m TEST 5 🧪 \033[0m\033[37m" <<  std::endl;
    test5();
    std::cout << std::endl;  
}