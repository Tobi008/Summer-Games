#include <iostream>
#include <ctime>

void PrintIntroduction(int Difficulty)
{
// Prints intro messages to the terminal
    std::cout << "\n \nYou're a highly skilled thief attempting to get into a Level " << Difficulty;
    std::cout << " top secret safe that holds many treasures\nTo get in you need to enter the correct codes to continue....\n\n";
    
}
bool PlayGame(int Difficulty)
{
//9GL730475
    PrintIntroduction(Difficulty);
    // Declare 3 number code 
   const int CodeA = rand() % Difficulty + Difficulty;
   const int CodeB = rand() % Difficulty + Difficulty;
   const int CodeC = rand() % Difficulty + Difficulty;

   const int CodeSum = CodeA + CodeB + CodeC;
   const int CodeProduct = CodeA * CodeB * CodeC;

    // print sum and product to terminal 
    std::cout << "+ There are 3 numbers in the code." ;
    std::cout << "\n+ The codes add up to: " << CodeSum;
    std::cout << "\n+ The codes multiply to give: " << CodeProduct << std::endl;

    // Store Player Guesses
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >>GuessC;
    
    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;
    
    // Check to see if guess is correct
    if(GuessSum == CodeSum && GuessProduct == CodeProduct){
        std::cout << "\n*** Well done!! You've beaten the first level of security, Keep Going! ***";
        return true;
    }

    else{
        std::cout << "\n*** Wrong Code! Careful! The Feds Coming!!! ***";
        return false;
    }
    
}

int main() 
{ 
  srand(time(NULL)); // Creates a new random sequence based on the time of day 
    int LevelDifficulty = 1;
    const int MaxLevel = 10;

    while (LevelDifficulty <= MaxLevel)// Loop until all level passed 
    {
         bool bLevelCompplete = PlayGame(LevelDifficulty); 
         std::cin.clear();
         std::cin.ignore();

         if (bLevelCompplete)
         {
           // Increase level difficulty 
            LevelDifficulty++; 
         }
    }
     std::cout << "\n*** Congrats You've beaten the game ***";
    return 0;
}