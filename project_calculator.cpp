#include <iostream>
#include <string>

int main()
{
    std::string fname;
    std::string lname;
    std::string full_name;
    std::string sign;
    float num1;
    float num2;
    double sum;
    double difference;
    double product;
    double quotient;

    std::cout << "\nHello user!" << std::endl;

    std::cout << "Please enter your first name: ";
    std::cin >> fname;

    std::cout << "Please enter your last name: ";
    std::cin >> lname;

    full_name = fname + " " + lname;

    std::cout << "\nWelcome to the Calculator Program, " << full_name << "!" << std::endl;

    std::cout << "\nPlease select an operator (+ - * /): ";
    std::cin >> sign;

    std::cout << "Please enter a value: ";
    std::cin >> num1;

    std::cout << "Please enter another value: ";
    std::cin >> num2;

    if(sign == "+")
    {
        sum = num1 + num2;
        std::cout << num1 << " + " << num2 << " = " << sum << std::endl;
    }
    
    else if(sign == "-")
    {
        difference = num1 - num2;
        std::cout << num1 << " - " << num2 << " = " << difference << std::endl;
    }
        
    else if(sign == "*")
    {
        product = num1 * num2;
        std::cout << num1 << " * " << num2 << " = " << product << std::endl;
    }
        
    else if(sign == "/")
    {
        quotient = num1 / num2;
        std::cout << num1 << " / " << num2 << " = " << quotient << std::endl;
    }
    else
    {
        std::cout << "Error: Not a valid operator." << std::endl;
    }

    return 0;
}