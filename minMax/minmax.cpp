/*****************************************************************************************
** Date: July 8, 2019
** Description: Asks a user how many numbers they want
** to enter. Asks the user to enter those numbers. Once
** all numbers are entered the program prints out the min
** and max
******************************************************************************************/

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    //initialize variables
    int min = 0,
    max = 0,
    count = 1,
    numToCheck,
    number;
    
    //asks user for number of integers they want to enter
    cout << "How many integers would you like to enter?" << endl;
    //sets the input to the variable number
    cin >> number;
    
    //asks user for the list of integers
    cout << "Please enter " << number << " integers that are greater or equal to 1." << endl;
    
    //sets the variables min and max to the first number
    cin >> min;
    
    //checks to make sure each integer is greater or equal to 1. If they enter a valid number sets max to first number
    if (min < 1){
        cout << "Ending program. Please restart and enter numbers greater or equal to 1" << endl;
        return 0;
    }else {
        max = min;
    }
    
//checks the next input number and compares it to min or max and sets min and max appropirately
    for(int count = 1; count < number; count++){
        cin >> numToCheck;
        //makes sure that each number being checked is valid
        if (numToCheck < 1){
            cout << "Ending program. Please restart and enter numbers greater or equal to 1" << endl;
            return 0;
        }
        else if (min > numToCheck){
            min = numToCheck;
        }
        else if (max < numToCheck){
            max = numToCheck;
        }
    }
    
    //checks to make sure min is less than max and then prints out the appropiate min and max
    if (min > max){
        int max2 = min;
        min = max;
        cout << "min: " << min << "\n"
        << "max: " << max2 << endl;
    }
    else {
        cout << "min: " << min << "\n"
        << "max: " << max << endl;
    }
    
    return 0;
    
}

