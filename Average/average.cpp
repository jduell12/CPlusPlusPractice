/***********************************
 ** Author: Jessica Duell
 ** Date: July 2, 2019
 ** Description: Asks user for four numbers and prints out the average of those numbers
 **********************************/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main (){
    double num1, num2, num3, num4, average;
    
    //asks user for four numbers to be averaged
    cout << "Please enter four numbers." << endl;
    cin >> num1;
    cin >> num2;
    cin >> num3;
    cin >> num4;
    
    //computes the average of the four numbers
    average = (num1 + num2 + num3 + num4)/4;
    
    //prints the average to the screen
    cout << "The average of those numbers is: \n";
    cout << average << endl;
    
    return 0;
}
