#include <iostream>
#include <cstdlib> 
#include <ctime>  

int main()
{
    // Seed the random number generator
    srand(time(nullptr));

    // Generate and print a random number between 0 and 99
    int randomNumber = rand() % 100; // Modulo 100 ensures number is in range [0, 99]
    bool whilecon = true;
    int quess;
    int attempts = 6;
    std::cout <<randomNumber;
    while (whilecon)
    {
        std::cout << "guess:";
        std::cin >> quess;
        if (quess > randomNumber){
            std::cout << "too high"<< std::endl;
            attempts--;
        }else if(quess < randomNumber){
            std::cout << "too low"<< std::endl;
            attempts--;
        }else if(quess == randomNumber){
            std::cout << "you got the number" <<std::endl;
            whilecon = false;
        }
        if(attempts == 0){
            std::cout << "you failed: the number is "<< randomNumber << std::endl;
            whilecon = false;

        }
    }
    



    return 0;
}