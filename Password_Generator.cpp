#include <iostream>
#include <cstdlib>
#include <ctime>

char randomL[] = {"abcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*"};
int string_length = sizeof(randomL) - 1;

int main(int argc, char const *argv[])
{
    int number;
    srand(time(NULL));

    std::cout << "Please enter your preferred length for a password: ";
    std::cin >> number;

    for (int i = 0; i < number; ++i)
        std::cout << randomL [rand()% string_length];

    std::cout << std::endl;
    
    return 0;
}