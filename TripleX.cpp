#include <iostream>

int main()
{
    std::cout << "You are a secret agent breaking into a server room...";
    std::cout << std::endl;
    std::cout << "You need to enter the correct codes to continue...";
    
    const int a = 4;
    const int b = 3;
    const int c = 2;

    const int sum = a + b + c; 
    const int product = a * b * c; 

    std::cout << std::endl;
    std::cout << sum << std::endl;
    std::cout << product << std::endl; 

    return 0; 
} 