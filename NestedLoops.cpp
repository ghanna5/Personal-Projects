#include <iostream>

int main(int argc, char const *argv[])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    std::cout << "\n";

    for(int i = 0; i <= 10; i++)
    {
        for (int j = 0; j <= i - 1; j++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}