#include <iostream>
#include <iomanip>
#include <cmath>

int main(int argc, char const *argv[])
{
   int side1, side2, side3;
   int count = 0;

    std::cout << "Side 1" << std::setw(11) << "Side 2" << std::setw(11) << "Side3" << std::endl;

    for(side1 = 1; side1 <= 500; side1++)
    {
        for(side2 = 1; side2 <= 500; side2++)
        {
            for(side3 = 1; side3 <= 500; side3++)
            {
                int x1, x2, x3;
                x3 = side1 * side1 + side2 * side2;
                x1 = side2 * side2 + side3 * side3;
                x2 = side3 * side3 + side1 * side1;
            
                if(x3 == side3 * side3 || x2 == side2 * side2 || x1 == side1 * side1)
                {
                    std::cout << side1 << std::setw(10) << side2 << std::setw(10) << side3 << std::endl;
                    count++;
                }
            }
        }
    }
   std::cout << "A total of " << count/6 << " triples were found." << std::endl;;
}