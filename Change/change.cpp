/***********************************
 ** Author: Jessica Duell
 ** Date: July 2, 2019
 ** Description: Asks user for number of cents from 0 to 99 and prints to the screen how many of each type of coin would represent the amount with the fewest number of coins
 **********************************/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;


int main (){
    int cents, quarter, dime, nickel, penny;
    const int QUARTER_VAL = 25;
    const int DIME_VAL = 10;
    const int NICKEL_VAL = 5;
    const int PENNY_VAL = 1;
    
    cout << "Please enter an amount in cents less than a dollar." << endl;
    cin >> cents;
    
    quarter = cents/QUARTER_VAL;
    cents -= (QUARTER_VAL*quarter);
    
    dime = cents/DIME_VAL;
    cents -= DIME_VAL*dime;
    
    nickel = cents/NICKEL_VAL;
    cents -= NICKEL_VAL*nickel;
    
    penny = cents/PENNY_VAL;
    
    cout << "Your change will be: \n" <<
    "Q: " << quarter << "\n" <<
    "D: " << dime << "\n" <<
    "N: " << nickel << "\n" <<
    "P: " << penny << endl;
    
    
    return 0;
}




