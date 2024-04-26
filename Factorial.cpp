#include <iostream>

unsigned long long fact(unsigned int);
unsigned long long fibrec(unsigned int);
unsigned long long fibit(unsigned int);
unsigned int getInput(const std::string&);  

int main(int argc, char const *argv[])
{
    std::cout << fact(50) << std::endl;

    std::cout << fibrec(50) << std::endl;

    std::cout << fibit(50) << std::endl;

    unsigned int n(getInput("Enter a value between 0 - 100: "));
    std::cout << fibit(n) << std::endl;

    return 0;
}

unsigned long long fact(unsigned int n)
{
    if(n <= 1) return 1;

    return n * fact(n - 1);
}

unsigned long long fibrec(unsigned int n)
{
    if(n <= 1) return n;

    return fibrec(n - 1) + fibrec(n - 2);
}

unsigned long long fibit(unsigned int n)
{
    unsigned long long t(0);
    unsigned long long l(1);
    unsigned long long temp(0);

    for (size_t i(0); i < n; ++i)
    {
        temp = l;
        l = l + t;
        t = temp;
    }
    return t;    
}

unsigned int getInput(const std::string& prompt)
{
    unsigned int inVal;
    std::cout << prompt;
    std::cin >> inVal;

    if(inVal <= 100) return inVal;

    std::cout << "Invalid value!!!\nTry again\n";
    return getInput(prompt);
}