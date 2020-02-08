/*
  Hello, my name is Daniel Calabrese, and this 
  is my password generating application. 
  Enjoy!
  
  Ver: 1.0
  2/8/2020
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <stdio.h>   
#include <stdlib.h>     
#include <time.h>

//lets the user quit by pressing enter key
void ExitFunc()
{
    int c;
    printf("Press ENTER To Exit... ");
    fflush(stdout);
    do c = getchar(); 
    while ((c != '\n') && (c != EOF));
}

//creates the seed for the random number generation
void CreatSeed()
{
    unsigned seed = time(0);
    srand(seed);
}

int main()
{
    //charcters in an array that can be used in the final password
    char characters[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
    'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 
    'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 
    'x', 'y', 'z', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '!', '@', '#', '$', '%', 
    '^', '&', '*', '(', ')', '?', '<', '>', '_', '-'};

    //prints out generated password to user
    std::cout << "Hello World!\n";
    std::cout << "And Welcome To The Password Genorator App 1.0!\n";
    std::cout << "Here Is Your Password\n";
    std::cout << "--------------------------------------------------\n";
    std::cout << "\n";
    CreatSeed();
    for (int i = 0; i < 12; i++)
    {
        std::cout << characters[rand() % sizeof(characters)];
    }
    std::cout << "\n";
    std::cout << "\n";
    ExitFunc();

    return 0;
}