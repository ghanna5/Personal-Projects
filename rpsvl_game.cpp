// who: <George Hanna, ghanna5>
// what: <Rock-Paper-Scissors-Vader-Luke>
// why: <Project 1>
// when: <10/09/2022>

#include <iostream>
#include <cstdlib>
#include <ctime>

void round();
void rock(int choice);
void paper(int choice);
void scissors(int choice);
void Vader(int choice);
void Luke(int choice);
int getRandomChoice();
char userChoice();
std::string translateChoices(int CUchoice);

int main(int argc, char const *argv[])
{
    char answer;

    std::cout << "\nWelcome to Rock-Paper-Scissors-Vader-Luke" << std::endl;
    std::cout << "Rules:" << std::endl;
    std::cout << "\tScissors cuts paper.\n" <<
                 "\tPaper covers rock.\n" <<
                 "\tRock bashes Vader.\n" <<
                 "\tVader throws Luke.\n" <<
                 "\tLuke bends scissors.\n" <<
                 "\tScissors stab Vader.\n" <<
                 "\tVader burns paper.\n" <<
                 "\tPaper banishes Luke.\n" <<
                 "\tLuke crushes rock.\n" <<
                 "\tRock breaks scissors.\n" << std::endl;
    std::cout << "Would you like to play Rock-Paper-Scissors-Vader-Luke? (y/n): ";
    std::cin >> answer;
    answer = tolower(answer);

    while (answer != 'y' && answer != 'n')
    {
        std::cout << "That is not a valid answer. Would you like to play? (y/n): ";
        std::cin >> answer;
        answer = tolower(answer);
    }
    if (answer == 'n') return 0;

    round();
   
    return 0;
}

void round()
{
    int choice = userChoice();
    int computerChoice = getRandomChoice();

    switch(computerChoice)
    {
        case 1:
            return rock(choice);
        case 2:
            return paper(choice);
        case 3:
            return scissors(choice);
        case 4:
            return Vader(choice);
        case 5:
            return Luke(choice);
    }
}

void rock(int choice)
{
    char playAgain;
    int computerChoice = getRandomChoice();

    std::cout << "You chose " << translateChoices(choice) << " the computer chose " << translateChoices(computerChoice) << std::endl;

    if(choice == 4 && computerChoice == 1)
    {
        std::cout << "Rock bashes Vader" << std::endl;
        std::cout << "You lose!" << std::endl;
    }
    else if(choice == 3 && computerChoice == 1)
    {
        std::cout << "Rock breaks scissors" << std::endl;
        std::cout << "You lose!" << std::endl;
    }
    else if(choice == 1 && computerChoice == 2)
    {
        std::cout << "Paper covers rock" << std::endl;
        std::cout << "You lose!" << std::endl;
    }
    else if(choice == 1 && computerChoice == 5)
    {
        std::cout << "Luke crushes rock" << std::endl;
        std::cout << "You lose!" << std::endl;
    }
    else if(choice == 2 && computerChoice == 1)
    {
        std::cout << "Paper covers rock" << std::endl;
        std::cout << "You win!" << std::endl;
    }
    else if(choice == 1 && computerChoice == 4)
    {
        std::cout << "Rock bashes Vader" << std::endl;
        std::cout << "You win!" << std::endl;
    }
    else if(choice == 1 && computerChoice == 3)
    {
        std::cout << "Rock breaks scissors" << std::endl;
        std::cout << "You win!" << std::endl;
    }
    else if(choice == 5 && computerChoice == 1)
    {
        std::cout << "Luke crushes rock" << std::endl;
        std::cout << "You win!" << std::endl;
    }
    else
    {
        std::cout << "It's a tie!" << std::endl;
    }
    std::cout << "\nPlay again? (y/n): ";
    std::cin >> playAgain;
    playAgain = tolower(playAgain);
   
    while(playAgain != 'y' && playAgain != 'n')
    {
        std::cout << "Invalid choice. Please enter Y or N: ";
        std::cin >> playAgain;
        playAgain = tolower(playAgain);
    }
    if (playAgain == 'y')
    {
        return round();
    }
}

