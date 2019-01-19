//program practicing variables in C++

#include <iostream>
using namespace std;

int main (){
	int numberCats = 3;
	int numberDogs = 5;
	int numberAnimals = numberCats + numberDogs;

	cout << "Starting int variables: " << endl;
	cout << endl;

	cout << "Hello" << endl;
	cout << "Number of cats: " << numberCats << endl;
	cout << "Number of dogs: " << numberDogs << endl;
	cout << "Total pets: " << numberAnimals << endl;

	cout << "New dog acquired " << endl;
	numberDogs = numberDogs + 1;
	cout << "Number of dogs: " << numberDogs << endl;

	cout << "Starting string variables: " << endl;
	cout << endl;
 	string text1 = "Hello ";
	string text2 = "world";
	string text3 = text1 + text2;

	cout << text1 << text2 << endl;
	cout << text3<< endl;

	return 0;
}
