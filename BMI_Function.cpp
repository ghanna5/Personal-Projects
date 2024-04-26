#include <iostream>

void WeightBMI();
int HeightInput();
int WeightInput();

int main(int argc, char const *argv[])
{
    WeightBMI();

    return 0;
}
void WeightBMI()
{
    double weight;
    double height;
    double BMI;

    std::cout << "Please enter your weight (-1 to end): ";
    weight = WeightInput();

    while(weight != -1)
    {   
        std::cout << "Please enter your height in inches: ";
        height = HeightInput();

        BMI = (703 * weight) / (height * height);

        std::cout << "Your BMI is " << BMI << "." << std::endl;

        std::cout << "Please enter your weight (-1 to end): ";
        weight = WeightInput();
    }
}
int WeightInput()
{
    int weight;
    std::cin >> weight;

    if(weight < -1 || weight > 500)
    {
        std::cout << "Please enter your weight (-1 - 500): ";
        return WeightInput();
    }
    return weight;
}
int HeightInput()
{
    int height;

    std::cin >> height;

    if(height < 48 || height > 96)
    {
        std::cout << "Please enter your height in inches (48-96): ";
        return HeightInput();
    }
    return height;
}