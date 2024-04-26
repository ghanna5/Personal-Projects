#include <iostream>
#include <string>

int main()
{
    std::string beverage;
    double bill;
    double water = 0.50, coke = 1, pepsi = 1.50, orange_juice = 2;
    double dollar_coins;
    double quarter_coins = 0.05;
    double dimes_coins;
    double nickles_coins;
    double pennies_coins;
    double amount_due;

    std::cout << "\nWelcome to the vending machine!\n" << std::endl;

    std::cout << "Water(A) = $0.50, Coke(B) = $1, Pepsi(C) = $1.50, Orange Juice(D) = $2" << std::endl;

    std::cout << "Please select the letter of the beverage you wish to receive: ";
    std::cin >> beverage;

    water = water * 100;
    coke = coke * 100;
    pepsi = pepsi * 100;
    orange_juice = orange_juice * 100;
    amount_due = 100 * bill - water;
    amount_due = 100 * bill - coke;
    amount_due = 100 * bill - pepsi;
    amount_due = 100 * bill - orange_juice;
    dollar_coins = amount_due / 100;
    amount_due = amount_due - 100 * dollar_coins;
    quarter_coins = amount_due / 25;
    amount_due = amount_due - 25 * quarter_coins;
    dimes_coins = amount_due / 10;
    amount_due = amount_due - 10 * dimes_coins;
    nickles_coins = amount_due / 5;
    amount_due = amount_due - 5 * nickles_coins;
    pennies_coins = amount_due / 1;

    if(beverage == "A")
    {
        std::cout << "\nYour total is $0.50. How much would you like to insert? ";
        std::cin >> bill;
        std::cout << "Your change is $" << dollar_coins << std::endl;
    }
    else if(beverage == "B")
    {
        std::cout << "\nYour total is $1. How much would you like to insert? ";
        std::cin >> bill;
        std::cout << "Your change is $" << dollar_coins << std::endl;
    }
    else if(beverage == "C")
    {
        std::cout << "\nYour total is $1.50. How much would you like to insert? ";
        std::cin >> bill;
        std::cout << "Your change is $" << dollar_coins << std::endl;
    }
    else if(beverage == "D")
    {
        std::cout << "\nYour total is $2. How much would you like to insert? ";
        std::cin >> bill;
        std::cout << "Your change is $" << dollar_coins << std::endl;
    }
    std::cout << "\nThank you for visitng!\n" << std::endl;

    return 0;
}