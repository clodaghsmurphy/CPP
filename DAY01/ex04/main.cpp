# include "header.hpp"

int main(int ac, char **av)
{
    std::ifstream               file;
    std::string                 buffer;
    std::string                 filename;
    std::string                 s1;
    std::string                 s2;

    if (ac != 4 || strlen(av[1]) == 0 || strlen(av[2]) == 0 || strlen(av[3]) == 0)
    {
        std::cout << "Please enter file name then string to find and the the string you want to replace it with" << std::endl;
        return (1);
    }
    filename = av[1];
    s1 = av[2];
    s2 = av[3];

    file.open(av[1]);
    if (file.fail())
    {
        std::cout << "File Error : invalid file" << std::endl;
        return (1);
    }
    while (std::getline(file, buffer)){
        replace(filename, buffer, s1, s2);
    }
    file.close();
    return (0);
}

void replace(std::string file, std::string &buffer, std::string s1, std::string s2)
{
    int found = 0;
    int end = 0;
    int i = 0;
    std::string ending= ".replace";
    std::string filen= file + ending;
    std::ofstream outfile(filen.c_str());
    static std::string res;

    found = buffer.find(s1);
    if (found == -1)
        {
            res = res + buffer.substr(i, buffer.length());
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
            break ;
        }
        else
            found += + i;
    }
    res.push_back('\n');
    outfile << res;
}