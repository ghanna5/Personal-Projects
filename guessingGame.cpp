#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

void randomGuess();

int main(int argc, char const *argv[])
{
    char choice;

    std::cout << "Would you like to play the guessing game? (y/n): ";
    std::cin >> choice;
    choice = tolower(choice);

    while (choice != 'y' && choice != 'n') 
    {
        std::cout << "Please enter either y/n: ";
        std::cin >> choice;
        choice = tolower(choice);
    }

    if (choice == 'y')
    {
        std::cout << "\nYou have 10 tries to guess a random number in a range of your choice." << std::endl;
    }

    else return 0;

    randomGuess();

    return 0;
}

void randomGuess()
{
    srand(time(NULL));
    int num;
    int answer;
    int max_num;
    char play_again;
    int count = 9;

    std::cout << "What is your deisred range? ";
    std::cin >> max_num;

    int number = 1 + rand()% max_num;

    std::cout << "\nYou have 10 tries to guess the number I am thinking of." << std::endl;
    std::cout << "Enter a guess between 1 and " << max_num << ": ";
    std::cin >> answer;

    while(answer != number)
    {
        if(answer < number)    
        {
            if (count == 1)
                std::cout << "\nToo low!\nYou have " << count << " more guess" << std::endl;
            else    
                std::cout << "\nToo low!\nYou have " << count << " more guesses" << std::endl;

            std::cout << "\nEnter another guess: ";
            std::cin >> answer;
            --count;
        }
        if(answer > number)    
        {
            if (count == 1)
                std::cout << "\nToo high!\nYou have " << count << " more guess" << std::endl;
            else    
                std::cout << "\nToo high!\nYou have " << count << " more guesses" << std::endl;

            std::cout << "\nEnter another guess: ";
            std::cin >> answer;
            --count;
        }
        if(answer == number)
        {
            std::cout << "\nCongratulations! You guessed the correct number!" << std::endl;
            break;
        }
        if (count == 0)   
        {
            std::cout << "\nThe number I chose was " << number << std::endl;
            std::cout << "You ran out of guesses! Game over!" << std::endl;
            break;
        }
    }

    std::cout << "\nWould you like to play again? (y/n): ";
    std::cin >> play_again;
    play_again = tolower(play_again);
    std::cout << std::endl;

    while(play_again != 'y' && play_again != 'n')
    {
        std::cout << "Please enter either y/n: ";
        std::cin >> play_again;
        play_again = tolower(play_again);
    }

    if(play_again == 'y')
        return randomGuess();
}