#include <iostream>
#include "Crypt.h" // include the class 

int main()
{
    Crypt crypt; // create the obj
    crypt.DisplayMessage(); // display the message

    std::cout << "\n1. Enter the Crypt" << std::endl;
    std::cout << "2. Flee" << std::endl;

    std::cin.get(); // pause for a keypress before closing
    return 0;
}