void paper(int choice)
{
    char playAgain;
    int computerChoice = getRandomChoice();

    std::cout << "You chose " << translateChoices(choice) << " the computer chose " << translateChoices(computerChoice) << std::endl;

    if(choice == 1 && computerChoice == 2)
    {
        std::cout << "Paper covers rock" << std::endl;
        std::cout << "You lose!" << std::endl;
    }
    else if(choice == 5 && computerChoice == 2)
    {
        std::cout << "Paper banishes Luke" << std::endl;
        std::cout << "You lose!" << std::endl;
    }
    else if(choice == 2 && computerChoice == 3)
    {
        std::cout << "Scissors cuts paper" << std::endl;
        std::cout << "You lose!" << std::endl;
    }
    else if(choice == 2 && computerChoice == 4)
    {
        std::cout << "Vader burns paper" << std::endl;
        std::cout << "You lose!" << std::endl;
    }
    else if(choice == 2 && computerChoice == 1)
    {
        std::cout << "Paper covers rock" << std::endl;
        std::cout << "You win!" << std::endl;
    }
    else if(choice == 2 && computerChoice == 5)
    {
        std::cout << "Paper banishes Luke" << std::endl;
        std::cout << "You win!" << std::endl;
    }
    else if(choice == 3 && computerChoice == 2)
    {
        std::cout << "Scissors cuts paper" << std::endl;
        std::cout << "You win!" << std::endl;
    }
    else if(choice == 4 && computerChoice == 2)
    {
        std::cout << "Vader burns paper" << std::endl;
        std::cout << "You win!" << std::endl;
    }
    else
    {
        std::cout << "It's a tie!" << std::endl;
    }
    std::cout << "\nPlay again? (y/n): ";
    std::cin >> playAgain;
    playAgain = tolower(playAgain);
   
    while(playAgain != 'y' && playAgain != 'n')
    {
        std::cout << "Invalid choice. Please enter Y or N: ";
        std::cin >> playAgain;
        playAgain = tolower(playAgain);
    }
    if (playAgain == 'y')
    {
        return round();
    }
}

void scissors(int choice)
{
    char playAgain;
    int computerChoice = getRandomChoice();

    std::cout << "You chose " << translateChoices(choice) << " the computer chose " << translateChoices(computerChoice) << std::endl;

    if(choice == 2 && computerChoice == 3)
    {
        std::cout << "Scissors cuts paper" << std::endl;
        std::cout << "You lose!" << std::endl;
    }
    else if(choice == 4 && computerChoice == 3)
    {
        std::cout << "Scissors stab Vader" << std::endl;
        std::cout << "You lose!" << std::endl;
    }
    else if(choice == 3 && computerChoice == 1)
    {
        std::cout << "Rock breaks scissors" << std::endl;
        std::cout << "You lose!" << std::endl;
    }
    else if(choice == 3 && computerChoice == 5)
    {
        std::cout << "Luke bends scissors" << std::endl;
        std::cout << "You lose!" << std::endl;
    }
    else if(choice == 5 && computerChoice == 3)
    {
        std::cout << "Luke bends scissors" << std::endl;
        std::cout << "You win!" << std::endl;
    }
    else if(choice == 1 && computerChoice == 3)
    {
        std::cout << "Rock breaks scissors" << std::endl;
        std::cout << "You win!" << std::endl;
    }
    else if(choice == 3 && computerChoice == 2)
    {
        std::cout << "Scissors cuts paper" << std::endl;
        std::cout << "You win!" << std::endl;
    }
    else if(choice == 3 && computerChoice == 4)
    {
        std::cout << "Scissors stab Vader" << std::endl;
        std::cout << "You win!" << std::endl;
    }
    else
    {
        std::cout << "It's a tie!" << std::endl;
    }
    std::cout << "\nPlay again? (y/n): ";
    std::cin >> playAgain;
    playAgain = tolower(playAgain);
   
    while(playAgain != 'y' && playAgain != 'n')
    {
        std::cout << "Invalid choice. Please enter Y or N: ";
        std::cin >> playAgain;
        playAgain = tolower(playAgain);
    }
    if (playAgain == 'y')
    {
        return round();
    }
}

