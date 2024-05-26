/*Write a function that finds the minimum and the maximum value in an array of N integers.
Inputs to the function are the array of integers, an integer variable containing the length of the
array and references to integer variables that will contain the minimum and the maximum
values. The function prototype is:*/

    
#include <iostream>

void minmax(int array[], int length, int* min, int* max) {
    if (length <= 0) {
        
        std::cout << "Array is empty. Cannot find minimum and maximum." << std::endl;
        return;
    }

 
    *min = *max = array[0];

    
    for (int i = 1; i < length; ++i) {
        if (array[i] < *min) {
            *min = array[i];
        }
        if (array[i] > *max) {
            *max = array[i];
        }
    }
}

int main() {
 
    const int length = 7;
    int arr[length] = {10, 5, 7, 2, 8, 15, 1};

    int minValue, maxValue;

    minmax(arr, length, &minValue, &maxValue);

   
    std::cout << "Minimum value: " << minValue << std::endl;
    std::cout << "Maximum value: " << maxValue << std::endl;

    return 0;
}
