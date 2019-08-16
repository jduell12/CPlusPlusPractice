#include <iostream>

using std::cout;
using std::endl;

int multiply(int, int);

int main(){
    cout << multiply(2, 5) << endl;
    cout << multiply(10, 10) << endl;
    cout << multiply(2, 4) << endl;
    cout << multiply(0, 2) << endl;
    cout << multiply(5,5) << endl;
    return 0;
}

int multiply(int num1, int num2){
    //initializes the variable product
    int product = 0;

    //makes sure num1 is larger than num2 otherwise it switches their values
    if(num1 < num2){
        int num3 = num1;
        num1 = num2;
        num2 = num3;
    }
    
    /*keeps adding num1 to the product until num2 is equal to 0. This effectively
    ** finds the product of the multiplication of the two numbers through addition. */
    if(num2 != 0){
        num2--;
        product = (num1 + multiply(num1, num2));
        return product;
    }
    //returns 0 once num2 is equal to 0
    else {
        return 0;
    }

}
