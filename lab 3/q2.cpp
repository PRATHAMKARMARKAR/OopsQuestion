/*Write a function that finds the minimum and the maximum value in an array of N integers.
Inputs to the function are the array of integers, an integer variable containing the length of the
array and references to integer variables that will contain the minimum and the maximum
values. The function prototype is:*/
#include <iostream>

void findMinMax(const int arr[], int length, int &minValue, int &maxValue) {
    if (length <= 0) {
        std::cerr << "Array length should be greater than 0." << std::endl;
        return;
    }

    
    minValue = arr[0];
    maxValue = arr[0];


    for (int i = 1; i < length; ++i) {
        if (arr[i] < minValue) {
            minValue = arr[i];
        }
        if (arr[i] > maxValue) {
            maxValue = arr[i];
        }
    }
}

int main() {
    
    const int arr[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
    int length = sizeof(arr) / sizeof(arr[0]);
    int minValue, maxValue;

    findMinMax(arr, length, minValue, maxValue);

    std::cout << "Minimum value: " << minValue << std::endl;
    std::cout << "Maximum value: " << maxValue << std::endl;

    return 0;
}
