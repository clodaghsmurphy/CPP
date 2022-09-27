# include "Identify.hpp"

Base *generate(void)
{
    int randnum;
    static int  i= 1;
    Base *res = NULL;
    if (i == 1)
        srand(time(NULL) * i);
    i++;
    randnum = std::rand() % 3;
    switch (randnum)
    {
        case 0:
        {
            return res = new A();
            break;
        }
        case 1:
        {
            return res = new B();
            break ;
        }
        case 2:
        {
            return res = new C();
            break;
        }
    }
    return res;
}

void    identify(Base *p)
{
    //Base *bp = dynamic_cast<Base *>(p);

    A* a_ptr = dynamic_cast<A *>(p);
    if (a_ptr != NULL)
      {
       std::cout << "🇦 : Pointer passed is an A class" << std::endl;
        return ;
    }
    B* b_ptr = dynamic_cast<B *>(p);
    if (b_ptr != NULL)
    {
       std::cout << "🅱️ : Pointer passed is an B class" << std::endl;
        return ;
    }
    C* c_ptr = dynamic_cast<C *>(p);
    if (c_ptr != NULL)
       {
        std::cout << "🇨 : Pointer passed is an C class" << std::endl;
        return ;
    }
}

void    identify(Base &p)
{
    //Base *bp = dynamic_cast<Base *>(&p);
    try
    {
        A &a = dynamic_cast<A &>(p);
        std::cout << "🇦 : Reference passed is an A class" << std::endl;
        (void)a;

    }catch (std::exception e)
    {
        try{
            B &b =dynamic_cast<B &>(p);
            std::cout << "🅱️ : Reference passed is an B class" << std::endl;
            (void)b;
        }
        catch (std::exception e)
         {
            try {
                C &c = dynamic_cast<C &>(p);
                std::cout << "🇨 : Reference passed is an C class" << std::endl;
                (void)c;
            }
            catch (std::exception e)
            {
                std::cout << e.what() << std::endl;
            }
        }  
    }
}