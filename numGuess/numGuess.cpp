/**********************************************************************************
 ** Date: July 8, 2019
 ** Description: Asks user for a number so the user (or someone else) can guess it.
 ** Tells user if they are too high or too low on their guesses. Once the user
 ** guesses correctly the program prints out how many tries it took to guess.
 ***********************************************************************************/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

    int main(){
    //initializes variables
    int numToGuess = 0,
    guess = 0,
    numberOfGuesses = 0;
    bool correctGuess = false;
    
    //asks user for a number
    cout << "Enter the number for the player to guess." << endl;
    cin >> numToGuess;
    
    //asks user for a guess
    cout << "Enter your guess." << endl;
    cin >> guess;
    
    //keeps asking the user for a number until the user correctly guesses
    while(!correctGuess){
    //if guess is too high tells player it is too high and to try again
    if (guess > numToGuess){
        cout << "Too high - try again." << endl;
        cin >> guess;
        numberOfGuesses++;
        correctGuess = false;
    }
    //if guess is too low tells player it is too low and to try again
    else if (guess < numToGuess){
        cout << "Too low - try again." << endl;
        cin >> guess;
        numberOfGuesses++;
        correctGuess = false;
    }
    //if guess is correct exits the while loop
    else if(guess == numToGuess){
        numberOfGuesses++;
        correctGuess = true;
    }
}
    
    //tells player they guessed the number and how many tries it took
    cout << "You guessed it in " << numberOfGuesses << " tries." << endl;

    return 0;
}
