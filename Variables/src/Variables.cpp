//program practicing variables in C++

#include <iostream>
using namespace std;

int main (){
	int numberCats = 3;
	int numberDogs = 5;
	int numberAnimals = numberCats + numberDogs;

	cout << "Hello" << endl;
	cout << "Number of cats: " << numberCats << endl;
	cout << "Number of dogs: " << numberDogs << endl;
	cout << "Total pets: " << numberAnimals << endl;

	cout << "New dog acquired " << endl;
	numberDogs = numberDogs + 1;
	cout << "Number of dogs: " << numberDogs << endl;

	return 0;
}
