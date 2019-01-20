#include <iostream>
#include <cmath>
using namespace std;

int main (){

	float pi = 3.14159;
	float input;


	//Printing to console the title of the project
	cout << "Geometry Formulas by Jessica Duell" << endl;
	//asking user for a length
	cout << "Enter one floating point number for length: " << flush;
	cin >> input;
	//converts input in cm to meters
	float meter = input/100;
	cout << "You entered " << input << " cm or " << meter << " m." << endl;
	//computes area of a square
	float sArea = meter * meter;
	cout << "Area of a square is " << sArea << " sq. m" << endl;

	//computes area of a circle
	float cArea = pi * (meter/2) * (meter/2);
	cout << "Area of a circle is " << cArea << " sq. m" << endl;

	//finds the difference between the square and the circle
	float diff = (sArea - cArea);
	cout << "The difference between the area of the square and the area of the circle is " << diff << " sq. m" << endl;

	//converts the input into meters to use in the cube calculations
	float meterInput = input/100;
	float side = floor(meterInput);
	float side2 = ceil(meterInput);

	//cube volume rounded down
	float volDown = side * side * side;
	cout << "Cube volume rounded down is " << volDown << " cu. m" << endl;

	//cube volume rounded up
	float volUp = side2 * side2 * side2;
	cout << "Cube volume rounded up is " << volUp << " cu. m" << endl;

	return 0;
}
