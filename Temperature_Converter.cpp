#include <iostream>

int main(int argc, char const *argv[])
{
    double num;
    double conversion1;
    double conversion2;
    char letter;

    std::cout << "Enter the temperature (number): ";
    std::cin >> num;

    std::cout << "Enter the unit of measurement (C = celsius, K = kelvin, F = farenheit): ";
    std::cin >> letter;
    letter = tolower(letter);

    if(letter == 'c')
    {
        conversion1 = ((num * 1.8) + 32);
        conversion2 = (num + 273.15);

        std::cout << num << "° celsius = " << conversion1 << "° farenheit" << std::endl;
        std::cout << num << "° celsius = " << conversion2 << "° kelvin" << std::endl;
    }
    else if(letter == 'f')
    {
        conversion1 = ((num - 32) * 5 / 9);
        conversion2 = ((num - 32) * 5 / 9 + 273.15);

        std::cout << num << "° farenheit = " << conversion1 << "° celsius" << std::endl;
        std::cout << num << "° farenheit = " << conversion2 << "° kelvin" << std::endl;
    }
    else if(letter == 'k')
    {
        conversion1 = (num - 273.15);
        conversion2 = ((num - 273.15) * 1.8 + 32);
        
        std::cout << num << "° kelvin = " << conversion1 << "° celsius" << std::endl;
        std::cout << num << "° kelvin = " << conversion2 << "° farenheit" << std::endl;
    }

    return 0;
}