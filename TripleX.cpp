#include <iostream>

int main()
{
    // Print welcome messages to the terminal 
    std::cout << "You are a secret agent breaking into a server room...\n";
    std::cout << "You need to enter the correct codes to continue...\n\n";
    
    // Declare a 3 number code 
    const int CodeA = 4;
    const int CodeB = 3;
    const int CodeC = 2;

    const int CodeSum = CodeA + CodeB + CodeC; 
    const int CodeProduct = CodeA * CodeB * CodeC; 
 
    // Print CodeSum and CodeProduct to the terminal 
    std::cout << "+ There are 3 numbers in the code";
    std::cout << "\n+ The codes add up to: " << CodeSum;
    std::cout << "\n+ The codes multiply to give: " << CodeProduct; 

    // Store player guess
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;
    
    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    // Check if the players guess is correct 
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "\nYou win!";
    } 

    else
    {
        std::cout << "\nYou lose!";
    }

    return 0; 
} 
