#include <iostream>

int main(int argc, char const *argv[])
{
    int n;

    std::cout << "Please enter where you want the countdown to start: ";
    std::cin >> n;

    std::cout << std::endl;

    while (n >= 1)
    {
        if((n % 5) > 0)
        {
            std::cout << n << std::endl;
        }

        if((n % 5) == 0)
        {
            std::cout << n << std::endl;
            std::cout << "Beep" << std::endl;
        }

        n--;
    }
    return 0;
}