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

void test6()
{
    try {
        Span _span(50000);
        std::vector<int> vec1;
        std::vector<int>::iterator itb;
        std::vector<int>::iterator ite;

        for (unsigned int i = 0; i < 50000; i++)
            vec1.push_back(rand()%100);
        itb = vec1.begin();
        ite = vec1.end();
        _span.addRange(itb, ite);
        std::cout << "\033[1m\033[34mVEC SIZE : \033[0m\033[37m" << _span.getVec().size() << std::endl;
        //_span.printVec();
        std::cout << "\033[1m\033[34mSHORTEST SPAN : \033[0m\033[37m" << _span.shortestSpan() << std::endl;
        std::cout << "\033[1m\033[34mLONGEST SPAN : \033[0m\033[37m" << _span.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

void test7()
{
    Span sp = Span(5);

    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    sp.printVec();

    std::cout << "\033[1m\033[34mSHORTEST SPAN : \033[0m\033[37m" << sp.shortestSpan() << std::endl;
    std::cout << "\033[1m\033[34mLONGEST SPAN : \033[0m\033[37m" << sp.longestSpan() << std::endl;
    return ;
}

void test8()
{
    try {
        Span sp = Span(10);
        std::vector<int> vec1;
        std::vector<int>::iterator itb;
        std::vector<int>::iterator ite;

        for (unsigned int i = 0; i < 10; i++)
            vec1.push_back(rand()%100);
        itb = vec1.begin();
        ite = vec1.end();
        sp.addRange(itb, ite);
        sp.printVec();
        std::cout << "\033[1m\033[34mSHORTEST SPAN : \033[0m\033[37m" << sp.shortestSpan() << std::endl;
        std::cout << "\033[1m\033[34mLONGEST SPAN : \033[0m\033[37m" << sp.longestSpan() << std::endl;
        return ;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

void test9()
{
    try {
        Span sp = Span(5);
        std::vector<int> vec1;
        std::vector<int>::iterator itb;
        std::vector<int>::iterator ite;

        for (unsigned int i = 0; i < 10; i++)
            vec1.push_back(rand()%100);
        itb = vec1.begin();
        ite = vec1.end();
        sp.addRange(itb, ite);
        sp.printVec();
        std::cout << "\033[1m\033[34mSHORTEST SPAN : \033[0m\033[37m" << sp.shortestSpan() << std::endl;
        std::cout << "\033[1m\033[34mLONGEST SPAN : \033[0m\033[37m" << sp.longestSpan() << std::endl;
        return ;
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
    std::cout <<  "\033[1m\033[35m TEST 6 🧪 \033[0m\033[37m" <<  std::endl;
    test6();
    std::cout << std::endl;
    std::cout <<  "\033[1m\033[35m TEST 7 🧪 \033[0m\033[37m" <<  std::endl;
    test7();
    std::cout << std::endl;
    std::cout <<  "\033[1m\033[35m TEST 8 🧪 \033[0m\033[37m" <<  std::endl; 
    test8();
    std::cout << std::endl;
    std::cout <<  "\033[1m\033[35m TEST 9 🧪 \033[0m\033[37m" <<  std::endl; 
    test9();
    std::cout << std::endl;
}