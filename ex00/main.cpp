#include <iostream>
#include <string>
#include <locale>

int main(int argc, char const *argv[])
{
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else 
    {
        for (int i = 1; i < argc; i++)
        {

            std::string s1(argv[i]);
            s1 += ' ';
            for (size_t j = 0; j < s1.length(); j++)
                std::cout << (char)std::toupper(s1[j]);
        }
        
    }
    std::cout << std::endl;
    return 0;
}