void Vader(int choice)
{
    char playAgain;
    int computerChoice = getRandomChoice();

    std::cout << "You chose " << translateChoices(choice) << " the computer chose " << translateChoices(computerChoice) << std::endl;

    if(choice == 5 && computerChoice == 4)
    {
        std::cout << "Vader throws Luke" << std::endl;
        std::cout << "You lose!" << std::endl;
    }
    else if(choice == 2 && computerChoice == 4)
    {
        std::cout << "Vader burns paper" << std::endl;
        std::cout << "You lose!" << std::endl;
    }
    else if(choice == 4 && computerChoice == 3)
    {
        std::cout << "Scissors stab Vader" << std::endl;
        std::cout << "You lose!" << std::endl;
    }
    else if(choice == 4 && computerChoice == 1)
    {
        std::cout << "Rock bashes Vader" << std::endl;
        std::cout << "You lose!" << std::endl;
    }
    else if(choice == 1 && computerChoice == 4)
    {
        std::cout << "Rock bashes Vader" << std::endl;
        std::cout << "You win!" << std::endl;
    }
    else if(choice == 3 && computerChoice == 4)
    {
        std::cout << "Scissors stab Vader" << std::endl;
        std::cout << "You win!" << std::endl;
    }
    else if(choice == 4 && computerChoice == 5)
    {
        std::cout << "Vader throws Luke" << std::endl;
        std::cout << "You win!" << std::endl;
    }
    else if(choice == 4 && computerChoice == 2)
    {
        std::cout << "Vader burns paper" << std::endl;
        std::cout << "You win!" << std::endl;
    }
    else
    {
        std::cout << "It's a tie!" << std::endl;
    }
    std::cout << "\nPlay again? (y/n): ";
    std::cin >> playAgain;
    playAgain = tolower(playAgain);
   
    while(playAgain != 'y' && playAgain != 'n')
    {
        std::cout << "Invalid choice. Please enter Y or N: ";
        std::cin >> playAgain;
        playAgain = tolower(playAgain);
    }
    if (playAgain == 'y')
    {
        return round();
    }
}

void Luke(int choice)
{
    char playAgain;
    int computerChoice = getRandomChoice();

    std::cout << "You chose " << translateChoices(choice) << " the computer chose " << translateChoices(computerChoice) << std::endl;

    if(choice == 3 && computerChoice == 5)
    {
        std::cout << "Luke bends scissors" << std::endl;
        std::cout << "You lose!" << std::endl;
    }
    else if(choice == 1 && computerChoice == 5)
    {
        std::cout << "Luke crushes rock" << std::endl;
        std::cout << "You lose!" << std::endl;
    }
    else if(choice == 5 && computerChoice == 2)
    {
        std::cout << "Paper banishes Luke" << std::endl;
        std::cout << "You lose!" << std::endl;
    }
    else if(choice == 5 && computerChoice == 4)
    {
        std::cout << "Vader throws Luke" << std::endl;
        std::cout << "You lose!" << std::endl;
    }
    else if(choice == 4 && computerChoice == 5)
    {
        std::cout << "Vader throws Luke" << std::endl;
        std::cout << "You win!" << std::endl;
    }
    else if(choice == 2 && computerChoice == 5)
    {
        std::cout << "Paper banishes Luke" << std::endl;
        std::cout << "You win!" << std::endl;
    }
    else if(choice == 5 && computerChoice == 3)
    {
        std::cout << "Luke bends scissors" << std::endl;
        std::cout << "You win!" << std::endl;
    }
    else if(choice == 5 && computerChoice == 1)
    {
        std::cout << "Luke crushes rock" << std::endl;
        std::cout << "You win!" << std::endl;
    }
    else
    {
        std::cout << "It's a tie!" << std::endl;
    }
    std::cout << "\nPlay again? (y/n): ";
    std::cin >> playAgain;
    playAgain = tolower(playAgain);
   
    while(playAgain != 'y' && playAgain != 'n')
    {
        std::cout << "Invalid choice. Please enter Y or N: ";
        std::cin >> playAgain;
        playAgain = tolower(playAgain);
    }
    if (playAgain == 'y')
    {
        return round();
    }
}

int getRandomChoice()
{
    srand(time(NULL));
    return rand() %5 + 1;
}

char userChoice()
{
    char user;

    std::cout << "\nOption Menu\n" <<
                 "(R)ock\n" <<
                 "(P)aper\n" <<
                 "(S)cissors\n" <<
                 "(V)ader\n" <<
                 "(L)uke\n" <<
                 "Enter the letter of your choice: ";
    std::cin >> user;
    user = tolower(user);

    while(user != 'r' && user != 'p' && user != 's' && user != 'v' && user != 'l')
    {
        std::cout << "That is not a valid answer. Please enter (R, P, S, V, or L): ";
        std::cin >> user;
        user = tolower(user);
    }
    switch(user)
    {
        case 'r':
            return 1;
        case 'p':
            return 2;
        case 's':
            return 3;
        case 'v':
            return 4;
        case 'l':
            return 5;
    }
    return user;
}

std::string translateChoices(int CUchoice)
{
    switch(CUchoice)
    {
        case 1:
            return "rock";
        case 2:
            return "paper";
        case 3:
            return "scissors";
        case 4:
            return "Vader";
        case 5:
            return "Luke";
     }
}
