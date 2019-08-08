/*****************************************
 ** Author: Jessica Duell
 ** Date: July 2, 2019
 ** Description: Program that prompts a user for a temperature in Celsius and converts it to Fahrenheit and prints the result to the screen
 ****************************************/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main (){
    double celsius, fahrenheit;
    
    //prompts user to enter a temperature in Celsius
    cout << "Please enter a Celsius temperature." << endl;
    cin >> celsius;
    
    //converts celsius to fahrenheit
    fahrenheit = ((9.0/5)*celsius) + 32;
    
    //prints the converted temperature to the screen
    cout << "The equivalent Fahrenheit temperature is: \n";
    cout << fahrenheit << endl;
    
    return 0;
}
