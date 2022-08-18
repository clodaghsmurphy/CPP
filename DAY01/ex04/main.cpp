# include "header.hpp"

int main(int ac, char **av)
{
    std::ifstream               file;
    std::vector<std::string>   input;
    std::string                 buffer;
    std::string                 s1;
    std::string                 s2;
    unsigned int                vecSize;

    if (ac != 3 || strlen(av[1]) == 0 || strlen(av[2]) == 0)
    {
        std::cout << "Please enter string to find and the the string \
        you want to replace it with" << std::endl;
        return (1);
    }
    s1 = av[1];
    s2 = av[2];

    file.open("test.txt");
    if (file.fail())
    {
        std::cout << "File Error : invalid file" << std::endl;
        return (1);
    }
    while (std::getline(file, buffer)){
        replace(buffer, s1, s2);
        input.push_back(buffer);
    }
    vecSize = input.size();
    for (unsigned int i = 0; i < vecSize; i++)
        //std::cout << input[i] <<std::endl;
    file.close();
    return (0);
}

void replace(std::string &buffer, std::string s1, std::string s2)
{
    int found = 0;
    int end = 0;
    int i = 0;
    //int j = 0;
    //int k = 0;
    std::string filen= "test";
    std::string ending= ".replace";
    std::ofstream outfile("test.replace");
    static std::string res;

    found = buffer.find(s1);
    if (found == (int)std::string::npos)
        {
            std::cout << buffer.substr(i, found) << std::endl;
            outfile << buffer;
        }
    while (i != (int)buffer.length() && found != -1)
    {
        end = found + s1.length();
        res = res + buffer.substr(i, found - i) + s2;
        i = end;
        
        found = buffer.substr(i, buffer.length()).find(s1);
        if (found == -1)
        {
            res = res + buffer.substr(i, buffer.length());
        std::cout << res << std::endl;
            break;
        }
        else
            found += + i;
    }
    res.push_back('\n');
    if(!buffer[i])
        std::cout << res << std::endl;
    //std::cout << buffer << std::endl;
}