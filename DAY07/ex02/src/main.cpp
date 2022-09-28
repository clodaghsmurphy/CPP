# include "Array.hpp"

template<typename T>
std::ostream& operator<<(std::ostream& os, const Array<T>& arr) 
    {
         for (unsigned int i = 0; i < arr.ft_size(); i++)
        {
            os << arr[i] << " ";
        }
        os << std::endl;
        return os;
    }

int main()
{
   {
        Array<int> numbers(10);
        int* mirror = new int[10];
        srand(time(NULL));
        for (int i = 0; i < 10; i++)
        {
            const int value = rand() % 10;
            numbers[i] = value;
            mirror[i] = value;
        }
        //SCOPE
        {
            Array<int> tmp = numbers;
            Array<int> test(tmp);
            std::cout << "\033[1m\033[35mNUMBER \033[0m\033[37m" << std::endl;
            std::cout << &numbers << std::endl ;
            std::cout << numbers << std::endl;
            std::cout << "\033[1m\033[35mTEST COPY\033[0m\033[37m" << std::endl;
            std::cout << &test << std::endl;
            std::cout << test << std::endl;
            std::cout << "\033[1m\033[35mTMP ASSIGNMENT COPY\033[0m\033[37m" << std::endl;
            std::cout << &tmp << std::endl;
            std::cout << tmp << std::endl;
            std::cout << "\033[1m\033[35mMODIFYING TMP + TEST ARRAYS [0] INDEX \033[0m\033[37m" << std::endl;
            tmp[0] = 7;
            test[0] = 9;
            std::cout << "\033[1m\033[35mNUMBER ARRAY \033[0m\033[37m" << std::endl;
            std::cout << numbers ;
            std::cout << "\033[1m\033[35mTMP ARRAY \033[0m\033[37m" << std::endl;
            std::cout << tmp ;
            std::cout << "\033[1m\033[35mTEST ARRAY \033[0m\033[37m" << std::endl;
            std::cout << test << std::endl;
            
        }
        std::cout << "\033[1m\033[36mNUMBER ARRAY \033[0m\033[37m" << std::endl;
        std::cout << numbers ;
        std::cout << "\033[1m\033[36mMIRROR ARRAY \033[0m\033[37m" << std::endl;
        for (int i = 0; i < 10; i++)
        {
            std::cout << mirror[i] << " " ;
            if (mirror[i] != numbers[i])
            {
                std::cerr << "didn't save the same value!!" << std::endl;
                return 1;
            }
        }
        std::cout << std::endl << std::endl;
        std::cout << "\033[1m\033[31mEXCEPTION TESTING \033[0m\033[37m" << std::endl;
        std::cout << "\033[1m\033[31mINDEX -2 \033[0m\033[37m" << std::endl;
        try
        {
            numbers[-2] = 0;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        std::cout << "\033[1m\033[31mINDEX MAX \033[0m\033[37m" << std::endl;
        try
        {
            numbers[10] = 0;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        for (int i = 0; i < 10; i++)
        {
            numbers[i] = rand();
        }
        delete [] mirror;
        return 0;
    }
}