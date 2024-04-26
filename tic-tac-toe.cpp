#include <iostream>
#include <cstdlib>
#include <ctime>

void game();
int randomNumber();

int main(int argc, char const *argv[])
{
    char choice;

    std::cout << "Would you like to play Tic-Tac-Toe? (y or n): ";
    std::cin >> choice;
    choice = tolower(choice);

    if(choice == 'y')
        game();
    else    
        return 0;

    std::cout << "   |   |\n"
              << "---|---|---\n"
              << "   |   |\n"
              << "---|---|---\n" 
              << "   |   |" << std::endl;

    return 0;
}

void game()
{
    int num;

    std::cout << "Choose a box (1 - 6): ";
    std::cin >> num;

    if(num == 1)
        std::cout << "x";
}

int randomNumber()
{
    return 1 + rand()% 6;
}