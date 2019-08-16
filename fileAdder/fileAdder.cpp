/**********************************************************************************
** Date: July 8, 2019
** Description: Program asks user for an input file. If the file is there and
** can be opened the program opens the file and adds the integers together into a
** sum. Program writes the sum to an output file called sum.txt
***********************************************************************************/

#include<iostream>
#include<fstream>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ifstream;
using std::ofstream;

int main(){
    //initialize variables
    string fileName;
    ifstream inputFile;
    ofstream outputFile;
    int value;
    int sum = 0;
    
    //asks user for a filename
    cout << "Please enter your filename." << endl;
    cin >> fileName;
    
    //opens inputfile using the filename given
    inputFile.open(fileName);
    
    //if the file is successfully opened the program processes it
    if(inputFile){
        //adds each integer together until it reaches the end of the file
        while(inputFile >> value){
            sum += value;
        }
    //program creates and opens an output file called sum.txt
    outputFile.open("sum.txt");
    //writes the sum to the output file
    outputFile << sum << "\n";
    //lets user know sum was printed to the output file
    cout << "result written to sum.txt" << endl;
    }
    //if the file is not successfully opened prints the error to the console
    else {
        cout<< "could not access file" << endl;
    }
    //closes inputFile and outputFile
    inputFile.close();
    outputFile.close();
    
    return 0;
}
