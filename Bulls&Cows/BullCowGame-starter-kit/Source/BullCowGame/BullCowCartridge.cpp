// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();

   // Welcome message to player 
    PrintLine(TEXT("Hello, Welcome to the Isogram game called Bulls and Cows! "));
    PrintLine(TEXT("Guess the 5 letter Word...")); // Magic Number, to be removed !

    InitGame();// Setting up the game
    PrintLine(TEXT("you have"));
    //Prompt for player guess 

}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
    ClearScreen();

    // Check player guess 
    if (Input == HiddenWord)
    {
        PrintLine(TEXT("You guessed correctly!"));
    }else
    {
        PrintLine(TEXT("Wrong Guess, Try again." ));
    }

    // Check if isogram
    //prompt to guess again 
    // Check if it is the right number of characters 
    // prompt to guess again 
    // Remove lives 

    // check number of lives > 0 
    // IF yes, Guess again 
    //Show lives left 
    // if no gameover show HiddenWord?
    //Prompt to play again 
    //Check user input 
}

void UBullCowCartridge::InitGame(){

    HiddenWord = TEXT("Snake");
    
    // Set Lives 
    lives = 5;
} 
