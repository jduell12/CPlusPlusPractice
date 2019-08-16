/******************************************************************************
 ** Date: July 28, 2019
 ** Description: Function that takes two parameters, an array of integers and
 ** the size of the array. The function returns the median of the array.
 *****************************************************************************/

double findMedian(int intArray[], int size){
    //initialize variables to 0
    int count = 0, count2 = 0, temp = 0;
    double median = 0;

    //sorts the array from lowest to highest values
    for(count=0; count < size; count++){
        for(count2=count+1; count2 < size; count2++){
            if(intArray[count] > intArray[count2]){
                temp = intArray[count];
                intArray[count] = intArray[count2];
                intArray[count2] = temp;
            }
        }
    }

    //gets the median of the array
    if (size % 2 == 0){
        /*Since the array size is even, we find the two middle numbers, add them together and
        * divide by 2 to get the median of the list*/
        int middleOfArray = size/2;
        int middleNum1 = intArray[middleOfArray];
        int middleNum2 = intArray[middleOfArray - 1];
        median = (middleNum1 + middleNum2)/2.0;
    } else {
        /*if we divide the size of the array by 2 the int value we get will be the median
        location in the array since the size is odd and the location of the elements
        start at 0 */
        median = intArray[(size/2)];

    }

    return median;
}
