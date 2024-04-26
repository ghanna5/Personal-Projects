#include <iostream>

int main(int argc, char const *argv[])
{
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < i + 1; j++)
            std::cout << "*";

        std::cout << std::endl;
    }
std::cout << std::endl;

    for(int i = 11; i >= 0; i--)
    {
        for(int j = 0; j < i - 1; j++)
            std::cout << "*";

        std::cout << std::endl;
    }
    for(int i = 0; i < 10; i++)
    {
        for(int j = 1; j < i + 1; j++)
            std::cout << " ";
            
        for(int x = 10; x > i; x--)
            std::cout << "*";
            
        std::cout << std::endl;
    }
std::cout << std::endl;

    for(int i = 10; i > 0; i--)
    {
        for(int j = 0; j < i - 1; j++)
            std::cout << " ";

        for(int x = 10; x > i - 1; x--)
            std::cout << "*";
            
        std::cout << std::endl;;
    }
    return 0;
}