#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    std::srand(std::time(0));                 // Seed the random number generator
    int random_number = std::rand() % 10 + 1; // Generate a random number between 1 and 10
    std::cout << "Random number: " << random_number << std::endl;
    return 0;
}